// structures may be assigned.
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 
///////////////////////////////////////////////
struct Employee
{ 
	char Name [30];
	int Age;
	int Pay ;
}; 
/////////////////////////////////////////////////
int main ()
{ 
	Employee E1 = {" Ali" , 20 , 20000};
	Employee E2 = { "sara", 30 , 30000};
		
	E1 = E2; 		// assignment of structure
	
	cout << "Name : " << E1.Name <<endl;
	cout << "Age  : " << E1.Age  <<endl;
	cout << "Pay  : " << E1.Pay  <<endl;
	
	getch();
}

