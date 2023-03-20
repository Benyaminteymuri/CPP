//overloading of template functions with parameters of single type.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
//////////////////////////////////////////////////
template <class T>
T Product (T x, T y)
{
	return x*y;
}
///////////////////////////////////
template <class T>
T Product ( T x, T y, T z)
{
	return x*y*z;
}
///////////////////////
int main ()
{ 
	int a (2), b(3), c(4);
	
	cout << Product ( a,b,c) << endl; //24
	
	cout << Product ( a,c)   << endl;  //8
	
	double A(2.0), B(5.5), C(1.5);
	cout << Product ( A,B )  << endl;  //11
	
	
	
	getch();
}
