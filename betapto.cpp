#include <iostream>
using namespace std;
int main ()
{
	int w,h,k;
	cin>>w>>h>>k;
	int x=0;;
	for ( int i=1; i<=k; i++) {
		x += w*2+(h-2)*2;
		w-=4;
		h-=4;
	}
	cout<<x;
	return 0;
}

// code by Manh.

