// pointer to struct
#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main()
{
     	int i,temp;
       float max;
       
       struct student
       {
           int    num;
           float  score;
       };
       
       struct student stu[3];
             
       for(i=0;i<=2;i++)
         cin >> stu[i].num >> stu[i].score;

       max=stu[0].score;
	                  
       for(i=1;i<=2;i++)
	   {
         if(stu[i].score > max);
               {
                  max = stu[i].score;
			      temp = i;
               }
      }

       struct student *p;    
       p = stu + temp;
       
       cout<<"maxmum score:"<< p->num;
       
	   getch();
}
