//friend function to a class.
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 
/////////////////////////////////////////////
class Rect {
	private:
		 int x,y; 
		 friend int Area( Rect a);	
									 	     
	public:
		Rect (int L, int W) { x = L,y = W;} 	 
}; 
/////////////////////////////////////////////

int Area (Rect b)     
{ 
   return b.x*b.y;
}      

/////////////////////
int main()
{
	Rect ob(2,3); 
	
	cout << Area ( ob ) ;//6
	
	getch();
} 

