#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;

struct sinhvien {
	char ten[40],diachi[40];
	float nam, diem;
};
 
sinhvien SV[30];

int cmp(sinhvien a, sinhvien b ) {
	return ( a.diem > b.diem);
}

main ()
{	
	cout << "MOI NHAP SO LUONG SINH VIEN: ";
	int n; 
	cin >> n;
	for ( int i=1; i<=n; i++) {
		cout << "NHAP TEN SINH VIEN THU "<< i <<" : ";
		cin.ignore();
		cin.getline(SV[i].ten, 40 );
		cout << "NHAP DIA CHI SINH VIEN THU " << i << " : ";
		cin.getline(SV[i].diachi, 40 );
		cout << "NHAP NAM SINH SINH VIEN THU "<< i << " : ";
		cin >> SV[i].nam;
		cout << "NHAP DIEM SINH VIEN THU "<< i << " : ";
		cin >> SV[i].diem;
		cout << endl;
	}
	int STT = 1;
	ofstream file ("THONGTIN1.TXT");
	for ( int i=1; i<=n; i++) {
		file << STT << "  " << SV[i].ten << "  "<< SV[i].diachi << "  " << SV[i].nam << "  " << SV[i].diem << endl;
		STT++;
	}		
	file.close();
	sort ( SV+1, SV+n+1, cmp);
	ofstream file1("SAPXEPTHEODIEM.TXT");
	file1 << "DANH SACH SAP XEP THEO DIEM : " << endl;
	STT = 1;
	for ( int i=1; i<=n; i++) {
		file1 << STT << "  " << SV[i].ten << "  " << SV[i].diem << endl;
		STT++;
	}
	file1.close();
}

// code by Manh.


