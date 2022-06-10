
#include <iostream>
#include <fstream>
const int N = 100;
using namespace std;

int a[N];

void taofile( ){
	ofstream file ("file.txt");
	int n;
	cout << "Moi nhap so luong phan tu: ";
	cin>>n;
	file << n << endl;
	for ( int i=0; i<n; i++) {
		cout << " Nhap phan tu a["<<i<<"] : "; 
		cin >> a[i];
		file << a[i] <<" ";
	}
	file.close();
}

void docfile(int a[], int &n){
	ifstream file1;
	file1.open("file.txt");
	file1 >> n ;
	for ( int i=0; i<n; i++){
		file1 >> a[i];
	}
	file1.close();
}

void sx(int a[], int &n){
	int x;
	for ( int i=0; i<n-1; i++) {
		for ( int j=i+1; j<n; j++) {
			if ( a[i] < a[j]){
				x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}
}

void ghifile( int a[], int &n){
	ofstream file2 ("filemoi.txt");
	for ( int i=0; i<n ; i++){
		file2 << a[i]<<endl; 
	}
	file2.close();
}

int main ()
{	
	int n;
	taofile();
	docfile(a,n);
	sx(a,n);
	ghifile(a,n);

	return 0;
}

// code by Manh.

