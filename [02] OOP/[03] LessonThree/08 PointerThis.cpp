// pointer this.

#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std;
//////////////////////////////////////////////////// 
class Cuboid {
	private:
		int x,y,z; 
		
	public:
		Cuboid(int L,int W,int H )
		{
			this->x = L;
			this->y = W;
			this->z = H;
		}
	
		int volume( )	{return x*y*z ;}
		
		void f1()
			{cout <<"x = "<<this->x <<", y = " <<this->y << ", z = "<<this->z <<endl;}
		
		void f2()
			{cout << this <<endl; } 
}; 

/////////////////////////////////////////////////
int main()
{ 
	Cuboid ob(1,2,3) ;
	
	ob.f1();
	
	ob.f2();          
	
	cout << &ob <<endl;   
	  
	cout << ob.volume() <<"\n";
		
	getch();
}
/*
When an object is created, the compiler creates this pointer which keeps 
the address of the object. 
Pointer this is not a part of object but object has access to it or we can 
say an object has access to its own address. 
When the object calls a member function of the class, this pointer becomes implicit
argument of the function and the function processes the data of the object.
*/
