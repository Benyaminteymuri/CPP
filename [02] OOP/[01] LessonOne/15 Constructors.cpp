//types of constructors.
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 
//////////////////////////////////////////////////////////////////////////////  
class Cubicle {
	private:
		int x, y, z;
		
	public:
		Cubicle ()      		// constructor with default values
	  		{ 
			  cout<< "constructor with default values used.\n";
			  x = 3, y = 4, z = 2 ;
  		    }
		
	
		~ Cubicle () 
		 	{cout<< "Destructor called to remove object.\n\n";}
	
		Cubicle (int a)		  	     //one parameter constructor
		{
			x = a, y = 2 , z= 3; 	
			cout << "\nConstructor with one parameter used.\n";
		}
	
		
		Cubicle (int m,int k)         // two parameter constructor
		{
			x = 3,y = m, z= k;
			cout<<"\nconstructor with two parameters used.\n"; 
		}
	
		Cubicle (Cubicle & c2)    // copy constructor
		{ 
			cout << "\nCopy constructor used.\n" ;
			x = c2.x , y = c2.y , z = c2.z ;
		}
	
		int volume() 
			{return ( x*y*z);}
} ; // end of class
//////////////////////////////////////////////////////
int main()
{
	{
	Cubicle c1;
	cout << "Volume of cube1 = " <<c1.volume() <<"\n" ; //3*4*2=24
	}
	
	Cubicle c2(3) ;
	cout << "Volume of cube2 = " <<c2.volume()<<"\n ";//3*2*3=18

	{
	Cubicle c3 (4,5);
	cout << "Volume of cube3 = " <<c3.volume()<<"\n";//3*4*5=60
	}
	
	{ 
	Cubicle c4;
	c4 = c2;
	cout << "Volume of cube4 = " << c4.volume( )<<"\n"; //3*2*3=18
    }

    return 0;
}
