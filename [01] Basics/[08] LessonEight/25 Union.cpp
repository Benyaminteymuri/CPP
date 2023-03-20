// union

#include <iostream>
#include <conio.h>
using namespace std;


union  a {
  unsigned int  x;      // 4  
  unsigned int  y[2];   // 8
};

//   y[1]  y[0]
//          x

int main()
{
  union a  u;
  cout<<sizeof(u)<<endl;   // 8
  
  u.y[0]=9;
  u.y[1]=2;
  
  cout<<u.x<<endl;       //  9
  
  u.x= 5;
  cout<<u.y[0]<<endl;   //5
  cout<<u.y[1];         //2
  
 
  
  getch();
}
