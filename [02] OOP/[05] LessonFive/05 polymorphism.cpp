//polymorphism.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
/////////////////////////////////////////////////
class B
{
	public :
		virtual void f() 
			{cout<<"B"<<endl;}
} ; 
/////////////////////////////////////////////////
class D1 : public B
{ 
	public :
		void f()
			 {cout <<"D1"<<endl;}
} ; 
/////////////////////////////////////////////////
class D2 : public B
{
	public :
		void f() 
			{ cout <<"D2"<<endl;}
} ; 
/////////////////////////////////////////////////
int main ()
{
	B b; 
	
	B *p ;
	
	p= &b; 
	p ->f() ;//B
	
	D1 x; 
	p = &x; 
	p -> f (); //D1
	
	D2 y; 
	p = &y;
	p ->f() ;//D2
	
getch();
}

