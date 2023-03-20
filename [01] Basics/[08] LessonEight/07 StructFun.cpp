//struct
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string.h>
using namespace std;

/*
int main()
{
	char   name[20] = "Ali shirafkan";
	int    grade[3] = { 20, 17, 18};

	cout <<"name  : "  << name<<endl;
	
	cout<<"grade : ";
	for(int k=0; k<=2; k++)
	   cout << grade[k] <<"  ";
	   
  getch();
}
*/

struct student{
   char  name[20] ;
   int   grade[3] ;
};

int main()
{
	struct student s;
	
	strcpy(s.name ,"Ali shirafkan");
	
	s.grade[0]=20;
    s.grade[1]=17;
    s.grade[2]=18;
    
	cout <<"name  : "  << s.name<<endl;
	
	cout<<"grade : ";
	for(int k=0; k<=2; k++)
	   cout << s.grade[k] <<"  ";
	
  getch();
}


