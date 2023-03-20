// function  return structure
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;


struct a
{
  float   radius;
  double  angle;
};

struct b
{
  float    area;
  double   sine;
};

b  f(struct a );

int main ()
{
       a k;
       k.radius = 3;
       k.angle = 0.8;

       b  y;
       y = f(k);

       cout << " area : " << y.area << "\n";
       cout << " sine : " << y.sine << "\n";
    
       
	   getch();
}

b f(struct a m)
{
     b x;
     x.area    = pow(m.radius,2);
     x.sine    = sin(m.angle);
    
     return x;
};
