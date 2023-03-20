//pointers.
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std;
///////////////////////////////////////// 
class List{
	public:
		int a ;
		
	}; 
////////////////////////////////////////	
int  main()
{
	List ob;
	
	ob. a = 3;
	
	int *p ; 
					
	p = & ob.a; 
	
	cout<< *p << endl; //3
	
	cout << p ;

	getch();
}

