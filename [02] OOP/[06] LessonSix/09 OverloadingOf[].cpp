//overloading of [ ] operator.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
///////////////////////////

class List {
	private:
		int x[3] ;  

	public :
		void set (int a[3] )
		{
			for ( int j = 0; j< 3; j++)
				x[j] = a[j] ; 
		}
		
		int operator [] (int k)
		{ 
			if (k <0 || k >= 3)	{ cout << "out of bound";exit (0);}
			return x[k];
		}
		

}; 
////////////////////////////////////////////////////////
int main()
{
	List ob ;
	
	int a[3] = {10, 11, 12};
	
	ob.set (a);
	
	cout << ob[0] << endl;   //10
	cout << ob[1] << endl;   //11
	cout << ob[2] << endl;   //12
	cout << ob[3];    //out of  bound
	
getch();
}
