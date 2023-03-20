// class Cubicle.
#include <iostream> 
#include <cstring>      
#include <conio.h>   
using namespace std; 
///////////////////////////////////////////////////  
  
class Cubicle { 
	private:
		int x,y,z;
	public:
		void set( int , int, int );
		int  volume (); 
};

///////////////////////////////////////////////////  

void Cubicle:: set (int width, int height, int length )
	{ x = width , y = height, z = length ; }
	
///////////////////////////////////////////////////  
int Cubicle::volume () 
	{ return x*y*z;} 
	
///////////////////////////////////////////////////  

main()
{ 
	Cubicle cube1; 
	
	Cubicle cube2; 
	
	cube1.set (1,2,3); 
	
	cube2.set (4,5,6);
	 
	cout << "Volume of cube1 = " << cube1.volume() <<"\n";//1*2*3=6
	
	cout << "Volume of cube2 = " << cube2.volume() <<"\n";//4*5*6=120

	getch();
}
