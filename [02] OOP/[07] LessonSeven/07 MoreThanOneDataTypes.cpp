//functions template for more than one data types.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
//////////////////////////////
template <class T , class E> 

E min(T x, E y)
{
	return x<y ? x : y;
}
///////////////////////////////
int main()
{
	int n = 2 ;
	double m = 2.5 ;
	cout << min (n,m)     <<endl;  //2
	
	int  ch1 = 67 ;
	char ch2 = 'A';
	cout << min (ch1,ch2) <<endl;  //A
	
	double D1 = 3.5;
	double D2 = 4.5;
	cout << min ( D1, D2) <<endl; //3.5
	
	getch();
}
