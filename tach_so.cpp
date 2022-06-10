#include <stdio.h>
#include <string.h>
long long j=0,a[105];
char s[105];
void xuli(){
	long long dem,ans,ok;
	int m=strlen(s);
	for(int i=0; i<m; i++ ){
		ans=0; dem=0; ok=0;
		for(int k=i; k<m; k++){
			if(s[k]>='0' && s[k]<='9'){
				ans=ans*10+s[k]-'0';
				dem++;
				ok=1;
			}
			else break;
		}
		if(ok==1)a[j++]=ans;
		i+=dem;
		if(i>m) break;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%s",s);
		xuli();
	}
	for(int i=0; i<j; i++){
		for(int k=i+1; k<j; k++){
			if(a[i]>a[k]){
				long long tmp=a[i];
				a[i]=a[k];
				a[k]=tmp;
			}
		}
	}
	for(int i=0; i<j; i++) printf("%lld\n",a[i]);
	return 0;
}

// code by NuNu
