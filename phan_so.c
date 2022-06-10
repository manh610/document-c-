#include <stdio.h>

struct phan_so {
	long long tu, mau;
};

long long gcd(long long a, long long b) { return (b==0)?a:gcd(b,a%b); }

void xu_ly( struct phan_so a, struct phan_so b) {
	// rut gon 2 phan so ban dau
	
	long long tu1 = a.tu/gcd(a.tu,a.mau);
	long long mau1 = a.mau/gcd(a.tu,a.mau);
	long long tu2 = b.tu/gcd(b.tu,b.mau);
	long long mau2 = b.mau/gcd(b.tu,b.mau);
	
	// quy dong
	long long mc = (mau1*mau2)/gcd(mau1,mau2);
	a.tu = tu1*(mc/mau1);
	b.tu = tu2*(mc/mau2);	
	printf("%lld/%lld ",a.tu,mc);
	printf("%lld/%lld\n",b.tu,mc);	
	// tinh tong
	long long tu = a.tu+b.tu;
	// mau = mc
	// rut gon tong
	long long tu_tong = tu/gcd(tu,mc);
	long long mau = mc/gcd(tu,mc);
	printf("%lld/%lld\n",tu_tong,mau);
	
	// tinh thuong
	long long i = a.tu*mc;
	long long k = mc*b.tu;
	// rut gon thuong
	long long x = i/gcd(i,k);
	k = k/gcd(i,k); 
	printf("%lld/%lld\n",x,k);
}

int main()
{
	int test,dem=0;
	scanf("%lld",&test);
	while ( test-- ) {
		struct phan_so p,q;
		scanf("%lld %lld", &p.tu, &p.mau);
		scanf("%lld %lld", &q.tu, &q.mau);
		printf("Case #%d:\n",++dem);
		xu_ly(p,q);
	}
	return 0;
}

// code by NuNu
