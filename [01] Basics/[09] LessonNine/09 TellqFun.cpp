// tellq ( )   , ios ::ate

#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;  

main()
{
	int  a[4]={5,7,8,1};
	
    ofstream f1( "x" , ios::binary );
    f1.write( (char *)a, sizeof(a)) ;
    f1.close();
   
   
	ifstream f2 ("x", ios::binary|ios::ate);
    cout<< f2.tellg();  // 16
    
    f2.close();
    
    getch();
    
}
  
