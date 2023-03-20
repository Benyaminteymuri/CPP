// private inheritance 
//public and protected members of base class become private members in derived class.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

//////////////////////////////////////////////////////
class B {
	protected :
		int c;
		
	public:
		int k;
}; 
//////////////////////////////////////////////////////
class D : private B 		
{
	public: 
		int a;
		int b;
		void set( ) 
			{c = a;}
};
//////////////////////////////////////////////////////
int main()
{ 
	D ob ; 

	ob.a = 1 ;
	ob.b = 2 ;
	
	cout << ob.a + ob. b;  //1+2=3
	
	ob.k = 5;      //error
	
	getch();
}
