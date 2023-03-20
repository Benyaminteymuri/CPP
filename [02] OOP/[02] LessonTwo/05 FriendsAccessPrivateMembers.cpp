// Friends can access private members of a class.
#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
///////////////////////////////////////
class Count {
   	private:
	   int x; 
	   
	public:
 	  Count(): x( 0 )  
  	 	{   }

  	 void print()        
	    { cout << x << endl; } 

	 friend void setX( Count &, int ); 
}; 
///////////////////////////////////////
void setX( Count &c, int val )
	{  c.x = val;  } 
//////////////////////////////////////
int main()
{
   Count k;      
   k.print();  //0  

   setX( k, 2 );  
   k.print();    //2

   getch();
} 
