//private inheritance 
//the public and protected members of base class are accessed through public functions of derived class.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
//////////////////////////////////////////////////////////
class B{
	protected :
		int m;
		
	public :
		int k;
		
		int sk () 
			{return k*k;}
			
		int sm () 
			{return m*m;}
}; 
//////////////////////////////////
class D : private B 		
{
	public:
		int a;
		void setm() 
			{m = a;} 
		
		void setk (int b) 
			{ k = b;}
			
		int dsm()
		    { return sm();}
		
		int dsk()
			{ return sk();}
} ; 
//////////////////////////////////

int main()
{ 
	D ob; 
	
	ob.setk(3);
	cout<<ob.dsk() << endl;  //3*3=9
	
	ob.a = 2;
	ob.setm();
	cout <<ob.dsm();  //2*2=4
	
	getch();
}
