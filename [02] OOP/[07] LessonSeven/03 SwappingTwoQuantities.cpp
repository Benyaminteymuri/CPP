//a function template for swapping two quantities.
#include <iomanip>
#include <iostream> 
#include <conio.h> 
#include <cstring>

using std::cout;
using std::endl;

//////////////////////////////////////////////////////
template <class T> 		
void Swap (T &x , T &y) 	// values passed on by reference
{ 
	T temp;
	temp = x;
	x = y;
	y = temp;
}
//////////////////////////////////////////
 main()
{ 
	int n =1, m=2;
	Swap <int>(n,m);
	cout<<n<<" "<<m<<endl;
	
	char ch1= 'A', ch2 = 'B';
	Swap <char>(ch1,ch2);
	cout<<ch1<<" "<<ch2<<endl;
	
	double a = 3.5 , b = 4.5;
	Swap <double>(a,b);
	cout<<a<<" "<<b;
	
	getch();
}
