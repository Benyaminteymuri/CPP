#include <iostream>
#include <conio.h>
using std::cout;
using std::endl;

/////////////////////////
class C {
	private:
  	 	double real;       
   		double i;  
   		
	public:
  	 	C( double = 0.0, double = 0.0 );       
   
   		C operator- (const C &) const;  
   
   		void print() const;                          
   

}; 
///////////////////////////////////////////////////////////////////
C::C( double r, double t ) : real( r ),i( t ) 
	{ } 

///////////////////////////////////////////////////////////////////
C C::operator-( const C &y ) const
{
   return C( real - y.real ,  i - y.i );
} 

///////////////////////////////////////////////////////////////////
void C::print() const
{ 
   cout << '(' << real << ", " << i << ')'; 
} 
///////////////////////////////////////////////////////////////////

int main()
{
   C x;
   C y( 3.5, 9.6 );
   C z( 1.5, 6.5 );

   x = y - z;
   
   x.print();
   
   getch();
} 
