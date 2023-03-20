//copy structure
#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

struct mystruct
{
       int x;
       int y;
};
 
int main()
{
  mystruct s,d;
  s.x = 2;
  s.y = 6;
  
  memcpy( &d , &s , sizeof(s) );
  
  cout << d.x << endl;   //2
  cout << d.y << endl;   //6

  getch();
}
