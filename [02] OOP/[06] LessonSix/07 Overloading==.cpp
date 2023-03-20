//overloading of operator ( == ) for vectors.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

//////////////////////////////////////////////////////
class T
{
		int x, y, z ; 
		
	public :
		T (int a, int b,int c) 
			{ x =a ; y = b; z =c;}
		
		void operator==( T S)
		   {
			 if ( x==S.x && y == S.y && z== S.z)
				cout << "true"  << endl;
			 else
				cout << "false" << endl;
		   }
		   
		} ; 
/////////////////////////////////////////////////////
int main()
{
	T  V1 ( 1,2,3);
	T  V2 ( 4,5,6);
	T  V3 ( 1,2,3);
	
	V1 == V2;   //false
	
	V1 == V3;  //true

	
getch();
}
