//  struct
#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

struct  s {
	double  a;
 	void    f(int x)   { a=x; }
 	int     g(void)    { int y;   y=a*a;  return (y); }
 } m;


int main( )
{
 m.f(4);             // a=4
 cout << m.g( );     // 16
 
 getch();
}
