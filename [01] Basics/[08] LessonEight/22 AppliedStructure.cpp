// struct
#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

struct Name {
  char firstname[80];
  char lastname[80];
 };


struct Date {
  int   day;
  int   month;
  int   year;
 };

struct Person {
  Name   n;
  Date   b;
 };



int main() 
{
  Person h = { { "ali", "shirafkan" } , {1, 4, 2000 }  };
  
  cout<<sizeof(h)<<endl;      // 172
  
  cout<<h.n.firstname<<endl;  // ali
  cout<<h.b.year;             // 2000

    
  getch();
}
