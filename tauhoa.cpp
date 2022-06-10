#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int L,v,I,r;
		scanf("%d %d %d %d",&L,&v,&I,&r);
		int x=L/v;
		if((r-I)%v==0){
			if(I%v==0){
				printf("%d\n",x-(r-I)/v-1);	
			}
			else printf("%d\n",x-(r-I)/v);
		}
		else{
			if(I%v==0 || r%v==0){
				printf("%d\n",x-(r-I)/v-1);	
			}
			else printf("%d\n",x-(r-I)/v);
		}
	}
	return 0;
}

// code by Manh

