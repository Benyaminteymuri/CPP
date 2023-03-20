#include <iostream>
#include <iomanip>

using std::cout;
using std::setfill;
using std::setw;

//////////////////////////////////////////////
class Time {

public:
   Time( int = 0, int = 0, int = 0 ); 

   void setTime( int, int, int );  
   void setHour( int );   
   void setMinute( int ); 
   void setSecond( int ); 

   int getHour();         
   int getMinute();       
   int getSecond();       

   void printUniversal(); 
   void printStandard();  

private:
   int hour;              
   int minute;            
   int second;            

}; 
//////////////////////////////////////////////
Time::Time( int hr, int min, int sec ) 
{ 
   setTime( hr, min, sec ); 
} 
//////////////////////////////////////////////
void Time::setTime( int h, int m, int s )
{
   setHour( h );
   setMinute( m );
   setSecond( s );
} 
//////////////////////////////////////////////
void Time::setHour( int h ) 
{
   hour = ( h >= 0 && h < 24 ) ? h : 0; 
} 
//////////////////////////////////////////////
void Time::setMinute( int m )
{ 
   minute = ( m >= 0 && m < 60 ) ? m : 0; 
} 
/////////////////////////////////////////////
void Time::setSecond( int s )
{ 
   second = ( s >= 0 && s < 60 ) ? s : 0; 
} 
//////////////////////////////////////////////
int Time::getHour() 
{ 
   return hour; 
} 
//////////////////////////////////////////////
int Time::getMinute() 
{
   return minute; 
} 

int Time::getSecond() 
{ 
   return second;
} 
//////////////////////////////////////////////
void Time::printUniversal()
{
   cout << setfill( '0' ) << setw( 2 ) << hour << ":"
        << setw( 2 ) << minute << ":"
        << setw( 2 ) << second;
} 
//////////////////////////////////////////////
void Time::printStandard()
{
   cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
        << ":" << setfill( '0' ) << setw( 2 ) << minute
        << ":" << setw( 2 ) << second 
        << ( hour < 12 ? " AM" : " PM" );
} 
////////////////////////////////////////////////////////////
void incrementMinutes( Time &, const int );  // prototype
///////////////////////////////////////////////////////////
int main()
{
   Time t;              

   // set time using individual set functions
   t.setHour( 17 );
   t.setMinute( 34 );
   t.setSecond( 25 );

   cout << "Result of setting all valid values:\n"
        << "  Hour: " << t.getHour()
        << "  Minute: " << t.getMinute()
        << "  Second: " << t.getSecond();

   // set time using individual set functions
   t.setHour( 234 );    // invalid hour set to 0
   t.setMinute( 43 );   // set minute to valid value
   t.setSecond( 6373 ); // invalid second set to 0

   cout << "\n\nResult of attempting to set invalid hour and"
        << " second:\n  Hour: " << t.getHour()
        << "  Minute: " << t.getMinute()
        << "  Second: " << t.getSecond() << "\n\n";

   t.setTime( 12, 00, 0 );    // set time
   incrementMinutes( t, 2 );  // increment t's minute by 2
} 
//////////////////////////////////////////////////////////////////
// add specified number of minutes to a Time object
void incrementMinutes( Time &tt, const int count )
{
   cout << "Incrementing minute " << count << " times:\nStart time: ";
   
   tt.printStandard();

   for ( int i = 0; i < count; i++ ) 
   {
      tt.setMinute( ( tt.getMinute() + 1 ) % 60 );  

      if ( tt.getMinute() == 0 )
         tt.setHour( ( tt.getHour() + 1 ) % 24 );

      cout << "\nminute + 1: ";
      tt.printStandard();
   } 
  
} 
