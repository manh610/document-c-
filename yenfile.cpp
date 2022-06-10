#include<iostream>
#include<fstream>
using namespace std;
void demsoki(char s[],char kytu[], int solan[], int &tskt){
	tskt = 0;
	int x = 0;
	int m = 0;
	while ( s[x]!='\0') {
		m++;
		x++;
	}
	cout << m;
	for(int i=0; i<m; i++){
		if(s[i]!=' '){
			solan[tskt] = 1;
			kytu[tskt] = s[i];
			for(int j=i+1;j<m;j++){
				if( s[j]==s[i] ){
					solan[tskt]++;
					s[j] = ' ';
				}
			}
			tskt++;
		} 
	}
}
void doctep(char s[]){
	ifstream fdoc;
	fdoc.open("xauvao.txt");
	fdoc >> s;
	fdoc.close();
}
void ghitep(char kytu[],int solan[], int tskt){
	ofstream fghi("xaura.txt");
	for(int i=0; i<tskt; i++)
		fghi << kytu[i]<< "  " << solan[i] << endl;
	fghi.close();
}
main()
{
	char s[40],kytu[40];
	int solan[40]; 
	int tskt;
	doctep(s);
	demsoki(s,kytu,solan,tskt);
	ghitep(kytu,solan,tskt);
}
