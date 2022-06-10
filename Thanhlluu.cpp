#include <iostream>
using namespace std;
int dongao(int N)
{
	int min=5000;
	for(int i=0;i<N/5;i++)
	{
		int can1= i*5;
		int can2= (N-can1)/5;
		if(can2%3==0)
		{
			int B = can2/3;
			if(min>B)
			{
				min=B;
			}
			else min=-1;		  		
		}
		
	}
	return min;
}
main ()
{
int N;
cin>> N;
cout<< dongao(N);

}

// code by Manh.


