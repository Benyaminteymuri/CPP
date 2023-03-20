// Display order in which base-class and derived-class constructors are called.
#include <iostream>  

using std::cout;
using std::endl;
///////////////////////////////////////////////////
class Point {
	private: 
	   int x;  
	   int y;  
	
	public:
	   Point( int = 0, int = 0 ); 
	   ~Point();           
	
	   void setX( int a) { x = a; }   
	   int getX() const { return x;}    
	   
	   void setY( int b ) { y = b; }    
	   int getY() const {return y;}    
	   
	   void print() const 	{ cout << '[' << getX() << ", " << getY() << ']';}  
}; 
///////////////////////////////////////////////////
Point::Point( int a, int b )
   : x( a ), y( b )
{
   cout << "Point  constructor: ";
   print();
   cout << endl;
} 
///////////////////////////////////////////////////
Point::~Point()
{
   cout << "Point  destructor : ";
   print();
   cout << endl;
} 
//////////////////////////////////////////////////////
class Circle : public Point {
	private: 
	   double radius; 
	   
	public:
	   Circle( int = 0, int = 0, double = 0.0 );  
	
	   ~Circle(); 
	                   
	   void   setRadius( double r)
	   	 	{ radius = ( r < 0.0 ? 0.0 : r );}  
	   	 
	   double getRadius() const 
	   		{  return radius;}  
	
	   double getDiameter() const
	   		{   return 2 * getRadius();} 
			         
	   double getCircumference() const
	  		{  return 3.14159 * getDiameter();} 
	  		
	   double getArea() const
			{  return 3.14159 * getRadius() * getRadius();}    
	
	   void   print() const
	   {
 		  Point::print();      
   		  cout << "; Radius = " << getRadius();
	   }
}; 
///////////////////////////////////////////////////////////////////////
Circle::Circle( int a, int b, double r ): Point( a, b )  
{
   setRadius( r );

   cout << "Circle constructor: ";
   print();
   cout << endl;
} 
///////////////////////////////////////////////////
Circle::~Circle()
{
   cout << "Circle destructor : ";
   print();
   cout << endl;
} 
///////////////////////////////////////////////////
int main()
{
   { // begin new scope
      Point ob( 1, 2 );
   } // end scope

   cout << endl;
   Circle c1( 3, 4, 1.5 ); 

   cout << endl;
   Circle c2( 5, 6, 2 ); 

   cout<<endl<<endl;
} 
