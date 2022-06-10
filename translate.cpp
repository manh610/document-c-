#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	int x,y,i=0;
	char s[1000];
	scanf("%d %d",&x,&y);
		while (x>0){
			int du=x%y;
			if (du<10){
				s[i++]=du+'0';
			}
			else{
				switch(du){
					case 10: s[i++]='A'; break;
					case 11: s[i++]='B'; break;
					case 12: s[i++]='C'; break;
					case 13: s[i++]='D'; break;
					case 14: s[i++]='E'; break;
					case 15: s[i++]='F'; break;
					case 16: s[i++]='G'; break;
					case 17: s[i++]='H'; break;
					case 18: s[i++]='I'; break;
					case 19: s[i++]='J'; break;
				}
			}
			x=x/y;
		}
		for(int j=i-1;j>=0;j--){
			printf("%c",s[j]);
		}
	return 0;
}

// code by Manh

