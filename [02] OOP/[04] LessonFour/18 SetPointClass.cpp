#include <iomanip>
#include <iostream>  
#include  <conio.h>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
//////////////////////////////
class Point {
	private: 
	   int x;  
	   int y; 
	   
	public:
	   Point( int = 0, int = 0 ); 
	
	   void setX( int );    
	   int  getx() const;    
	   
	   void setY( int );   
	   int  gety() const;    
	   
	   void show() const;  
}; 
//////////////////////////////
Point::Point( int a, int b )  
    : x( a ), y( b )
{ } 
////////////////////////////
void Point::setX( int m )
{
   x = m; 
} 
////////////////////////////
int Point::getx() const
{
   return x;
} 
////////////////////////////
void Point::setY( int k )
{
   y = k; 
} 
////////////////////////////
int Point::gety() const
{
   return y;
}   
//////////////////////////////
void Point::show() const
{
   cout << '[' << getx() << ", " << gety() << ']';
} 


////////////////////////////////////////////////////
class Circle : public Point {
private: 
   double r; 
   
public:
   Circle( int = 0, int = 0, double = 0.0 );  

   void   setr( double );         
   double getr() const;          

   double getd() const;      
   double getc() const;  
   double getArea() const;           

   void show() const;               
}; 
///////////////////////////////////////////////////
Circle::Circle( int a, int b, double r )
   : Point( a, b )  // call base-class constructor
{
   setr( r );
} 

//////////////////////////////
void Circle::setr( double r )
{
   r = ( r < 0.0 ? 0.0 : r );
} 
//////////////////////////////
double Circle::getr() const
{
   return r;
} 
//////////////////////////////
double Circle::getd() const
{
   return 2 * getr();
} 
//////////////////////////////
double Circle::getc() const
{
   return 3.14159 * getd();
} 
/////////////////////////////////////
double Circle::getArea() const
{
   return 3.14159 * getr() * getr();
} 
////////////////////////////////////
void Circle::show() const
{
   cout << "Center = ";
   Point::show();      
   cout << "; r = " << getr();
} 
///////////////////////////////////////////////////////////
int main()
{
   Circle circle( 5, 7, 2.5 ); 

   cout << "X = "   << circle.getx(); 
   cout << "\nY = " << circle.gety();
   cout << "\nr = " << circle.getr();

   circle.setX( 2 );          
   circle.setY( 3 );         
   circle.setr( 4.25 );  
  
   cout << "\n\nThe new :\n";
   
   circle.show();

   cout << fixed << setprecision( 2 );
   cout << endl;
   
   cout << circle.getd() <<endl;
   
   cout << circle.getc() << endl;
   
   cout << circle.getArea();

   getch();
} 
