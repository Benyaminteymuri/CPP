//  pointer to struct
#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

struct st
{
       char  name[20];
       float score;
};

int main()
{
       struct st  a[3];
	   struct st  *p;  

       p=a;

       for(int i=0 ; p <= a+2 ; p++ , i++)
       {
               cout<<"Enter all data of student :["<<i<<"]\n";
               cin >> a[i].name;
               cin >> p->score;
       }
       
	   cout<<"record name score"<<"\n";
       
	   p=a;
	   for(; p<=a+2 ; p++)
            cout << p->name << "  " << p->score <<"\n";
    
     getch();
}
