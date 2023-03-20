// union
#include <iostream>
#include <conio.h>
using namespace std;

struct  a{
   char  *b;
   long   c;
   union  d{
   	  int   e;
   	  char  f;
   }u;
}s;

int main()
{
  s.c=123;
  
  s.u.e=65;
  
  cout<<s.u.f;  // A
  
  getch();
}
