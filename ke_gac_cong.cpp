#include <iostream>
using namespace std;
main ()
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int p,m,g;
	cin >> p >> m >> g;
	int dem1 = 0;
	int du1 = p%(a+b);
	if ( du1!=0 && du1 <= a ) dem1++;
	int du11 = p%(c+d);
	if ( du11!=0 && du11<=c ) dem1++;
	if ( dem1==0 ) cout << "none" << endl;
	else if ( dem1==1 ) cout << "one" << endl;
	else cout << "both" << endl;
	int dem2 = 0, du2, du22;
	du2 = m%(a+b);
	if ( du2!=0 && du2<=a ) dem2++;
	du22 = m%(c+d);
	if ( du22!=0 && du22<=c) dem2++;
	if ( dem2==0 ) cout << "none" << endl;
	else if ( dem2==1 ) cout << "one" << endl;
	else cout << "both" << endl;
	int du3, du33, dem3 = 0;
	du3 = g%(a+b);
	if ( du3!=0 && du3<=a) dem3++;
	du33 = g%(c+d);
	if ( du33!=0 && du33 <=c ) dem3++;
	if ( dem3==0 ) cout << "none";
	else if ( dem3==1 ) cout << "one";
	else cout << "both";
}

// code by Manh.


