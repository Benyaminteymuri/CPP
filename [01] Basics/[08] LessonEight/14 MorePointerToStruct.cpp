// pointer for structure 
#include <iostream>
#include <conio.h>
using namespace std;

struct a
{
   int    n;
   float  f;
};

int main()
{ 
 a  x;
 a  *p;

 x.n = 5;

 p = &x;

 p->n = 8;

 cout << x.n ;   //8

 getch();
}
