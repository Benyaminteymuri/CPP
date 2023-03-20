// enumerations
#include <iostream>
#include <conio.h>
using namespace std;

main()
{
 	enum  x { a , b , c };
	
	int   x = 8;                    // OK: hides enum x
	
	int   a = 5;                   // Error: int cannot hide enumerator a

	{
		int a = 10;               // OK: inner scope can hide outer a
	}
	
  getch();
}






