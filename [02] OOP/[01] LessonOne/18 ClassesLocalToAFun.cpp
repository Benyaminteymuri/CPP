//classes local to a function.
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 
////////////////////////////////  
int f ( ) 
{
	class X 		// class X declared inside the function
	{ 
		private:
			int m ;
		public:
			X (int a )  { m = a;}
			int getm () { return m ;}
	} obx (2) ; 		
	
	
	return ( obx.getm() + 3 );//2+3=5
}
////////////////////////////////////////////////////
main()
{
	cout<< f( );
	
	getch();
}
