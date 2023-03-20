//public inheritance 
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

//////////////////////////////////////////////////
class B
{
	private: 
			  int m;
} ; 
//////////////////////////////////////////////////
class D : public B 
{
	public:
			int a;
		
			void setvalue( ) 
				{m = a;}                //error 
		
} ; 
//////////////////////////////////////////////////
int main()
{ 
	D ob; 
	
	ob.a = 2;
	
	cout << ob.a;      
	
getch();
}
