//application of virtual function.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
////////////////////////////////////////////////////
class B
{
	public:
		virtual void f ()
			{ cout<< "B"<<endl;}
}; 
//////////////////////////////////////////////////
class D : public B
{ 
	public :
		void f( )
			{cout<< "D"<<endl;}
}; 
/////////////////////////////////////////////////
int main()
{
	B b;
	B *p;
	
	p = & b ;	 
	p -> f();  //B
	
	D d;	
	p = & d; 		
	p -> f (); //D
	
	getch();
}

