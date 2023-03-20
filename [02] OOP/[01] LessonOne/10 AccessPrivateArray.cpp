//how to access private array data member.

#include <iostream> 
#include <cstring>      
#include <conio.h>   
using namespace std; 
///////////////////////////////////////////////////   

class List {
	private : 
		int x[2]; 
	public:
		void Setprice (int [2] );
		
		void Display()
			{
				for (int i = 0; i<2; i++)
					cout<< x[i] <<endl; 
			}
} ; 
///////////////////////////////////////////////////  

void List ::Setprice (int a[2] ) 
{ 
	for ( int j = 0; j< 2; j++)
			x[j] = a [j] ; 
}
///////////////////////////////////////////////////  

int main()
{
	List L; 
	
	int P[2] = {1,2} ;
	
	L.Setprice(P) ; 
	
	L.Display();
	
	getch();

}
