#include <stdio.h>
#include <math.h>
int snt(int n) {
	int i;
	if ( n < 2 ) return 0;
	for ( i = 2; i <= sqrt(n); i++) {
		if ( n%i==0)
			return 0;
	}
	return 1;
}

int p[101];

void Sang() {
	int i,j;
	p[0] = p[1] = 0;
	for ( i = 2; i <= 10; i++ ) {
		if ( p[i]==1 ) {
			for ( j = i*i; j < 100; j+=i)
				p[j] = 0;
		}
	}
}

int thuan(int n) {
	int sum = 0;
	while ( n ) {
		int du = n%10;
		if ( p[du]==0 ) return 0;
		n/=10;
		sum += du;		
	}
	return (p[sum]==1)?1:0;
}

int main()
{
	int test,i;
	scanf("%d",&test);
	for ( i = 2; i < 100; i++ ) p[i] = 1;
	Sang();
	while ( test-- ) {
		int i,a,b,dem = 0;
		scanf("%d%d",&a,&b);
		if ( a>b ) {
			int tmp = a;
			a = b;
			b = tmp;
		}
		for ( i = a; i <= b; i++) {
			if ( thuan(i) ) {
				if ( snt(i) ) 
					dem++;
			}
		}
		printf("%d\n",dem);
	}
	return 0;
}

