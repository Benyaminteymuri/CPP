//a function template for displaying arrays and strings.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
///////////////////////////////////
template <class T>
void Display(T A[],unsigned int size)
{ 
	for ( int i =0 ; i<size;i++ )
		cout<< A[i] <<"   ";
	
	cout<<endl<<endl;
}
///////////////////////////////////
int main ()
{
	int a[5] = {1,2, 3,4,5};
	Display( a , 5); 
	
	double b[2] = { 4.5, 5.6};
	Display (b , 2);
	
	char ch [4] = { 'A', 'B', 'C', 'D'};
	Display (ch,4);
	
	
	char* S[3] ={"ali" , "reza" , "taha" };
	Display ( S, 3);
	
	getch();
}
