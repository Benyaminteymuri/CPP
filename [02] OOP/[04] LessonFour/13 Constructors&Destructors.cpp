//CONSTRUCTORS AND DESTRUCTORS IN INHERITANCE
#include <iomanip>
#include <iostream> 
#include <conio.h> 

using std::cout;
using std::endl;

/////////////////////////////////////////////////////////////
class B{
	public:
			B()		{cout<<"constructor B"<<endl;}
			~B()	{cout<<"destructor B"<<endl;}
};
/////////////////////////////////////////////////////////////
class D1 : public B
{
	public :
			D1( )  {cout<<"construcor D1"<<endl;}
			~D1( ) {cout<<"destructor D1"<<endl;}
}; 
/////////////////////////////////////////////////////////////
class D2 : public D1
{
	public :
			D2( )  {cout<<"construcor D2"<<endl;}
			~D2( ) {cout<<"destructor D2"<<endl;}
}; 
/////////////////////////////////////////////////////////////
int main()
{ 
	D2 ob ;

	cout<<endl<<endl;
}
