#include <iostream>
#include <algorithm>
using namespace std;

class PhanSo {
	long long tu;
	long long mau;
public:
	PhanSo(int a, int b) {
	 	tu = a;
	 	mau = b;
	 }
	 friend istream &operator>>(istream &is, PhanSo &obj)
    {
        is >> obj.tu;
        is >> obj.mau;
        return is;
    }
 
    friend ostream &operator<<(ostream &os, PhanSo obj)
    {
        os << obj.tu << "/" << obj.mau;
        return os;
    }
    void rutgon() {
    	long long t = __gcd(tu,mau);
    	tu = tu/t;
    	mau = mau/t;
    }
};


int main() {
	// your code goes here
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}