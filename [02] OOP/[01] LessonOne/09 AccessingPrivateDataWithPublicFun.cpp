//accessing private data with public function.
#include <iostream> 
#include <cstring>      
#include <conio.h>   
using namespace std; 
///////////////////////////////////////////////////  
  
class Rect {
	private :
		int x ,y;
	public:
		void setsides ( int L, int W){ x = L, y = W;}
	
		int Area( ) {return x*y;} 
	
		void Dimension (){cout <<"Length = "<< x <<",\tWidth = "<<y << endl; }
}; 

///////////////////////////////////////////////////  

int main()
{
	Rect R;
	
	R.setsides (2,5) ; 
	
	cout << "Area = "<< R.Area()<<endl;
	
	R.Dimension (); 
	
	getch();

}







