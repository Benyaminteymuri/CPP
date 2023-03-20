//FUNCTION TEMPLATE WITH ARRAY AS A PARAMETER
//a function template for output of an array.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
///////////////////////////////////////////////////////////
template <class T>

void Display(const T*A, unsigned int size)
{ 
	for( int i =0 ; i<size; i++ ) 
		cout<< A[i] <<"  ";
	cout<<endl;
}
///////////////////////////
int main ()
{
	Display ("ali", 3);
	
	Display ("taha" ,4);
	
getch();
}
