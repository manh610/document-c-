#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

struct sinhvien{
	int STT;
	float T,L,H,tong;
	char ten[40],nam[20],diachi[30],loai[20];
};

float cmp( sinhvien a,sinhvien b){
	return ( a.tong > b.tong );
}

main ()
{
	sinhvien SV[50];
	int STT=1;
	float T,L,H,tong;
	char ten[40],nam[20],diachi[30],loai[20];
	int n;
	cout << "moi ban nhap so luong hoc sinh: ";
	cin >> n;
	for ( int i=1; i<=n; i++) {
		cout << "moi nhap ten hoc sinh thu "<<i<<" : "; 					cin >> SV[i].ten;
		cout << "moi nhap ngay sinh hoc sinh thu "<<i<<" : "; 				cin >> SV[i].nam;
		cout << "moi nhap dia chi hoc sinh thu "<<i<<" : "; 				cin >> SV[i].diachi;
		cout << "moi nhap diem toan, ly, hoa cua hoc sinh thu "<<i<<" : "; 	cin >> SV[i].T >> SV[i].L >> SV[i].H;
		cout << endl; 
		SV[i].tong = (SV[i].T + SV[i].L + SV[i].H)/3;
		/*if ( SV[i].tong >= 32 ) SV[i].loai = {"GIOI"};
		else if ( SV[i].tong >= 26 ) SV[i].loai = {"KHA"};
		else if ( SV[i].tong >= 20 ) SV[i].loai = {"TRUNGBINH"};
		else SV[i].loai = {"KHONGDAT"};*/
	}
	ofstream file ("THONG_TIN.TXT");
	for ( int i=1; i<=n; i++) {
		file << SV[i].STT <<" " <<  SV[i].ten << " " << SV[i].nam << " " << SV[i].diachi << " " << SV[i].T <<" " << SV[i].L << " " << SV[i].H;
		STT++;
		file << endl;
	}
	file.close(); 
	sort(SV+1,SV+n+1,cmp);
	ofstream file1 ("XEP_DIEM.TXT");
	for ( int i=1; i<=n; i++) {
		file1 << SV[i].STT <<" " <<  SV[i].ten << " " << SV[i].nam << " " << SV[i].diachi << " " << SV[i].tong;
		file1 << endl;
	}
	file1.close();
	
}

// code by Manh.

