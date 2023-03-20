//overloading of  Preincrement operator--
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
		T(int a, int b,int c)
			 { x =a ; y = b; z =c;}
		
		T operator --() 	
		{ 
			x -= 1;
			y -= 1;
			z -= 1;
			return T (x,y,z);
		}

		void f( )
		{ 
			cout << x<<" "<<y<<" "<<z;
		}
}; 
//////////////////////////////
int main()
{ 
	T   ob(1,2,3);
	
	(--ob).f () ;


getch();
}
