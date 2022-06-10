#include <iostream>
#include <cmath>
using namespace std;

int n,s,b;

void chuyen_sang_he_co_so_b(int n, int b) 
{
	char a[100];
	int count = 0;
	while ( n>0 ) {
		int m = n%b;
		if ( m>=10 ) a[count] = (char) ( m + 55 );
		else a[count] = (char) (m + 48);
		count++;
		n/=b;
	}
	for ( int i = count-1; i>=0; i--) cout << a[i];
}

void phan_tich_thua_so_nguyen_to(int n)
{
	for ( int i = 2; i<=n; i++) {
		if ( n%i==0 ) {
			while ( n%i==0 ) {
				cout << i << " ";
				n/=i;
			}
		}
	}
}

bool ktra_so_hoan_hao(int n)
{
	long long sum = 0;
	for ( int i = 1; i<n; i++ ) {
		if ( n%i==0 ) sum+=i;
	}
	return sum==n;
}

void duyet_so_hoan_hao(int n)
{
	for ( int i = 1; i<n; i++) {
		if ( ktra_so_hoan_hao(i) ) cout << i << " ";
	}
}

int tong_uoc(int n)
{
	int sum = 0;
	for ( int i = 1; i<n; i++ ) {
		if ( n%i==0 ) sum+=i;
	}
	return sum;
}

void duyet_cap_so_huu_nghi(int n)
{
	for ( int i = 1; i<n-1; i++) {
		for ( int j = i+1; j<n; j++ ){
			if ( i==tong_uoc(j) && j==tong_uoc(i) ) 
				cout << i << " " << j << endl;
		}
	}
}

bool ktra_snt(int n)
{
	if ( n<2 ) return false;
	for ( int i = 2; i<=sqrt(n); i++ ) {
		if ( n%i==0 ) return false;
	}
	return true;
}

void duyet_snt(int n) 
{
	for ( long long j = pow(10,n-1); j<=pow(10,n)-1; j++) {
		if ( ktra_snt(j) ) cout << j << " ";
	}
}

int tong_chu_so(int n)
{
	int s = 0;
	while ( n>0 ) {
		s += n%10;
		n/=10;
	}
	return s;
}

void snt_tong_S(int n, int s) 
{
	for ( int i = 2; i<=n; i++) {
		if ( ktra_snt(i) && tong_chu_so(i)==s ) cout << i << " ";
	}
}

bool ktra_stn(int n) 
{
	int a = n;
	int tmp = 0;
	while ( n>0 ) {
		tmp = tmp*10 + n%10;
		n/=10;
	}
	return a==tmp;
}

void duyet_stn_tong_S(int n, int s)
{
	for ( int i = pow(10,n-1); i<=pow(10,n)-1; i++) {
		if ( ktra_stn(i) && tong_chu_so(i)==s ) 
			cout << i << " ";
	}
}

void duyet_cap_so_nguyen_to(int n)
{
	for ( int i = 2; i<n/4; i++) {
		if ( ktra_snt(i) && (4*i+1)<n && ktra_snt(4*i+1) )
			cout << i << " " << 4*i+1 << endl;
	}
}



main ()
{
	cin >> n;
	duyet_cap_so_nguyen_to(n);
	
	//duyet_stn_tong_S(n,s);
	
	//chuyen_sang_he_co_so_b(n,b);
}

// code by Manh.


