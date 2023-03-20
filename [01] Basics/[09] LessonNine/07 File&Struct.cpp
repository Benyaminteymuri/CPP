// read , write
#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>

using namespace std;

struct student { 
	char  name[10]; 
	int   id; 
};

main() 
{
	student a[3] ={ {"Ali ",18} , {"Taha",19} , {"Sara",20} };
    student b[3];
    
	ofstream f1( "x" , ios::binary );
	for( int i = 0 ; i <=2 ; ++i)
        f1.write( (char *)& a[i] , sizeof(student)) ;
	
    f1.close();
    
    
	cout<<"\n output: \n\n";
	
	ifstream f2( "x" , ios::binary );
    for( int i = 0 ; i <=2 ; ++i)
    {
        f2.read( (char*)& b[i] , sizeof(student)) ;
	    cout << b[i].name << setw(5) << b[i].id << endl;    
	}
	f2.close();
		
	getch();
}
