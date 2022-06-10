#include <iostream>
#include <stdlib.h>
#include<fstream>
using namespace std;

ifstream fi;
ofstream fo;
const char fin[]="DAY.INP";
const char fon[]="DAY.OUT";
/*********** Mo Tep Doc *********************/
int MoTepDoc(){
	fi.open(fin,ios::in);
	if(!fi){
		cout<<"Loi mo tep!";
		return 0;
	}
	return 0;
}
/****************** Mo Tep Ghi ************************/
int MoTepGhi(){
	fo.open(fon,ios::out);
	if(!fo){
		cout<<"Loi mo tep!";
		return 0;
	}
	return 0;
}
/************** Nhan Du Lieu *************************/
void Nhap(){
	MoTepDoc();
	
	fi.close();
}
/**************Ghi ket qua ra tep ***************/
void Xuat(){
	MoTepGhi();
	
	fo.close();
}
/*************Main **************************/
int main(){
	Nhap();
	Xuat();
	return 0;
}
