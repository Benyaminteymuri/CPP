//public inheritance 
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

///////////////////////////////////////////////////////////////////
class B { 
	private :
		int x; 
		
		int S()
			{ return x*x ;} 
	
	public:
		int m ;
		
		void set (int p )
			{x = p;}
		
		int f()
			{return S();} 
}; 

///////////////////////////////////////////////////////////////////

class D : public B 
{
	public:
		int n ;
}; 
///////////////////////////////////////////////////////////////////
int main()
{ 
	D ob; 

	ob.m = 4 ;		 	
	ob.n = 3 ; 		
	ob.set(2) ; 
	
	cout << ob.m + ob.n + ob.f();     //4+3+4=11 
	
getch();
}
