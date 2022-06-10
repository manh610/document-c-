#include<bits/stdc++.h> 
using namespace std; 
  
long long aModM(string s, long long m) 
{ 
    long long result = 0; 
    for (int i = 0; i < s.length(); i++) { 
        result = (result * 10 + (s[i] - '0')) % m; 
    } 
    return result; 
} 
  
int main() 
{ 
    int t;
    long long b, result, m, temp;
    string a;
   
	cin>>t;
	while(t--){
		cin>>a>>b>>m;  
		temp = aModM(a, m);
		result = 1;
		while (b > 0) 
	    { 
	        if (b % 2 != 0) 
	            result = (result * temp) % m; 
	        b = b / 2;  
	        temp = (temp * temp) % m;   
	    } 
		cout<<result<<endl;
	}
}  
