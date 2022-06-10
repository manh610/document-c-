#include <stdio.h>
#include <math.h>
int isTriangular(float ,float ,float );
int isTriangular(float a,float b,float c)
{
	if(a+b-c>0&&a-b+c>0&&-a+b+c>0) return 1;
	else return 0;
}
float RefTriangular(float ,float ,float );
float RefTriangular(float a,float b,float c)
{
	if(isTriangular)
	{
		float p;
		p=a+b+c;
		return p;
	}
}
float AreaTriangular(float ,float ,float );
float AreaTriangular(float a,float b,float c)
{
	if(isTriangular)
	{
		float S;
		RefTriangular(a,b,c);
		S=sqrt((RefTriangular(a,b,c)-a)*(RefTriangular(a,b,c)-c)*(RefTriangular(a,b,c)-b)*RefTriangular(a,b,c));
		return S;
	}
}
void AngleTriangular(float ,float, float, float ,float ,float );
void AngleTriangular(float a,float b,float c, float *A, float *B, float *C)
{
	float cosA,cosB,cosC;
	if(isTriangular(a,b,c))
	{
		cosA=(b*b+c*c-a*a)/(2*b*c);
		cosB=(a*a+c*c-b*b)/(2*a*c);
		cosC=(a*a+b*b-c*c)/(2*a*b);
		*A = acos(cosA)*180/3.14;
		*B = acos(cosB)*180/3.14;
		*C = acos(cosC)*180/3.14;
	}
}
int main(){
	float a,b,c,A,B,C;
	printf("a = ");
	scanf("%f",&a);
	printf("b = ");
	scanf("%f",&b);
	printf("c = ");
	scanf("%f",&c);
	if(isTriangular(a,b,c)) printf("3 canh tren tao thanh 1 tam giac");
	else printf("khong la 3 canh cua tam giac");
	printf("\n");
	AngleTriangular(a,b,c,&A,&B,&C);
	printf("A = %f\n",A);
	printf("B = %f\n",B);
	printf("C = %f",C);
	return 0;
}
