//application of pure virtual function.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
/////////////////////////////////////////////////
class C 
{
	private:
		int x; 
		
	public:
		void setx( int a )
			{ x = a;}
			
		int getx ()
			 { return x;}
			 
		virtual double Area (void) =0;
};
//////////////////////////////////////////////////
class Circle : public C
{
	public:
		double Area (void)
			{return (3.14*getx()*getx()) ;}
}; 
///////////////////////////////////////////////////
class Square : public C
{
	public:
		double Area (void)
			{return (getx()*getx()) ;}
}; 
//////////////////////////////////////////////////
int main ()
{ 
	Square S1;
	C *p1;
	p1 = & S1;
	p1 -> setx (3);
	cout << p1 -> Area(); //3*3=9
	
	cout<<endl;
	
	Circle C1;
	C *p2 ;
	p2 = & C1;
	p2 -> setx (2);
	cout << p2 -> Area ();//3.14*2*2=12.56

getch();
}
