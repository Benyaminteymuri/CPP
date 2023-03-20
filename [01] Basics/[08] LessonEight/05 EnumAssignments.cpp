// enumerations
#include <iostream>
#include <conio.h>
using namespace std;

main()
{
 	// enum  x { a , b , c , d , e} v1,v2;
 
 	typedef  enum { a=3 , b , c , d , e} x;
 	x  v1,v2;
 
	v1=a;
	v2=e;
	
	for(int i=v1 ; i<=v2 ; i++)
	     cout << i << endl;        // 3  4  5  6  7          
	
  getch();
}


