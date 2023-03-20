// function template.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

///////////////////////////////////////////////////////////////////
template <class T > 

T Area (T x, T y ) 
{
  return x*y ; 
} 
//////////////////////////////////////////////////////////////////
int main()
{
	int     n = 2  , m = 3;
	cout<< Area<int>(n, m) <<endl;
	
	double  j = 4.5 , k = 5.1 ;
	cout<< Area <double> (j,k); 
	
	getch();
}
