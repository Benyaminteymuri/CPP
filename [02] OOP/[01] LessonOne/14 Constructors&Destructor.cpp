//types of constructors and destructor.
/*
The different types of constructors are listed below.
	(1) Constructor with default values
	(2) Constructor with parameters
	(3) Copy constructor
*/

#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 
/////////////////////////////////////////// 
class Cubicle {
	private:
		int x, y, z;
	public:
		Cubicle ()                          // default constructor
		{ 
			x = 3, y = 4, z = 2 ; 
			cout << "Default constructor called.";
		}
		
		~ Cubicle () 
		{
			cout<< "Destructor called to remove object.\n";
		}
		
		Cubicle (int a, int b, int c )   	// parametric constructor
		{
			x = a, y = b , z= c;
			cout << endl<<"Parametric constructor called. ";
		}
		
		Cubicle (Cubicle & m)          // copy constructor 
		{ 
			x = m.x , y = m.y , z = m.z ;
			cout << endl<<"\nCopy constructor called." ;
		}
		
		int volume()
		 { 
		   return ( x*y*z);
  	     } 
} ; 
///////////////////////////////////////////

int main()
{
	{ 
	Cubicle c1; 				  	 //scope : block{}
	cout << "\nVolume of cube1 = " <<c1.volume() <<"\n" ;
	}

	Cubicle c2(6,5,4) ;			    // Scope : main()
	cout << "\nVolume of cube2 = " <<c2.volume();

	{ 
	Cubicle c3(c2) ; 	  	       //Scope : block {}
	cout << "\nVolume of cube3 = " << c3.volume( )<<"\n";
	}

   return 0;
}
