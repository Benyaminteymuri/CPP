//function template for finding greater of two numbers.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

//////////////////////////////////
template <class T>
 
T max(T x, T y) 
{
	return x>y ? x : y;
} 
////////////////////////////////////////
int main()
{ 
	int n = 1 , m = 2 ; 
	cout << max <int>(n,m)<<endl;   //2
	
	char ch1 = 'A' , ch2 = 'B'; 
	cout<< max <char>(ch1,ch2)<<endl;  //B
	
	double D1 = 3.5, D2= 4.5;
	cout<< max<double>( D1, D2);  //4.5
	
getch();
}
