#include <stdio.h>
#include <math.h>
int main()
{
	float a;
	printf("MOI BAN NHAP SO DIEM: ");
	scanf("%f",&a);
	if(a>=8.0) printf("BAN DAT LOAI GIOI");
	else if(a>=6.5 && a<8.0) printf("BAN DAT LOAI KHA");
	else if(a>=5.0 && a<6.5) printf("BAN DAT LOAI TRUNG BINH");
	else printf("BAN DAT LOAI YEU");
	return 0;
}
