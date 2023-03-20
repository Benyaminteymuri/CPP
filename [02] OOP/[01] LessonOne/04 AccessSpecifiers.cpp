// access specifiers in C++ structures like in classes.
#include <iostream> 
#include <cstring>  
#include <conio.h>    
using namespace std; 
//////////////////////////////////////////////////////
struct Employee
{
	private :
		int Ecode ,Pay ;
	public:
		Employee ( int E,int P ) { Ecode =E , Pay = P ;}
		int getpay () {return Pay;} 
		int getcode() {return Ecode;}
};
/////////////////////////////////////////////////////////
int main ()
{
	Employee E1 (1, 10000);
	Employee E2 (2, 20000);
	
	cout<< E1.getcode ()<<endl;//1
	cout<< E2.getpay();//20000
	
	getch();
} 

