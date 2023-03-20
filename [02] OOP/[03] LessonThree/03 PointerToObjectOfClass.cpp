//definition of a pointer to an object of class
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 
//////////////////////////////
class k{
	private:
		int x,y;
		
	public:
		k (int a,int b) 
			{x = a, y = b;} 
			
		void show ()
			{cout<< x <<"---"<< y<<endl;}
}; 
///////////////////////////////////////////////////
int main()
{ 
	k ob1 (1,2) ;

	k *p;
	
	p= &ob1; 
	
	p -> show();
	
	k ob2 (3,4);
	
	p = & ob2;
	
	(*p).show();
	
	getch();
}

