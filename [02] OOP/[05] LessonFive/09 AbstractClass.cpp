//abstract class and pure virtual function.
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;
//////////////////////////////////////////////
class Animal {
	public:
		virtual void sound() =0;
};
//////////////////////////////////////////////
class Dog : public Animal
{ 
	public:
		void sound ( )
			{cout<<"hap hap" <<endl;}
};
//////////////////////////////////////////////
class Cat : public Animal
{
	public:
		void sound (void)
			{cout<< "miu miu" << endl;}
};

//////////////////////////////////////////////
main ()
{
	Dog D ;
	Cat C ;

	D.sound();
	C.sound();
	

getch()	;
}
