#include <bits/stdc++.h>
using namespace std;
string s;
int k;
int main(){
	cin>>s>>k;
	int n=s.length();
	int i=0;
	while(i<n&&k>0){
		int maxx=s[i],vt=i;
		for(int j=i+1;j<=min(n-1,i+k);j++){
			if(maxx<s[j]){
				maxx=s[j];
				vt=j;
			}
		}
		for(int j=vt;j>i;j--) s[j]=s[j-1];
		s[i]=maxx;
		k-=vt-i;
		i++;
	}
	cout<<s;
}
