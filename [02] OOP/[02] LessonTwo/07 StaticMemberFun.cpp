//static member function of a class.
#include <iostream> 
#include <cstring>      
#include <conio.h>
using namespace std; 
////////////////////////////
class Cuboid {
	private:
		static int x , y; 
		int z;
		
	public:
		Cuboid(int H):z(H) 
			{} 
		
		static int f ()
			{ return x*y;} 
			
		int volume( );
}; 
////////////////////////////
int Cuboid :: x = 4; 
int Cuboid :: y = 5; 
////////////////////////////
int Cuboid::volume() 
	{return x*y*z ;}
////////////////////////////
int main()
{
    cout << Cuboid::f()<<endl;		//4*5=20

    Cuboid C1(2);//z=2
    
	cout << C1.volume() <<"\n";//4*5*2=40

    Cuboid C2(3) ;//z=3
    
	cout << C2.volume() ;//4*5*3=60

	getch();
}

