#include<stdio.h>
#include<string.h>
int main(){
    char s1[55];
    gets(s1);
    strlwr(s1);
    char s2[50];
    int dem=0, x=1;
    int count = 0;
    for(int i=strlen(s1)-1;i>=0;i--){
    	count++;
        if(s1[i]!=' '){
            s2[dem]=s1[i];
            dem++;
        }
        if(s1[i]==' '&&dem!=0) break;
    }
    for(int i=strlen(s1)-1-dem;i>=0;i--){
        if(s1[i]==' ') continue;
        else {
            if(s1[i-1]==' '){
                s2[dem]=s1[i];
                dem++;
            }
        }
    }
    if(s1[0]!=' ') s2[dem]=s1[0];
    for(int i=dem;i>=0;i--){
        printf("%c",s2[i]);
    }
    printf("@ptit.edu.vn");
    return 0;
}

