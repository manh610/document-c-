#inclue <iostream>
using namespace std;

double calc( int k)  // tra ve gia tri F[k]
{
	
}
int T_search( double l, double r) {
	for ( int i=1; i<=130; i++) {
		double mid1 = 1 + (r-l)/3;
		double mid2 = r - (r-l)/3;
		if ( calc(mid1) > calc(mid2) ) r = mid2;
		else l = mid1;
	}
	return l;
}

int main ()
{

	return 0;
}

