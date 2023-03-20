//pure virtual function.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
///////////////////////////
class B
{ 
	public :
		virtual void f () = 0;
} ; 
//////////////////////////////////////////////
class D1 : public B 
{ 
	public :
		void f ()
			{ cout << "D1"<<endl;}
} ;
////////////////////////////////////////////////
int main()
{ 
	B b ; // error
	
	B *P;
	
	
	getch() ;
}
