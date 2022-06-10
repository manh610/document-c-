#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <fstream>
using namespace std;

void doctep( long &n) {
	ifstream file;
	file.open("sothapphan.txt");
	file >> n;
	file.close();
}

void doinhiphan( long &n) {
	long tmp,i=1,sum=0;
    while ( n > 0){
        tmp = n%2;
        sum+= i*tmp;
        n/=2;
        i*=10;
    }
	cout << sum;
}

main ()
{
	long n;
	doctep(n);
	doinhiphan(n);
}

// code by Manh.


