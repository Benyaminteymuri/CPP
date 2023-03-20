//an array of base class pointers to base and derived class objects.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
///////////////////////////
class B
{
	public :
		virtual void f()
			{cout<< "B"<<endl;}
} ; 
///////////////////////////////
class D1 : public B
{ 
	public :
		void f ()
			{ cout << "D1"<<endl;}
} ; 
////////////////////////
class D2 : public B
{
	public :
		void f ()
			{ cout << "D2"<<endl;}
} ; 
//////////////////////////////
class D3 : public B
{ 
	public :
		void f ()
			{ cout << "D3"<<endl;}
} ; 
///////////////////////////////
int main ()
{
	B b;
	D1 d1;
	D2 d2;
	D3 d3;
	
	B *p[] = { &b , &d1, &d2, &d3}; 		// Array of pointers of B
	
	p[2] ->f() ;//D2
		
	getch();
}
