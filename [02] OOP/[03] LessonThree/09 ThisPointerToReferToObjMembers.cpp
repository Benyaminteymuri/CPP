// Using the this pointer to refer to object members.
#include <iostream>
#include <conio.h>

using namespace std;

/////////////////////////////////////////////////////////////
class Test {
	private:
	   int x;
	   
	public:
	   Test( int = 0 );   
	    
	   void print() const;
}; 
/////////////////////////////////////////////////////////////
Test::Test( int a ) : x( a )  
	{ } 
/////////////////////////////////////////////////////////////
void Test::print() const   
{
   cout << x << endl;
   
   cout << this->x << endl;
   
   cout << (*this).x ;
} 
/////////////////////////////////////////////////////////////
int main()
{
   Test ob( 1 );

   ob.print();

   getch();
}
