#include <iostream>
#include <cmath>
using namespace std;
main ()
{
	int n;
	cin >> n;
	if ( n<5 ) { 
		if ( n==3 ) cout << "1"; // neu n nho hon 5 thi cho co 3 la thoa man
		else cout << "-1";
	}
	else {
		int a = n/5; // lay n chia 5 lay phan nguyen, dung het vào tai 5 kg da~
		if ( n%5==0 ) cout << a; // neu n chia het cho 5 thi dung het vao bao tai loai 5 kg
			// sau khi da dung vao bao tai 5kg, so gao thua ra chia het cho 3 thi in ra
		else if ( (n-a*5)%3==0 ) cout << a+(n-a*5)/3; 
			// neu phan du khong chia het cho 3 thi phai lay mot bao tu loai 5kg de ket hop voi so gao du 
		else {
			int check = 1;
			// do gao tu bao 5kg ra de ket hop voi so gao du
			while ( a>0 ) { // thuc hien den khi so bao tai 5kg duoc lay het
				a--; // so bao 5kg phai tru di 1
				// neu da ket hop dc de dung vao loai 3kg thi dung lai
				if ( (n-a*5)%3==0 ) {  
					cout << a + (n-a*5)/3;
					check = 0;  // luu lai da thoa man
					break;
				}
			}
			// neu check van = 1 nghia la lay het so gao tu bao 5kg mà vãn k ket hop dc thi k có cách nào.
			if ( check==1 ) cout << "-1";
		}
	}
}

// code by Manh.


