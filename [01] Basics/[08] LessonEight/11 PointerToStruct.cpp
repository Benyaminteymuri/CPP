// pointer to struct
#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

struct Time
{
   int h,m,s;
};

int main()
{
   Time t1,t2;
  
   t1.h=7;
   t1.m=0;
   t1.s=0;    
   
   t2=t1;  
   t2.h++;    
   cout << t2.h <<endl ;     //8
   
   
   Time  *p;   // pointer to structure
   p = &t2;

   cout << p->h  << endl;    // 8
   
   cout << (*p).h  ;         // 8
   
   
   
   


   getch();
}
