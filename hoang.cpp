#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

void doctep(float &x, float &c) {
	ifstream file;
	file.open("DULIEU.TXT");
	file >> x >> c;
	file.close();
}

float ex(float x, float c) {
	float ans = 1;
	float tmp = 1;
	for ( int i=1; ; i++) {
		tmp*=i;
		if ( abs(pow(x,i)/tmp) <= c ) break;
		ans += pow(x,i)/tmp;
	}
	return ans;
}

main ()
{
	float x,c;
	doctep(x,c);
	cout << ex(x,c);

}

// code by Manh.


