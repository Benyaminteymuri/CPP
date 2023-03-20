// polymorphism
#include <iostream>
#include <iomanip>
#include <conio.h>

using std::cout;
using std::endl;
////////////////////////////////////////////////
class Point {
	private: 
	   int x; 
	   int y; 
	   
	public:
	   Point( int = 0, int = 0 ); 
	
	   void setX( int );  
	   int getX() const;  
	   
	   void setY( int );  
	   int getY() const;  
	
	   virtual void print() const
	   		{  cout << '[' << getX() << ", " << getY() << ']';} 
 
}; 
//////////////////////////////
Point::Point( int a, int b )
   : x( a ), y( b )
	{  } 
//////////////////////////////
void Point::setX( int a )
	{ x = a; } 
//////////////////////////////
int Point::getX() const
	{  return x;} 
//////////////////////////////
void Point::setY( int b )
	{  y = b; } 
//////////////////////////////
int Point::getY() const
	{  return y;} 
//////////////////////////////////////////////
/////////////////////////////////////////////
class Circle : public Point {
	private: 
	   double radius;
	   
	public:
	   Circle( int = 0, int = 0, double = 0.0 );  
	
	   void   setRadius( double );         
	   double getRadius() const;         
	
	   double getDiameter() const;       
	   double getCircumference() const;  
	   double getArea() const;           
	
	   virtual void print() const
	   {
   		cout<<endl;
   		Point::print(); 
		cout << "      Radius = " << getRadius();
   		cout<<endl;
	   }         
}; 
//////////////////////////////////////////////////
Circle::Circle( int a, int b, double r )
   : Point( a, b )  // call base-class constructor
{
   setRadius( r );
} 
//////////////////////////////////////////////////
void Circle::setRadius( double r )
{
   radius = ( r < 0.0 ? 0.0 : r );
} 
//////////////////////////////////////////////////
double Circle::getRadius() const
{
   return radius;
} 
//////////////////////////////////////////////////
double Circle::getDiameter() const
{
   return getRadius() * 2;
} 
//////////////////////////////////////////////////
double Circle::getCircumference() const
{
   return 3.14159 * getDiameter();
} 
//////////////////////////////////////////////////
double Circle::getArea() const
{
   return 3.14159 * getRadius() * getRadius();
} 
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
int main()
{
   Point ob1( 7 , 5 );
   ob1.print();   //[7,5]  
   
   cout<<endl;
   
   Point  *p  = 0;
   p = &ob1;
   p->print();   //[7,5]  
   
   cout<<"\n=============================================\n";
   
   Circle ob2( 8 , 3 , 2.5 );
   ob2.print();  //[8,3]   radius=2.5

   p = &ob2;
   p->print();  //[8,3]   radius=2.5
   
   Circle *cp = 0; 
   cp = &ob2;
   cp->print();   //[8,3]   radius=2.5

   getch();
} 
