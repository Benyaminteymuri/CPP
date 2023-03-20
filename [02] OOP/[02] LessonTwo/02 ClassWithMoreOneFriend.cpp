//class with more than one friend functions.
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 
///////////////////////////////////////////////////////
class Rect {
		friend int Area(Rect a); 
		int x,y; 
		
	public:
		Rect (int L,int W) 
			{ x = L, y = W;} 
		
		friend double f( Rect a, double);
}; 
///////////////////////////////////////////////////////
int Area ( Rect b) 
	{return b.x*b.y;}
///////////////////////////////////////////////////////
double f( Rect b, double s) 
	{return b.x*b.y * s;}
///////////////////////////////////////////////////////
int main()
{ 
	Rect ob(2,3); 
	
	cout << Area (ob) <<"\n"; //6
	
	double A = 4.5; 
	cout << f (ob,A) ;  //2*3*4.5=27
	
	getch();
}
