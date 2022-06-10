#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

string layTen(string s) {
    for ( int i = s.length()-1; i>=0; i--) {
        if ( s[i]==' ' ) {
            string s1;
            int k = 0;
            for ( int j = i; j < s.length(); j++){
                s1[k++] = s[j];
            }
            return s1;
        }
    }
}

string layDem(string s) {
    for ( int i = 0; i<s.length(); i++) {
        if ( s[i]==' ' ) {
            string s1;
            int k = 0;
            for ( int j = i; j < s.length(); j++){
                if (s[j]==' ')
                    break;
                s1[k++] = s[j];
            }
            return s1;
        }
    }
}

struct abc{
    string ten, ngay, sdt;
};

bool cmp(abc a, abc b) {
    if ( layTen(a.ten)!=layTen(b.ten) )
        return layTen(a.ten) < layTen(b.ten);
    return ( layDem(a.ten) < layDem(b.ten) );
}

int main()
{
    string filename("SOTAY.txt");
    vector<string> lines;
    string line;
    ifstream input_file(filename);
    while (getline(input_file, line)){
        lines.push_back(line);
    }
    input_file.close();
	ofstream output_file("DIENTHOAI.txt");
    vector<abc> abc;
    int k = 0;
    for ( int i = 0; i < lines.size()-2; i+=3 ) {
		abc[k++].sdt = lines[i+2];
        abc[k++].ten = line[i+1];
        abc[k++].ngay = line[i];
	}
    sort(abc.begin(), abc.begin()+k, cmp);
	for ( int i = 0; i < k; i++ ) {
		output_file << abc[i].ten << ": " << abc[i].sdt << " " << abc[i].ngay << endl;	
    }
    return 0;
}
