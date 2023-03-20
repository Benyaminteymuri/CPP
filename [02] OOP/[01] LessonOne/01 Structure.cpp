//structure
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 
//////////////////////////////////////////////  
struct Employee 
{ 
	char Name [30];
	int  Age;
	int  Pay ;
}; 
//////////////////////////////////////////////
int main ()
{ 
	Employee E1 = {"Ali"  , 30 , 20000};
	Employee E2 = {"Sara" , 25 , 30000};
		
	cout << "The data of employee E2 is :\n";
	
	cout << "Name : " << E2.Name  <<endl;
	cout << "Age  : " << E2.Age   <<endl;
	cout << "Pay  : " << E2.Pay   <<endl;

	getch();
}
