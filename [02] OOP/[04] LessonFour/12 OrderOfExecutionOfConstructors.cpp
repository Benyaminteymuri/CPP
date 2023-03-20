//the order of execution of constructors and destructors in inheritance.
#include <iomanip>
#include <iostream> 

using std::cout;
using std::endl;
/////////////////////////////////////////////////////////////
class B { 
	public :
		B( ) 
			{cout << "Constructor of B \n";} 
			
		~ B()
			{cout << "Destructor of B \n";} 
}; 
/////////////////////////////////////////////////////////////
class D : public B 
{ 
	public:
		D ( )
			{ cout << "Constructor of D \n" ;}
			 
		~ D () 		
		 	{ cout << "\nDestructor of D \n";}
} ; 
/////////////////////////////////////////////////////////////
int main()
{
	D  ob; 

	return 0;
}
