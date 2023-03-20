// Attempting to initialize a constant of a built-in data type with an assignment.
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 

using std::cout;
using std::endl;
//////////////////////////////////
class t {
	private:
	   int count;
	  // int a;   
	    
 	   const int a;    

	public:
	   t( int c = 0, int i = 1 );  
	
	   void add() 
	   { 
	      count += a; 
	   } 
	
	   void print() const
		{
   			cout << count << "-----"<< a << endl;
		}     
}; 
/////////////////////////////////////////////
t::t( int c, int i )
{                  
   count = c;      
   a = i;      // ERROR: Cannot modify a const object

} 
/////////////////////////////////////////////
int main()
{
   t ob(2,3);

   ob.print();//2-------3

   ob.add();
   
   ob.print();//5-------3
   
  getch();
  //@farshidshirafkan51
}
