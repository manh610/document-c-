#include <stdio.h>
#include <string.h>

struct danhdau{
	char chuoi[1001];
	int lan;
};

int main()
{
	char str[1004][1004];
	struct danhdau a[1001];
	int sl = 0, size = 0, max = 0 ;
	while ( scanf("%s",&str[size])==1 ) {
		size++;
	}
	for ( int i = 0; i < size; i++) {
		if ( strlen(str[i])>=max ) {
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
//	for ( int i = 0; i < sl-1; i++) {
//		for ( int j = i+1; j < sl; j++) {
//			if ( a[i].lan < a[j].lan ) {
//				struct danhdau t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//		}
//	}
	for ( int i = 0; i < sl; i++) {
		printf("%s %d %d\n", a[i].chuoi, max, a[i].lan);
	}
	return 0;
}
