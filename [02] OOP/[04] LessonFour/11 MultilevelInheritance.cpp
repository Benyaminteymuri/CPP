// multilevel inheritance.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

////////////////////////////////////////////////////////////////
class B
{ 
	protected :
		int x;
		
	public :
		void setb( int m) 
			{ x = m ;}
			
		void f ()
			{cout<<"B"<<endl;}
}; 
////////////////////////////////////////////////////////////////
class D1 : public B
{
	protected :
		int x1;
		
	public :
		void set1(int n)
			{ x1 = n;}
			
		void f1 ()
			{cout <<"D1"<<endl;}
}; 
////////////////////////////////////////////////////////////////
class D2 : public D1
{
	protected :
		int x2;
		
	public :
		void set2( int p ) 
			{ x2 = p ;}
			
		void f2 ()
			{ cout <<"D2"<<endl;}
}; 
////////////////////////////////////////////////////////////////
class D3 : public D2
{
	private :
		int x3;
		
	public :
		void set3 ( int q) 
			{ x3 = q;}
	
		void f3 ()
			{ cout <<"D3"<<endl;}
		
		int k ( ) 
			{ return x3 + x2 + x1 + x ;}
};
////////////////////////////////////////////////////////////////
int main ()
{
	D3 ob;

	ob.setb(1); 	//x=1
	ob.set1(2);		//x1=2
	ob.set2(3);		//x2=3
	ob.set3(4);		//x3=4
	
	cout << ob.k() <<endl;   //4+3+2+1=10 
		
	ob.f();
	ob.f1();
	ob.f2();
	ob.f3();


getch();
}
