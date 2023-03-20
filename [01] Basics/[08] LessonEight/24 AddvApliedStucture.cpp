// struct
#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

struct Name {
  char firstname[80];
  char lastname[80];
  void show() { cout << firstname << " " << lastname << endl; };     
};


struct Date {
  int   day;
  int   month;
  int   year;
  void  show() {cout << month << "/" << day << "/" << year << endl;}  
};

struct Person {
  Name   n;
  Date   b;
  void   show() { cout << endl; n.show(); cout << "Brithday: "; b.show();}
};



int main()
{
  Person h = { { "ali", "shirafkan" } , {1, 4, 2000 }  };

  h.show();
  
      
  getch();
}
