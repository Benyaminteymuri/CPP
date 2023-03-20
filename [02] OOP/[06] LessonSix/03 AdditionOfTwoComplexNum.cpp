//addition of two complex numbers.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

///////////////////////////
class Number
{
	private:
		int  x, y ;   // x + yi  
		
	public :
		Number (int a, int b ) 
			{ x =a ; y = b;} 
		
		Number ()
			{}; 
		
		Number& operator+(const Number & m)  
		{
			x = x + m.x;
			y = y + m.y;
			return* this; 
		}
		
		void f()
		{
			cout<< x <<" + "<< y <<"i"<< endl;
		}
} ; 
///////////////////////////////////////////////////////////////////
int main()
{ 
	Number  N( 1 , 2 );
	Number  M( 3 , 5 );
	Number  D;
	
	D = N + M;
	
	D.f( ) ;
	
	getch();
}
