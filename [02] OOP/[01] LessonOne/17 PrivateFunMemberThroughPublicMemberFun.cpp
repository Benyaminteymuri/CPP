//accessing private function member through a public member function.
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 
/////////////////////////////////////////
class Cuboid {
	private:
		int  volume( ); 			
		int  x , y, z; 
	
	public:
		Cuboid( int a,int b,int c ):x(a),y(b),z(c)   
			{ } 
	
		//A public function to just pass on the return values.
		int Volume () 
			{ 
		  	  return volume();
			}
// Volume and volume are different because of different case of first letter. 
}; 
//////////////////////////////////////
int Cuboid::volume() 
	{return x*y*z ;}
//////////////////////////////////////
int main()
{
	Cuboid C1(2,3,4);
	cout << "Volume of cuboid C1= " << C1. Volume()<<"\n";
	
getch();
}

