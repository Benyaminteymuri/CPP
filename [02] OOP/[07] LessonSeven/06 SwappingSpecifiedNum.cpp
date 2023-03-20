//a function template for swapping a specified number of elements of two arrays.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

//////////////////////////////////////////////////////////
template <class genric> 
void Swap ( genric x[ ], genric y[ ],int m )
{
	genric temp ; 
	for (int i = 0; i<m;i++)
	{
		temp = x[i];
		x[i] = y[i];
		y[i] = temp ; 
	}
} 
///////////////////////////////////////////////
main()
{ 
	int  K[3] = {1 , 2 , 3};
	int  M[3] = {4 , 5 , 6};
	
	Swap ( K , M ,1 );
	
	for ( int j = 0; j <3; j++)
		cout <<K[j]<<"\t"<<M[j]<<endl;
	
	cout<<"------------------"<<endl;
	
	char Ch[3 ] = { 'A', 'B', 'C' };
	char Kh[3 ] = { 'D', 'E', 'F'};
	Swap ( Ch, Kh,2 ) ;
	
	for ( int j = 0; j <3; j++)
		cout <<Ch[j]<<"\t"<<Kh[j]<<endl;
		
	getch();
}
