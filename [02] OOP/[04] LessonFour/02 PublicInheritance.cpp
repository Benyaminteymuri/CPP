//public inheritance
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
/////////////////////////////////////////////////////////////
class B 
{
	protected :
		int m; 
		
	public:
		int k;
		
		int S ()
			{return k*k ;}
			
		int f () 
			{ return k*m;}
}; 
/////////////////////////////////////////////////////////////
class D : public B 
{
	public:
		void set(int a) 
			{m = a;}
}; 
////////////////////////////////////
int main()
{ 
	D ob; 
	
	ob.k = 2; 		
	
	cout << ob.S() << endl;   //2*2=4    
	
	ob.set(3); 		

	cout << ob.f() ;    //2*3=6         

getch();
}

