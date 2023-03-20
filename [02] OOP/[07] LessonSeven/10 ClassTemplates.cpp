//CLASS TEMPLATES
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

////////////////////////////////////////////////////////////////
template <class T>
class Cuboid 
{
		T  x , y , z ; 
		
	public:
		Cuboid(T L, T W, T H) 
			{x = L; y = W; z = H ;}
			
		T volume( )   
			{ return x*y*z ;}
};
/////////////////////////////////////////////////////////////////
int main()
{
	Cuboid <int> C1(2,3,4); 			
	
	cout << C1.volume() <<"\n";
	
	Cuboid < double> C2(2.5,3.5,4.5); 

	cout << C2.volume() ;
	
	getch();
}
