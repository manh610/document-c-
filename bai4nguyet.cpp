#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

struct sinhvien{
	string ma,ten,nam;
	float tbkt,cc,th,hk,tk;
};

sinhvien sv[75];

void swap (float &x, float &y) {
	float tmp = x;
	x = y;
	y = tmp;
}

main ()
{
	int n;
	char ma[10],ten[15],nam[15];
	float tbkt,cc,th,hk;
	cout << "NHAP SO LUONG SINH VIEN : ";
	cin >> n;
	cin.ignore();
	for ( int i=1; i<=n; i++) {
		cout << "NHAP THONG TIN SINH VIEN THU "<< i << " : " << endl;
		getline(cin,sv[i].ma );
		getline(cin,sv[i].ten );
		getline(cin,sv[i].nam );
		cin >> sv[i].tbkt >> sv[i].cc >> sv[i].th >> sv[i].hk;
		cin.ignore();
		cout << endl;
		
	}
	ofstream fileout("SINHVIEN.DAT");
	for ( int i=1; i<=n; i++) {
		fileout << sv[i].ma << " " << sv[i].ten << " " << sv[i].nam << " ";
		fileout << sv[i].tbkt << " " << sv[i].cc << " " << sv[i].th << " " << sv[i].hk;
		fileout << endl;
	}
	fileout.close();
	float x,y,z;
	cout << "-----MOI BAN NHAP TY LE PHAN TRAM THANH PHAN DIEM-----" << endl;
	cout << "DIEM TRUNG BINH KIEM TRA : "; cin >> x;
	cout << "DIEM CHUYEN CAN : "; cin >> y;
	cout << "DIEM THUC HANH : "; cin >> z;
	for ( int i=1; i<=n; i++) {
		sv[i].tk = (sv[i].tbkt*x + sv[i].cc*y + sv[i].th*z + sv[i].hk*(100-x-y-z))/100;
		int tmp = int (sv[i].tk*10)%10;
		sv[i].tk = int ( sv[i].tk ) + 0.1*tmp;
	}
	for ( int i=1; i<n; i++) {
		for ( int j=i+1; j<=n; j++) {
			if ( sv[i].tk < sv[j].tk ) swap(sv[i], sv[j]);
		}
	}
	ofstream file ("SINHVIEN.TXT");
	for ( int i=1; i<=n; i++) {
		file << sv[i].ma << " " << sv[i].ten << " " << sv[i].tk << endl;
	}
	file.close();
}

// code by Manh.


