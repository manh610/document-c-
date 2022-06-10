#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
void primefactor(long long N,int k)
{
	long long ans=0;int d=0;
	for(long long i=2;i<=sqrt(N);i++){				
		if(N%i==0){
		while(N%i==0){
				//cout<<i<<" ";
				N=N/i;
				d++;
				if(d==k) {
				cout<<i<<"\n";
				break;
				}	
		}
		
	}

	/*if (N>1) {
		cout<<N<<" ";
	}
	*/
	
}
	if(k>d) cout<<-1<<"\n";
}
main()
{
	long long N;
	int T,k;
	cin>>T;
	while(T--){
		cin>>N>>k;
		primefactor(N,k);
	}
	return 0;
}
// hii
