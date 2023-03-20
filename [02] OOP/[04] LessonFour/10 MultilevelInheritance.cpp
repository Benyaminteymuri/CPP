//multilevel inheritance.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

//////////////////////////////////////////////////////////////////
class B
{ 
	public :
		void f () { cout << "B " <<endl;}
};
//////////////////////////////////////////////////////////////////

class D1 : public B
{
	public :
		void g () { cout << "D1 " << endl;}
};
//////////////////////////////////////////////////////////////////
class D2 : public D1
{ 
	public :
		void h () { cout << "D2 "<< endl;}
};
//////////////////////////////////////////////////////////////////

int main ()
{
	D2 ob ; 
	
	ob.f();
	
	ob.g();
	
	ob.h();

getch();
}
