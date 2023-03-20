// overloading:  preincrement operator, postincrement operator
#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::ostream;
//////////////////////////////////////////////////////////////
class C {
	private:
	   int x;
	   int y;
	             
	public:
	   C( int a , int b  )
	   		{ x=a;y=b; } 
	   		
	   C &operator++();            // preincrement operator
	   
	   C operator++( int );        // postincrement operator
	
	 	
   friend ostream &operator<<( ostream &, const C & );
}; 
///////////////////////////////////////////////////////////////////////////
// preincrement operator
C &C::operator++()
{
   x++;
   y++;
   return *this;  
   
} 
///////////////////////////////////////////////////////////////////////////
// postincrement operator
C C::operator++( int )
{
   C temp = *this;
   x++;
   y++;
   return temp;  
} 
/////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
// overloaded output operator
ostream &operator<<( ostream &k, const C &d )
{
   k << d.x << ", " << d.y;
   return k;   
}
/////////////////////////////////////////////////////////////////////////
int main()
{
   C d1(1,5);  
   cout << d1   << endl;  //1,5
   cout << ++d1 << endl;  //2,6
   cout << d1   << endl;  //2,6
   
   cout<<"\n------------------------\n";
   
   
   C d2( 4, 7 );
   cout << d2   << endl;   //4,7
   cout << d2++ << endl;   //4,7
   cout << d2;            //5,8
   
   getch();
} 
