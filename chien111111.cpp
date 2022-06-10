#include <stdio.h>
int main ()
{
    int n,m,a[10005];
    printf("nhap so phan tu cua mang: ");
    scanf("%d",&n);
    printf("moi ban nhap mang: ");
    for ( int i=1; i<=n; i++) {
        scanf("%d",&a[i]);
    }
    printf("\nmoi ban nhap so dong: ");
    scanf("%d",&m);
    int x = n/m;
    for ( int i=1; i<=n; i++) {
        printf("%d\t",a[i]);
        if ( i%x==0 ) printf("\n");
    }
    return 0;
}
