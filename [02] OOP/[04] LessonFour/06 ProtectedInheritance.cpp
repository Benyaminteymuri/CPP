//Protected inheritance 
//with base class having private members.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

/////////////////////////////////////////////////////////////////
class B 
{ 
	private:
		int y; 
		int t() {return y*y ;} 
		
	public :
		int x; 
		
		void sety(int a ) {y = a;} 
			 
		int k()	  {return t();} 
			
		int f()   {return x*x;}
}; 

/////////////////////////////////////////////////////////////////
class D : protected B 			
{
	public:
		void dset(int n)
			{sety(n);}
			 
		void dsetx(int p) 
			{ x = p;} 
			
		int ds()
			{return k();} 
			
		int df()
			{return f();} 
}; 
/////////////////////////////////////////////////////////////////

int main()
{ 
	D ob; 
	
	ob.dsetx(2);
	
	cout<< ob.df() <<endl;   //2*2=4     
	
	
	ob.dset(3);
	
	cout<< ob.ds();   //3*3=9	   	    
	
	getch();
}
