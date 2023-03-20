// pointer to a class.
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 
///////////////////////////////////////
class List
{
	private :
		int x;  
		int y; 
		
	public:
		void set ( ) 
		{
			int a,b;
			cout << "Enter a : "; 
			cin >>a ;
			x = a;
			
			cout <<"Enter b : " ; 
			cin >> b ;
			y = b;
		}
		
		void show ()
			{cout<<x<<endl<<y;}
}; 
///////////////////////////////////////
int main()
{
	List  ob;
	
	List *p; 		   

	p = & ob;           
	
	p->set();       
	
	(*p).show();  // p->show();
	
	getch();
}

