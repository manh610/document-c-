#include <iostream>
#include <cmath>
using namespace std;
main() 
{
	int r; // khai bao
	cin >> r; // nhap tu ban phim
	float S;
	S = M_PI*r*r;
	cout << "DIEN TICH HINH TRON LA : " << S;
	float C;
	C = 2*M_PI*r;
	cout << endl;
	cout << "CHU VI DUONG TRON LA : " << C;
}

