//Accessing the private data members from address of object
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 
//////////////////////////////////
class List{
	private :
		int x, y;
		
	public:
		int z ;
		List (int a, int b ) 
			{x = a, y = b;} 
}; 
//////////////////////////////////
int main()
{
	List ob( 1, 2); 
	
	ob.z = 3;
	
	int *p ;
	
	p = (int*)& ob ;
	
	cout << *p <<"-------" << p  << endl;
	
	cout<<endl;
	
	p++;
	cout << *p <<"-------" << p  << endl;

	cout<<endl;
	
	p++;
	cout << *p <<"-------" << p  << endl;
	
	getch();
}

