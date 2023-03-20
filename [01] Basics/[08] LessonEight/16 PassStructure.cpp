//Pass structure 
#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

#define Length 2

struct Employee {
  char  name [50];
  int   id;
} e [Length];


void f (Employee e);

int main ()
{
  char b[50];  //buffer

  for (int i=0; i<Length; i++)
  {
    cout << "Enter name: ";
    cin.getline (e[i].name,50);
    
    cout << "Enter id: ";
    cin.getline (b,50);
    e[i].id = atoi (b);
  }
  
  cout << "\nYou have entered these employees:\n";
  
  for (int n=0; n<Length; n++)
          f (e[n]);
          
  getch();
}


void  f (Employee  t)
{
  cout << t.name;
  cout << t.id <<"  " <<endl;
}
