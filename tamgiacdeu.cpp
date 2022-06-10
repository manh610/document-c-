#include <iostream>
using namespace std;
typedef long long int ll;
main ()
{
	int i,j,k;
	for ( int i = 1; i < 7; i++){
     	printf("\n%*s", 7-i, "");
     	j = 1, k = 1;
     	do {
      		printf("%d",j);
      		if (j == i) k = -1;
      			j += k;
     	} while (j >= 1);
  	}

}

// code by Manh.


