//definition of a pointer to member function of class.
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 
/////////////////////////////////////////
class Rect {
		int x ,y; 
		
	public:
		void f ( int L,int W )
			{ x = L ,y = W ;}
			
		int Area( ) 
			{return x*y;}
}; 
/////////////////////////////////////
int main()
{ 
	void (Rect:: *p1)(int,int) ;
	
	p1= & Rect :: f;
	
	Rect R1;
	
	(R1.*p1) (2,3);	
	
	cout << R1.Area(); //2*3=6
	
	cout<<endl;
	///////////////////////
	Rect R2;
	
	Rect *p2;
	
	p2 = &R2; 
				
	(p2 ->*p1)(4,5); 
		
	cout << R2.Area(); //4*5=20
	
	
	getch();
}
