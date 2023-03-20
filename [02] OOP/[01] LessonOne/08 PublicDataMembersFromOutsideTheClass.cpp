//initializing public data members from outside the class.
#include <iostream> 
#include <cstring>      
#include <conio.h>   
using namespace std; 
//////////////////////////////////////////////////  

class Rect { 
	public:
		int x ,y; 
		int Area( )
		  {return x*y; }
}; 
///////////////////////////////////////////////////  

int main()
{
	Rect R1;
	
	R1.x = 2; 
	R1.y = 5;
	
	cout << "Area = "   << R1.Area() <<endl;
	
	getch();
}
