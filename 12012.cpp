/*****************************************
	Xu li mang Ma Phuong / Magic Matrix / sudoku 
	bac n = bang vuong n*n chua 1... n^2
	sum cot, dong, cheo = V (dac so)
	Ma hoa / tam linh phong thuy / kinh dich
	thuat toan da co
	Dac so = sum(1,n)/n = (n^2)(n^2+1)/2n = n(n^2+1)/2
	Gauss 1 + 2 +...+ 99 + 100 = 101*50 = 5050 
	
	
	ma phuong le(n)
	1. chiem o giua dong 1. viet 1
	2. tu 2 --> n^2. Di theo huong Dong Bac.
		SU CO goc ngoai: den duoi
			  canh phai: dich trai
			  canh tren: day xuong
			  vuong: den duoi
	
	nhap ma phuong bac 5
			1	2	3	4	5
			
			
	1		17	24	1	8	15
	2		23	5	7	14	16	
	3		4	6	13	20	22	
	4		10	12	19	21	3	
	5		11	18	25	2	9	
	
	
	



*****************************************/
#include <bits/stdc++.h>
#include <math.h>


using namespace std;

const int MN = 200;
int a[MN][MN];

void PP(int n) {
	int i,j;
	for(int i=1;i<=n;++i) {
		cout<<endl;
		for(int j=1;j<=n;++j) {
			cout<<a[i][j]<<" ";
		}
	}
}


bool test(int n) {
	int s = n*(pow(n,2)+1)/2; // dac so
	cout<<endl<<"dac so cua MPL bac "<<n<<" = "<<s;
	int row,col,sum;
	for (row=1; row<=n; ++row) {  // kiem tra dong row
		sum=0;
		for(col=1; col<=n; ++col) {  // duyet cot
			sum += a[row][col];
		}
		if (sum != s) {
			cerr<<endl<<"ERROR at row "<<row;
			exit(2);
		}
		else cout<<endl<<"ROW "<<row<<" oke";
	} // for row 
	for (col=1; col<=n; ++col) {  // kiem tra dong row
		sum=0;
		for(row=1; row<=n; ++row) {  // duyet cot
			sum += a[row][col];
		}
		if (sum != s) {
			cerr<<endl<<"ERROR at col "<<col;
			exit(3);
		}
		else cout<<endl<<"COL "<<col<<" oke";
	} // for col
	// 2 cheo
	int c1 = 0,c2 = 0;
	col = 5;
	for(row = 1, col = n; row<=n; ++row, --col){
		c1 += a[row][row];
		c2 += a[row][col];
	}
	if (c1 != s) {
		cerr<<endl<<"ERROR at cheo chinh "<<c1;
		exit(2);
	}
	else cout<<endl<<"Cheo chinh "<<c1<<" oke.";
	if (c2 != s) {
		cerr<<endl<<"ERROR at cheo phu "<<c2;
		exit(2);
	}
	else cout<<endl<<"Cheo phu "<<c2<<" oke.";
	
	
}




// ma phuong bac le
void MPL(int n) {
	if( (n&1)==0 ) {
		cerr<<endl<<"ERROR: n khong pai la so le: "<<n;
		exit(1);
	}
	int i,j,k;
	memset(a,0,sizeof(a)); // dien toan 0
	// phat hien vuong
	i=1; j=n/2 +1; // dong 1, cot giua
	a[1][j] = 1;
	int nn=n*n;
	for(k=2; k<=nn; ++k) {
	// tim vi tri i,j de ghi k
	// dong bac
	--i; ++j;
		if ( i<1 && j>n ) { // goc tren phai : den duoi
			i += 2; --j;
		}
		else if( i<1 ) { // canh tren : day xuong
			i=n;
		}	
		else if( j>n ) { // canh phai : day trai
			j=1;
		}	
		// vuong
		if( a[i][j] >0 ) {
			i += 2; --j; 
		}
		a[i][j]=k;
	}
	PP(n);
	test(n);
}



int main()
{
	for (int n=1; n<10; n+=2){
		MPL(n);
	}
	
	
		
	return 0;
}











// code by Manh

