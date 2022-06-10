#include <stdio.h>
int main()
{
	printf("MOI BAN NHAP SO : ");
	int n;
	scanf("%d", &n);
	int tram, chuc, dv;
	tram = n/100;
	chuc = (n/10)%10;
	dv = n%10;
	printf ("CACH DOC LA : ");
	switch ( tram ) {
		case 1 : printf ("mot tram "); break;
		case 2 : printf ("hai tram "); break;
		case 3 : printf ("ba tram "); break;
		case 4 : printf ("bon tram "); break;
		case 5 : printf ("nam tram "); break;
		case 6 : printf ("sau tram "); break;
		case 7 : printf ("bay tram "); break;
		case 8 : printf ("tam tram "); break;
		case 9 : printf ("chin tram "); break;
	}
	switch ( chuc ) {
		case 0 : if ( dv > 0 ) printf("linh "); break;
		case 1 : printf ("muoi "); break;
		case 2 : printf ("hai muoi "); break;
		case 3 : printf ("ba muoi "); break;
		case 4 : printf ("bon muoi "); break;
		case 5 : printf ("nam muoi "); break;
		case 6 : printf ("sau muoi "); break;
		case 7 : printf ("bay muoi "); break;
		case 8 : printf ("tam muoi "); break;
		case 9 : printf ("chin muoi "); break;
	}
	switch ( dv ) {
		case 1 : printf ("mot"); break;
		case 2 : printf ("hai"); break;
		case 3 : printf ("ba"); break;
		case 4 : printf ("bon"); break;
		case 5 : printf ("nam"); break;
		case 6 : printf ("sau"); break;
		case 7 : printf ("bay"); break;
		case 8 : printf ("tam"); break;
		case 9 : printf ("chin"); break;
	}
	return 0;
}
