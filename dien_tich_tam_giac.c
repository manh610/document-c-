#include <stdio.h>
#include <math.h>

struct diem{
	float x,y;
};

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		struct diem a[3];
		float b,c,d,s;
		int i;
		for(i=0;i<3;i++){
			scanf("%f %f",&a[i].x, &a[i].y);	
		}
		b = sqrt( (a[1].x-a[0].x)*(a[1].x-a[0].x) + (a[1].y-a[0].y)*(a[1].y-a[0].y));
		c = sqrt( (a[2].x-a[0].x)*(a[2].x-a[0].x) + (a[2].y-a[0].y)*(a[2].y-a[0].y));
		d = sqrt( (a[2].x-a[1].x)*(a[2].x-a[1].x) + (a[2].y-a[1].y)*(a[2].y-a[1].y));
		if(d+b>c && d+c>b && b+c>d) {
			s = sqrt((b+c+d)*(b+c-d)*(b+d-c)*(c+d-b))/4;
			printf("%.2f",s);
		}
		else printf("INVALID");
		printf("\n");
	}
	return 0;
}

// code by NuNu
