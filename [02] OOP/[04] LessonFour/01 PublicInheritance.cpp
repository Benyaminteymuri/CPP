//public inheritance 
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

///////////////////////////
class B
{
	public :
		int a;
		
		int b;
		
		int f1() 
			{ return a*b;}
} ; 
///////////////////////////

class D : public B 
{
	public:
		int c ;
		
		int f2() 
			{ return c+f1();}
} ; 
///////////////////////////
int main()
{ 
	D ob; 
	
	ob.a = 2;
	ob.b = 3; 
	ob.c = 4;
	
	cout << ob.f2() ;    //4+2*3=10
	
	getch();
}
