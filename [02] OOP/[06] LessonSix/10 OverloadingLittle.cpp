//overloading <<
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
using std::ostream;
///////////////////////////

class C {
	private:
		int x ; 
		int  y; 

	public :
		 C (int a,int b )
			{x=a;y=b;}
		
	friend ostream & operator << ( ostream & , C & ) ;
}; 
//////////////////////////////////////////////////////////
ostream & operator << (ostream &k , C &L )
{
	k << L.x ;
	k << L.y;
	
	return (k) ;
}
//////////////////////////////////////////////////////////
int main()
{
	C ob(2,5) ;
	
	cout<< ob ;
	
	getch();
}
