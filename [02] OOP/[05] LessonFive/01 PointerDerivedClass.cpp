//if a function is not declared virtual the base class pointer
//will point to base class function definition even though it is assigned the
//address of derived class object.


#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
//////////////////////////////////////////////////////////////
class B
{
	public:
		void f ()
			{cout<< "B"<<endl;}
};
///////////////////////////////////////////////////////////////
class D : public B
{
	public :
		void f( )
			{cout<< "D"<<endl;}
}; 
//////////////////////////////////////////////////////////////
int main()
{ 
	B b; 
	B *p; 
	p = &b;          
	p -> f();   //B
	
	
	D d; 
	p = & d; 
	p -> f (); //B
	
	getch();
}
