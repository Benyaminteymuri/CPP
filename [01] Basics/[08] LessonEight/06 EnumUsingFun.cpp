// enumerations
#include <iostream>
#include <conio.h>
using namespace std;

typedef  enum { Zero, One, Two, Three, Four } a;
a x;

void  f(a );

a     g() ;


main()
{
	f(Two);
	cout << g();
	getch();
	
}

void f(a v)
{
	x = v;
}

a g() 
{
	return x;
}


