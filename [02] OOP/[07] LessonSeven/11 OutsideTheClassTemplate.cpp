// definition of template member functions outside the class template. 
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

///////////////////////////////////////////////////////////////////
template <class T>
class Cuboid {
	public:
		T x , y , z ;
		Cuboid (T L, T W, T H)
			{x = L; y = W; z = H ;} 
			
		T volume( ); 
}; 

///////////////////////////////////////////////////////////////////

template <class T > 
T Cuboid <T>::volume()
{
	return x*y*z ;
}
/////////////////////////////////////////////////////////////////////
int main()
{
	Cuboid <int> C1(2,3,4); 			// Object with int dimensions
	
	cout << C1.volume()<<"\n";
	
	Cuboid <double> C2(2.2,3.5,4.5) ;  

	cout << C2.volume();
	
	getch();
}
