//pointer to a class 
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 
////////////////////////////////////////////////////
class k{
	private :
		int x,y;
		
	public:
		void f (int a, int b)
			{x = a, y = b;}
		
		void s()
			{ cout<< x + y;	}
}; 
//////////////////////////////////////////
int main()
{ 
	k ob;
	
	k *p; 				
	
	p = & ob; 				
	
	p -> f(1,2); 
	
	p -> s();
	
	getch();
}
