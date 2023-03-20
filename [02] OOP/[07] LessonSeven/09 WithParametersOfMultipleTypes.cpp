//overloaded template functions with parameters of multiple types.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
//////////////////////////////////////////////////////////////
template <class T, class U>
U Product ( T x, U y)
{
	return x*y;
}
//////////////////////////////////////////////////
template <class T, class S, class U>
S Product ( T x, S y, U z)
{
	return x*y*z;
}
////////////////////////////////////////////////////
int main ()
{ 
	int a (2);
	double B(1.5);
	
	cout <<  Product (a,B) << endl;  //3
	
	cout <<  Product ( 'A', 2) << endl;	//130
	
	char Ch('D');
	cout <<  Product (a,B,Ch) << endl;  //204

getch();
}
