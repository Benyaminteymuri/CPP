//Pass structure using a structure reference 
#include <iostream>
#include <conio.h>
using namespace std;


struct a
{
  float x;
  float y;
  float z;
};

void f(struct a &);

int main () 
{
    a  m;
    m.x = 2;
    m.y = 4;
    
    f(m);
    
	cout << m.z ;   // 8
    
	getch();
};

void f(a  &t)
{
   t.z = t.x * t.y;
}
