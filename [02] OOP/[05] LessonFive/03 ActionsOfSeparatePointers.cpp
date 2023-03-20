// the actions of separate pointers of base class and of derived class.
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
			{ cout<< "B" <<endl;}
} ; 
//////////////////////////////////////////////////
class D : public B
{
	public :
		void f( )
			{cout<< "D" <<endl;}
} ; 
/////////////////////////////////////////////////
int main()
{ 
	B b ; 
	B *p;
	p = & b ;   
	p -> f ();  //B  
	
	D d ; 
	D *pd ;
	pd= & d ;      
	pd -> f(); //D
	
	getch();
}
