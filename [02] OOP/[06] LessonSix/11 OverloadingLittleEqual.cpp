//overloading <<,>>
#include <iostream>
#include <iomanip>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

using std::ostream;
using std::istream;
///////////////////////////

class C {
	private:
		int x ; 
		int y ; 

	friend istream & operator >> ( istream & , C  & ) ;

	friend ostream & operator << ( ostream & , C  & ) ;
}; 
//////////////////////////////////////////////////////////
istream &operator >> ( istream &t, C  &n )
{
   t >> n.x; 
   t >> n.y;
   
   return t;      		
} 
//////////////////////////////////////////////////////////
ostream & operator << (ostream &k , C &L )
{
	k << L.x;
	k << L.y;
	return (k);
}

//////////////////////////////////////////////////////////
int main()
{
	C ob ;
	
	cin >> ob;
	
	cout<<"\n-----------\n";
	
	cout<< ob;
	
	getch();
}
