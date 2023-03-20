// The operator + is overloaded to carry out minus operation.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

//////////////////////////////////////////////////////////////
class Number {
	private:
		int x, y ;
		
	public :
		Number (int a, int b )
			{ x = a ; y = b;} 
		
		Number()
			{}
		
		Number operator+(const Number & m)
		{ 
			x = x-m.x;
			y = y-m.y;
			return Number (x,y); 
		}

		
		void f()
		{
			cout << x << "  "<< y;
		}
} ; 
////////////////////////////////////////////////////////////////////		
//Number Number :: operator+ (const Number & m) 
////////////////////////////////////////////////////////////////////

main()
{
	int a = 1; 
	int b = 2;
	cout << a + b;
	
	cout<<"\n--------------------------\n"	;
	
	Number N( 5, 8 ), M( 3,7 ), D; 
	D = N + M;
	D.f( );
	
	
	getch();
}
