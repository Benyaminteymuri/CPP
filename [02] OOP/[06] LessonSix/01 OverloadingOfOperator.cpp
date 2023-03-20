//overloading of operator - 
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

///////////////////////////
class T{
	private:
		int x, y, z ; 
		
	public :
		T(int a,int b,int c)
			{ x =a ; y = b; z =c;} 
			
		T () {}; 
			
		T operator- (const T&S) 
		{ 								 
			x = x - S.x;
			y = y - S.y;
			z = z - S.z;
			return T (x,y,z);
		} 
		
		void f() 
		{
			cout << x << "   "<< y <<"   " << z;
			
		}
}; 
////////////////////////////////////////////////////////////
int main()
{ 
	T a ( 1,2,3);
	T b ( 5,3,8);
	T c;
	
	c = b - a;
	
	c.f( ) ;
	
	getch();
}
