#include <stdio.h>
#include <string.h>

struct danhdau{
	char chuoi[1001];
	int lan;
};

int thuannghich(char b[] ) {
	int n = strlen(b)-1, i = 0;
	while ( i < n ) {
		if ( b[i]!=b[n] ) return 0;
		i++;
		n--;
	}
	return 1;
}

int main()
{
	char str[1004][1004];
	struct danhdau a[1001];
	int sl = 0, size = 0, max = 0 ;
	while ( scanf("%s",&str[size])==1 ) {
		size++;
	}
	for ( int i = 0; i < size; i++) {
		if ( strlen(str[i])>=max && thuannghich(str[i])==1 ) {
				if ( strlen(str[i])>max ) {
					max = strlen(str[i]);
					sl = 0;
				}
				int ok = 0;
				for ( int j = 0; j < sl; j++) {
					if ( strcmp(a[j].chuoi, str[i])==0 ) {
						a[j].lan++;
						ok = 1;
						break;
					}
				}
				if (ok==0){
					strcpy(a[sl].chuoi,str[i]);
					a[sl].lan = 1;
					sl++;
				}
		} 
	}
	for ( int i = 0; i < sl; i++) {
		printf("%s %d\n", a[i].chuoi, a[i].lan);
	}
	return 0;
}
