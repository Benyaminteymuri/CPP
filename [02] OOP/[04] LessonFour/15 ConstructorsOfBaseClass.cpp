//constructors of base and derived classes.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

////////////////////////////////////////////////////
class Cubicle {
	private:
		int x, y, z;
	
	public:
		Cubicle ()
			{}
			
		Cubicle (int a, int b, int c ) 
		{
			x = a;
			y = b;
			z = c;
			cout<<"constructor of Cubicle "<<endl;
		}
		
		int area()
			 { return 2*(x*y +y*z +z*x);}
} ; 
////////////////////////////////////////////////////

class Cube : public Cubicle
{
	public:
		int Rate;
		Cubicle C;
		
		Cube(int L, int W, int H, int A): Cubicle (L, W, H) 
			{ Rate = A;cout<<"constructor of Cube "<<endl;}
			
		int cost(int Rate, Cubicle C )
			{return Rate * C.area() ;}
}; 
////////////////////////////////////////////////////

int main()
{
	Cubicle  C1 (1,2,3);
	
	Cube     cube1(1,2,3,4);
	
	
	cout << cube1.area() <<"\n"; //22
	
	cout << cube1.cost(4, C1 );//22*4=88
	
		
	return 0 ;
}
