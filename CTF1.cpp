#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
main ()
{
	string s;
	cin >> s;
	long long a[1000],tong = 0;
	for ( int i=1; i<=s.length(); i++) {
		a[i] = s[i] - 48;
		tong += a[i];
	}
	cout << tong;
}

// code by Manh.


// a b c d e f g h i j k l m n o p q r s t u v w x y z A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 0 1 2 3 4 5 6 7 8 9 ! _ { }
// f W B Z z d T o L R p 5 E v 8 s q e S Y D ! u H a _ w 1 0 4 G Q A 9 X 7 m h M F t I b j y x r 3 l g C P { c V i } n 2 U O N 6 J K k
// 08Zz1fYY5zKli5B{EiJY{J0{Zi1}YY5iJ0xQJV{cN666k
