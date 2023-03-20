//VIRTUAL DESTRUCTORS
//behaviour of destructor functions when base class destructor is not declared virtual.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
//////////////////////
class B
{
	protected :
		int x ;
	
	public :
		B() 	   { } 
		
		B(int m)   { x = m ; cout<< "Constructor of B " <<endl;}
			
	//	~ B()      { cout << "Destructor of B "<<endl;}
		
		virtual ~ B()      { cout << "Destructor of B "<<endl;}
		
			
		virtual int f( )	{ return 2*x;}
} ; 
////////////////////////////////////////////////////
class D1
{
	protected :
		int x1;
		
	public :
		D1()        { } 
		
		D1(int n)	{ x1 = n; cout<< "Constructor of D1 "<<endl; }
		
		~ D1()		{ cout<<"Destructor of D1 "<<endl; }
		
		int getx1()	{ return x1; }
};
/////////////////////////////////////////////////////////////
class D2
{
	protected :
		int x2;
		
	public :
		D2(){}
		
		D2( int p ) 	{ x2 = p; cout <<"Constructor of D2 " << endl; }
	
		~ D2() 		    { cout <<"Destructor of D2 "<<endl; }
				
		int getx2()		{ return x2; }
} ;
////////////////////////////////////////////////////////////////
class D3 : public B
{
	private:
		int x3;
		
	public :
		D1 d1; 
		D2 d2; 
		
		D3 ()   { }
			
		D3( int p, int q , int r, int s): B(p), d1(q), d2(r)  	 { 	x3 = s;	cout << "Constructor of D3 "<< endl; }
		
		~ D3()  { cout<<"Destructor of D3 "<<endl; }
		
		
			
		int f()  { return x3 + d2.getx2() + d1.getx1() + x ; }
} ;
////////////////////////////////////////////////////
int main ()
{
	B *p;
	
	p = new B(3); 			// dynamic object 
	
	cout << p ->f()<<endl; //6
	
	cout<<"\n======================\n";
	
	p = new D3( 4,5,6,7);
	
	cout<< p -> f()<<endl; //4+5+6+7=22
	
	delete p; 
	
	return 0;
}
