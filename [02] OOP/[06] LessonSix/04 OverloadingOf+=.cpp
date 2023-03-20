//overloading of += 
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

///////////////////////////
class T
{
	private:
		int x, y, z ; 
		
	public :
		void set (int a, int b, int c) 
			{ x =a ; y = b; z =c;}
	
		void operator += (T P) 
		{ 
			x = x + P.x ; 
			y = y + P.y ;
			z = z + P.z ; 
		}

		void f( )
		{ 
			cout << x <<"\t"<<y << "\t"<< z <<endl;
		}
}; 
//////////////////////////////////////////////
int main()
{ 
	T n1, n2;
	
	n1.set( 1, 2 , 3);
	n2.set( 4, 5 , 6);
		
	n1 += n2;   

	n1.f() ;//5  7   9
		
	getch();
}
