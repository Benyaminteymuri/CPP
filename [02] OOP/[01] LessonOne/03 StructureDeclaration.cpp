// declaration of structure in main ().
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 
/////////////////////////////
int main ()
{
	struct Employee
	{ 
		char Name [30];
		int  Age;
		int  Pay ;
	};
	
	Employee E1 = {"Ali" , 30 , 20000};
	
	cout<<E1.Name;

	getch();
}  

