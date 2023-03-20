//Pass structure to a function as a pointer 
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string.h>

using namespace std;

struct student
{
       char  name[20];
       int   id;
};

void f(struct student *);

int main()
{
       struct student s;
       
       s.id=12345;
       strcpy(s.name,"ali");
       
	   f(&s);
	   
	   getch();
}

void  f(struct student *p)
{
       cout << p->id   <<"\n";
	   cout << p->name <<"\n";
       cout <<" ";
}
