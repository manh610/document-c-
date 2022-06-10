#include<iostream>
#include<cmath>
 
using namespace std ;
bool checkSNT(long long a )
	{
		long long SQ = sqrt (a) + 1 , i;
		if ( a == 2 ) return 1 ;
		for ( i = 2 ; i < SQ ; i++ ) 
			if (a % i == 0 ) return 0 ;
		return 1 ;
	}
int main()
	{
		int i , n  ;
		long long t , a , SQ , l ;
		cin >> n ;
		while ( n-- ) 
			{
				cin >> a ;
				if (a % 2 == 1 ) cout << 0 ;
				else 
					{
						SQ = sqrt(a)  + 1 ;
						i = 1 ;t = 1 ;
						while (t < SQ ) 
							{
								t = t * 2 ;
								i++ ;
							}
						if (((t *( t - 1 ) / 2 == a) && (checkSNT(t - 1))) || (((t / 4 )* ( t / 2 -1 ) == a ) && checkSNT(t / 2 - 1 )))cout << 1 ;
						else cout << 0 ;
					}
				cout << endl ; 		
			}
		return 0 ;
	} 
