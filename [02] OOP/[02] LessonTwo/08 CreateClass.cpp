#include <iostream>
using std::cout;
using std::endl;
/////////////////////////////////////////////////////////////////////
class C {
	private:
	   int  id;
	   char *message;
	   
	public:
	   C( int, char * );  
	   
	   ~C();             
}; 
//////////////////////////////////////////////////////////////////////////
C::C(int n, char *p )
{
   id = n;
   message = p;
   cout <<  id << "-------------------------" << message << endl;
} 
///////////////////////////////////////////////////////////////////////////
C::~C()
{ 
   cout << id << "--------destructor-------"<< message << endl;
} 
///////////////////////////////////////////////////////////////////////////
void create( void )
{
   C fifth( 5, "automatic" );

   static C sixth(6, "static" );

   C seventh(7, "automatic" );

} 
///////////////////////////////////////
C first( 1, "global" );

//////////////////////////////////////////////////////////////////////////////
int main()
{
   C  second( 2, "automatic" );
   
   static C  third( 3, "static " );
   
   create();  
   
   C fourth( 4, "automatic" );
    
 return 0;
} 


