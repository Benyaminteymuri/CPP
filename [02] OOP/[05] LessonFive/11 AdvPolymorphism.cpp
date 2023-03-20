// polymorphism
// Driver for shape, point, circle, cylinder hierarchy.
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <vector>
#include <string>  

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::vector;
using std::string;
//////////////////////////////////////////////////////////////////////

class Shape {
	public:
	    virtual double getArea() const
	    	{  return 0.0;} 
	
	   virtual double getVolume() const
	   		{  return 0.0;}  
	
	   // pure virtual functions; overridden in derived classes
   	   virtual void    print()   const = 0;     

	   virtual string  getName() const = 0;    // return shape name
};
//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
class Point : public Shape {
	private: 
	  	 int x;  
	  	 int y;  
	  	 
	public:
	   Point( int = 0, int = 0 ); 
	
	   void setX( int a)  {  x = a; } 
	   int getX() const   {  return x; }  
	   
	   void setY( int b)  {  y = b; } 
	   int getY() const   { return y; } 
	   
	   virtual string getName() const {  return "Point:  "; } 
	
	   virtual void print() const     {  cout <<'[' << getX() << ", " << getY() << ']'; } 
}; 
//////////////////////////////////////////////////////////////////////
// default constructor
Point::Point( int m, int n )
   : x( m ), y( n )
{
   // empty body 
} 
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
class Circle : public Point {
	private: 
	   double radius;  
	
	public:
	   Circle( int = 0, int = 0, double = 0.0 );  
	
	   void setRadius( double r)   { radius = ( r < 0.0 ? 0.0 : r );  } 
	   double getRadius() const    { return radius; } 
	
	   double  getDiameter()      const  {  return 2 * getRadius();  }       
	   double  getCircumference() const  {  return 3.14159 * getDiameter();  }   
	   virtual double getArea()   const  {  return 3.14159 * getRadius() * getRadius();  }    
	
	 
	   virtual string getName() const {  return "Circle:    ";} 
	
	   virtual void print() const
	   {
   	 	 cout << "center = ";
   		 Point::print();  
   		 cout << ";    radius = " << getRadius();
	   }   
}; 
//////////////////////////////////////////////////////////////////////
// default constructor
Circle::Circle( int a, int b, double r )
   : Point( a, b )  // call base-class constructor
{
   setRadius( r );
}
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
class Cylinder : public Circle {
	private:
	   double height;  
	
	public:
	   Cylinder( int = 0, int = 0, double = 0.0, double = 0.0 ); 
	      
	   void    setHeight( double h)  {  height = ( h < 0.0 ? 0.0 : h );  } 

	   double  getHeight()         const  {   return height;  } 
	
	   virtual double getArea()    const  {  return 2 * Circle::getArea() +  getCircumference() * getHeight(); } 
	   virtual double getVolume()  const  {  return Circle::getArea() * getHeight();  }
	   
	   virtual string getName()    const  {  return "Cylinder:  ";}  
	
	   virtual void   print()      const  { Circle::print();  cout << ";    height  " << getHeight();  } 


}; 
//////////////////////////////////////////////////////////////////////
// default constructor
Cylinder::Cylinder( int a, int b, double r, double h ) 
  : Circle( a, b, r )
{
   setHeight( h );
} 

//////////////////////////////////////////////////////////////////////

void f1( const Shape * ); 
 
void f2( const Shape & );

//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
int main()
{
   cout << fixed << setprecision( 2 );

   Point  point( 7, 11 );  
    
   cout << point.getName() ;   
   point.print();                      
   
   cout << '\n';
   
   Circle  circle( 22, 8, 3.5 ); 
   cout << circle.getName() ;   
   circle.print();                    
   
   cout << '\n';
   
   Cylinder  cylinder( 10, 10, 3.3, 10 );  
   cout << cylinder.getName() ; 
   cylinder.print();                   
   
   cout<<"\n\n===========================================================\n";
   
   // create vector of three base-class obers
   vector< Shape * > sv( 3 );  

   sv[ 0 ] = &point;

   sv[ 1 ] = &circle;

   sv[ 2 ] = &cylinder;

   f1( sv[ 2 ] );

   
   cout<<"\n===========================================================\n";

   f2( *sv[ 0 ] );

   getch();
} 
//////////////////////////////////////////////////////////////////////
// make virtual function calls off a base-class ober
// using dynamic binding
void f1( const Shape *p )
{
   cout << p->getName() ;

   p->print();

   cout << "\narea = "   << p->getArea();
   cout << "\nvolume = " << p->getVolume() << "\n\n";
} 
//////////////////////////////////////////////////////////////////////
// make virtual function calls off a base-class reference
// using dynamic binding
void f2( const Shape &R )
{
   cout << R.getName() ;

   R.print();

   cout << "\narea = "   << R.getArea();
   cout << "\nvolume = " << R.getVolume() << "\n\n";
} 
