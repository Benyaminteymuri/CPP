//constructor of a class containing objects of other classes.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

///////////////////////////
class C
{
	private :
		int x;
		
	public :
		C(int a) 
		{
			x = a;
			cout << "Constructor of C \n";
		} 
		
		~ C () 
			{ cout<<"Destructor of C \n";	} 
		
		int getx( ) 
			{ return x;}
}; 
//////////////////////////////////////////
class B {
	private:
		int y;
		
	public :
		B (int b) 
			{ y = b; cout << "Constructor of B \n";} 
			
		~ B () 
			{ cout<<"Destructor of B \n";} 
			
		int gety()
			{return y;}
}; 
///////////////////////////////////////////
class D
{
	private:
		int z;
		
	public:
		C objC; 
		B objB; 
		
		D ( int i, int j, int k ) : objB (i) , objC(j) 
			{ z =k ; cout << "Constructor of D \n" ;}
			
		~ D ()
			 { cout<< "Destructor of D \n";} 
			 
		int s ()
			{return objC.getx() + objB.gety() + z;}
} ;
////////////////////////////////////////////////////////////
int main()
{
		D ob(1, 2, 3);
		
		cout << ob.s()<<endl;
		
}
