// pointer of derived class cannot point to an object of base class.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

///////////////////////////
class B
{
	public:
		void f ()
			{ cout<< "B"<<endl;}
}; 
///////////////////////////////////
class D : public B
{
	public :
		void f( )
			{cout<< "D"<<endl;}
}; 
/////////////////////////////////////////
int main()
{ 
	D d; 
	D *p;
	p = &d; 
	p -> f(); //D
	
	B b; 
	//p = & b;      	// error :cannot convert from class B* to class D*
	
	
	getch();
}
