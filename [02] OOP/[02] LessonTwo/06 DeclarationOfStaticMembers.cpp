//declaration of static members in a class.
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 
//////////////////////////////////////////////////////////////////
class Cuboid {
	private:
		int y;
		static int z ; 
		
	public:
		static int x; 
		
		Cuboid( int W ): y(W) {} 
		
		static void Display ( )   // static function
			{cout <<z <<endl;}
	
		int volume( );
}; 
//////////////////////////////////////////////////////////////////
int Cuboid :: x = 2;
int Cuboid :: z = 3;
//////////////////////////////////////////////////////////////////
int Cuboid::volume()
	{return x*y*z ;}
//////////////////////////////////////////////////////////////////
int main()
{
	Cuboid :: Display( );	 // function call without an object
	
	Cuboid ob1(4); 					//y=4
	cout << ob1.x <<endl; 		//2
	cout << ob1.volume() <<"\n";//2*4*3=24

	Cuboid ob2(5);
	cout << ob2.x <<endl;		//2
	cout << ob2.volume() ;		//2*5*3=30
	
	getch();
}
