//definition of pointers to data members and objects of a class.
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 
////////////////////////////////
class Rect {
	private:
		int x, y; 
		friend int Area(Rect a); 
		
	public:
		Rect (int L,int W)
			{ x = L,y = W;} 
			
		friend double cost(Rect a, double); 
}; 
///////////////////////////////////////
int Area (Rect ob) 
{ 
	int Rect :: *px;
	px = &Rect :: x; 
	
	int Rect :: *py;
	py = &Rect :: y; 
	
	return ob.*px * ob.*py ;
};
/////////////////////////////////////
double cost(Rect ob , double m)
	{return ob. x * ob. y * m ;}
/////////////////////////////////////
int main()
{ 
	Rect R1(2,3) ;
	
	cout << Area (R1) <<"\n";  //2*3=6
	
	cout << cost (R1,4.5) ;   //2*3*4.5=27
	
	getch();
}

