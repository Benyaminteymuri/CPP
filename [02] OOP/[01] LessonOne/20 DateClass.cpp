#include <iostream>  
#include <iomanip>
#include <conio.h>

using std::cout;
using std::endl;
using std::fixed;

/////////////////////////
class Date {
private:
   int month;
   int day;
   int year;

public:
   Date( int = 1, int = 1, int = 2000 ); 
   void print();
}; 
////////////////////////////////////////////////////
Date::Date( int m, int d, int y )
{
   month = m;
   day = d;
   year = y;
} 
////////////////////////////////////////////////////
// print Date in the format mm-dd-yyyy
void Date::print() 
{ 
   cout << month << '-' << day << '-' << year; 
   cout<<endl;
} 
//////////////////////////////////////////////////
int main()
{
   Date date1( 7, 4, 2017 );
   
   Date date2;  // date2 defaults to 1/1/2000

   date1.print();
   
   date2.print();

   date2 = date1;

   date2.print();
   
   getch();
}
