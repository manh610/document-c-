#include<stdio.h>
int main()
{
    char x[100001],*s;
    scanf("%s",x);
    for(s=x;*s=='1';s++);
    if(*s==0) printf("%s",x+1);
    else
    {
        *s=0;
        printf("%s",x);
        printf("%s",s+1);
    }
    return 0;
}
