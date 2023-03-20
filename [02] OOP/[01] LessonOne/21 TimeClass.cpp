#include <iostream>
#include <iomanip>

////////////////////////////////////////////////////////
using std::cout;
using std::setfill;
using std::setw;
//////////////////////////////
class Time {
public:
   Time();                        
   void setTime( int, int, int ); 
   void printUniversal();         
   void printStandard();          

private:
   int hour;     // 0 - 23 (24-hour clock format)
   int minute;   // 0 - 59
   int second;   // 0 - 59
}; 

/////////////////////////////////////////////////////////////
// Time constructor initializes each data member to zero.
// Ensures all Time objects start in a consistent state.
Time::Time() 
{ 
   hour = minute = second = 0; 
} 
//////////////////////////////////////////////////////////////
// Set new Time value using universal time. Perform validity
// checks on the data values. Set invalid values to zero.
void Time::setTime( int h, int m, int s )
{
   hour   = ( h >= 0 && h < 24 ) ? h : 0;
   minute = ( m >= 0 && m < 60 ) ? m : 0;
   second = ( s >= 0 && s < 60 ) ? s : 0;
}
////////////////////////////////////////////////////////
// print Time in universal format
void Time::printUniversal()
{
   cout << setfill( '0' ) << setw( 2 ) << hour << ":" << setw( 2 ) << minute << ":"<< setw( 2 ) << second;
} 
////////////////////////////////////////////////////////
// print Time in standard format
void Time::printStandard()
{
   cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
        << ":" << setfill( '0' ) << setw( 2 ) << minute << ":" << setw( 2 ) << second << ( hour < 12 ? " AM" : " PM" );
}
////////////////////////////////////////////////////////
int main()
{
   Time t;
   cout << "The initial universal time is ";
   t.printUniversal();   // 00:00:00
   
   cout << "\nThe initial standard time is ";
   t.printStandard();    // 12:00:00 AM

   t.setTime( 13, 27, 6 );   // change time

   cout << "\n\nUniversal time after setTime is ";
   t.printUniversal();   // 13:27:06
   
   cout << "\nStandard time after setTime is ";
   t.printStandard();    // 1:27:06 PM

   t.setTime( 99, 99, 99 );

   cout << "\n\nAfter attempting invalid settings:" << "\nUniversal time: ";
   t.printUniversal();   // 00:00:00
   
   cout << "\nStandard time: ";
   t.printStandard();    // 12:00:00 AM
}
