//Overloading (*) using friend function in order to carry out the inner product of two vectors.

#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
///////////////////////////
class T{
	private:
		int x, y ; 
		
	public :
		T (int a, int b) 
			{ x =a ; y = b;}
		
		T () {};
		
		friend int &operator*(const T &, const T & ); 
}; 
/////////////////////////////////////////////////////////////////////////////////////
int & operator* (const T &S, const T &P ) 
{ 
	int k;
	
	k= S.x * P.x + S.y * P.y ;
	
	return k;
}
//////////////////////////////	
int main()
{ 
	T  a ( 1,2);
	T  b ( 4,5);
	
	cout << a * b;   //1*4+2*5=14
	
	getch();
}
