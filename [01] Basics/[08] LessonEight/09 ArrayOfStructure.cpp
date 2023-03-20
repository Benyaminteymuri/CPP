// array of structure

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string.h>
using namespace std;

/*
int main()
{
	char   name[2][20] = {"Ali shirafkan","sara amini"};
	int    grade[2][3] = { { 20, 17, 18},{16, 20, 19}};

	for( int i=0; i < 2; i++ )
	{
		cout <<"\n  name : " << name[i];

		cout << "\n grade : ";
		for( int j = 0; j < 3; j++ )
			cout << setw(4) << grade[i][j];
			
		cout << endl;
	}
  getch();
}
*/


struct student{
   char name[20] ;
   int  grade[3] ;
}s[2];



int main()
{
	strcpy(s[0].name ,"Ali shirafkan");
	strcpy(s[1].name ,"sara amini");
	
    s[0].grade[0]=20;
    s[0].grade[1]=17;
    s[0].grade[2]=18;
    
	s[1].grade[0]=16;
    s[1].grade[1]=20;
    s[1].grade[2]=19;
	
	for( int i=0; i <=1; i++ )
	{
		cout <<"\n  name : " << s[i].name;

		cout << "\n grade : ";
		for( int j = 0; j <=2; j++ )
			cout << setw(4) << s[i].grade[j];
			
		cout << endl;
	}
  getch();
}


