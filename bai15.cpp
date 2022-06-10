//15.Vi?t chuong trình nh?p vào 2 s? nguyên duong a,b tìm và in ra b?i chung nh? nh?t c?a chúng.
#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<(a*b)/__gcd(a,b);
	return 0;
}

// code by Manh

