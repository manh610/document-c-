#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void dao_tu( char* begin, char* end) {
	char tmp;
	while ( begin < end) {
		tmp = *begin;
		*begin++ = *end;
		*end-- = tmp;
	}
}

void dao_cau(char* s ) {
	char* word_begin = s;
	char* tmp = s;
	while ( *tmp ) {
		tmp++;
		if ( *tmp=='\0') {
			dao_tu(word_begin, tmp-1);
		}
		else if ( *tmp==' ') {
			dao_tu(word_begin, tmp-1);
			word_begin = tmp+1;
		}
	}
	dao_tu(s,tmp-1);
}

void solve() {
	char s[1000];
	gets(s);
	dao_cau(s);
	puts(s);
}

main()
{
	int test;
	cin >> test;
	cin.ignore();
	while ( test-- ) {
		solve();
	}
}

// code by Manh.

