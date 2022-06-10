#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

struct sinhvien{
	string ma,ten,que,nam;
	float diem;
};

sinhvien sv[70];

main ()
{
	int n;
	cout << "MOI NHAP SO LUONG SINH VIEN : ";
	cin >> n;
	cin.ignore();
	for ( int i=1; i<=n; i++){
		cout << "MOI NHAP THONG TIN SINH VIEN THU "<< i << " : " <<endl;
		cout << "MA SINH VIEN : ";
		getline(cin,sv[i].ma );
		cout << "TEN SINH VIEN : ";
		getline(cin,sv[i].ten );
		cout << "QUE QUAN : ";
		getline(cin,sv[i].que );
		cout << "NGAY THANG NAM SINH : ";
		getline(cin,sv[i].nam );
		cout << "DIEM : ";
		cin >> sv[i].diem; 
		cin.ignore();
	}
	ofstream file("THCS2.DAT");
	for ( int i=1; i<=n; i++) {
		file << sv[i].ma << " " << sv[i].ten << " " << sv[i].que << " ";
		file << sv[i].nam << " " << sv[i].diem << endl;
	}
	file.close();
	float sum,tb,max = sv[1].diem;
	int vitri = 1;
	for ( int i=1; i<=n; i++) {
		sum += sv[i].diem;
		if ( max < sv[i].diem ) {
			max = sv[i].diem;
			vitri = i;
		}
	}
	tb = sum/n;
	int dem=0;
	for ( int i=1; i<=n; i++) {
		if ( sv[i].diem < tb ) dem++;
	}
	ofstream file1 ("SINHVIEN.TXT");
	file1 << dem << endl;
	file1 << sv[vitri].ten << " " << sv[vitri].diem;
	file1.close();
}




