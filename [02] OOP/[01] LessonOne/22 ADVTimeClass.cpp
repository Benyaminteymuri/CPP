#include <iostream>
#include <iomanip>

using std::cout;
using std::setfill;
using std::setw;
/////////////////////////////////////////////////
class Time {
public:
   Time( int = 0, int = 0, int = 0); 
   void setTime( int, int, int ); 
   void printUniversal();         
   void printStandard();          

private:
   int hour;     
   int minute;   
   int second;   
};
////////////////////////////////////////////////////////////////////////////
Time::Time( int hr, int min, int sec ) 
{ 
   setTime( hr, min, sec );  
} 
////////////////////////////////////////////////////////////////////////////
// set new Time value using universal time, perform validity
// checks on the data values and set invalid values to zero
void Time::setTime( int h, int m, int s )
{
   hour   = ( h >= 0 && h < 24 ) ? h : 0;
   minute = ( m >= 0 && m < 60 ) ? m : 0;
   second = ( s >= 0 && s < 60 ) ? s : 0;
} 
////////////////////////////////////////////////////////////////////////////
void Time::printUniversal()
{
   cout << setfill( '0' ) << setw( 2 ) << hour << ":"
        << setw( 2 ) << minute << ":"
        << setw( 2 ) << second;
} 
////////////////////////////////////////////////////////////////////////////
void Time::printStandard()
{
   cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
        << ":" << setfill( '0' ) << setw( 2 ) << minute
        << ":" << setw( 2 ) << second 
        << ( hour < 12 ? " AM" : " PM" );
} 
////////////////////////////////////////////////////////////////////////////
int main()
{
   Time t1;               // all arguments defaulted
   Time t2( 2 );          // minute and second defaulted
   Time t3( 21, 34 );     // second defaulted 
   Time t4( 12, 25, 42 ); // all values specified
   Time t5( 27, 74, 99 ); // all bad values specified

   cout << "Constructed with:\n\n"  << "all default arguments:\n  ";
   t1.printUniversal();  // 00:00:00
   cout << "\n  ";
   t1.printStandard();   // 12:00:00 AM

   cout << "\n\nhour specified; default minute and second:\n  ";
   t2.printUniversal();  // 02:00:00
   cout << "\n  ";
   t2.printStandard();   // 2:00:00 AM

   cout << "\n\nhour and minute specified; default second:\n  ";
   t3.printUniversal();  // 21:34:00
   cout << "\n  ";
   t3.printStandard();   // 9:34:00 PM

   cout << "\n\nhour, minute, and second specified:\n  ";
   t4.printUniversal();  // 12:25:42
   cout << "\n  ";
   t4.printStandard();   // 12:25:42 PM

   cout << "\n\nall invalid values specified:\n  ";
   t5.printUniversal();  // 00:00:00
   cout << "\n  ";
   t5.printStandard();   // 12:00:00 AM
}
