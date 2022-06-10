#include <stdio.h>
#include <string.h>
int main()
{
	int test,j,x=1;
	scanf("%d",&test);
    scanf("\n");
	while(test--){
		char s1[205], s2[20];
        gets(s1);
        gets(s2);
		char *p = strtok(s1," ");
		printf("Test %d: ",x);
		char temp[200];
		strcpy(temp,s2);
		while(p != NULL){
            if ( strlen(p)!= strlen(s2) ) {
                printf("%s ",p);
            }
			else {
				char tmp[200];
				strcpy(tmp,p);
				if ( strcmp(strlwr(tmp),strlwr(temp))!=0 ) {
					printf("%s ",p);
				}
			}
			p = strtok(NULL, " ");
		}
		printf("\n");
		x++;
	}
	return 0;
}
 
Test 1: ddd abdc aaa bbb ddD XY

/*
2
Abc ddd abdc aaa bbb abc ddD XY
aBc
ACHDNC XXXX YYYY ABC ABC XXXX
XxXx
*/
