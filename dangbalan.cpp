/****************************
	
	expression.cpp
	xu li tuan tu
	translate to the polish form
	h + c * z = 7 + 2 * 25 = 57
	( a+b*c ) / ( d - (e - x) )  -->	abc*+dex--/
	(a*d + b/c) % (d - (e! - x)! ) --->  ad*bc/+de!x-!-%
	
	
	toan tu:
	scan each char s[i]
	s[i] la chu cai: xuat ghep vao chuoi output
	s[i] = '('  --> cat vao stack
	phep toan: so sanh voi moi stack
		ro stack co do uu tien thap, nap moi
	s[i] =  + -  -->  cat vao stack
	s[i] = ! --> xuat
	s[i] = * / %  --> cat vao stack
	
	
*********************************/
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

// da co dang BaLan / polish / phep toan sau
// tinh tri
// duyet tung ki tu s[i] trong s
// neu s[i] la chu cai a...z : nap tri cua chu cai 
// neu la phep toan @ 2 ngoi : ngan duoi @ ngan tren
// ghi vao ngan duoi        ngan duoi @= ngan tren
// bo ngan tren cua stack

const int MN = 200;
int st[MN]; // stack
int ts; // top of st

bool alpha(char c)	{ return (c >= 'a' && c <= 'z'); }

int val(char c)	{ return c-'a'; }
 
int factorial(int n) {
	int r = 1;
	for(int i = 2; i <= n; ++i){
		r *= i;
	}
	return r;
}

// co loi ? khong loi
// polish(" x + y*z ")   "xyz*+"
// compute(u) = 57
// thua thieu ngoac
// x +- y, x *- y
// ( x + 2 ) * ( 7 - y )
// ( ab - c )
// ( a12b - c34 * de )
// ( x + 17 - xI + y - z ) ket qua phai viet duoi dang roma
string polish(string s) {
	
}

int compute(string s) {
	int len = s.length();
	cout<<endl<<"Input: "<< s <<"    len = "<<len;
	ts = 0;
	for(int i = 0; i < len; ++i) {
		if( alpha(s[i]) ) {
			// nap tri cua s[i] vao stack
			st[++ts] = val( s[i] );
			continue;
		}
		// xem no la phep toan gi
		switch( s[i] ) {
			case( '+' ): st[ts-1] += st[ts];
					     --ts; break;
			case( '-' ): st[ts-1] -= st[ts];
					     --ts; break;
			case( '*' ): st[ts-1] *= st[ts];
					     --ts; break;
			case( '/' ): st[ts-1] /= st[ts];
					     --ts; break;
			case( '%' ): st[ts-1] %= st[ts];
					     --ts; break;
			case( '!' ): st[ts] = factorial(st[ts]);
					     break;
		} // switch
	} // for
	return st[ts];	
} //

void allval() {
	for( char c = 'a'; c <= 'z'; ++c)
		cout<<endl<< c <<" : "<< val(c);
}
void allfac( int v) {
	for(int n = 0; n <= v; ++n)
		cout<<endl<<n<<"! = "<<factorial(n);
}

int main()
{	
	// h + c * z  --> hcz*+
	// h + d! - (z/d) --> 7 + 3! - (25/3) = 5
	// ( h + d! - (z/d) + h + d! - (z/d) ) * hcz*+
	
	cout<<"\n"<<compute("hd!+zd/-h+d!+zd/-*hcz*+"); // 5
	
	
	// allval();
	//allfac(16);
	
	
	return 0;
}

// code by Manh

