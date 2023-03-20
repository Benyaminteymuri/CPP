//function definition outside the class.
#include <iostream> 
#include <cstring>      
#include <conio.h>   
using namespace std;  
//////////////////////////////////
class M 
{ 
 public: 
        void show();
};
//////////////////////////////////

void M::show () 
   {
      cout<<"Welcome";
   }
//////////////////////////////////

int main() { 
      M x;
	  x.show(); 
	  
      getch();
} 


