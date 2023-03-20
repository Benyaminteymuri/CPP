// call by value

#include <iostream>
#include <conio.h>

using namespace std;

void f(int);

main()
{
   int x = 2;
   f(x);
   cout << x;

   getch();
}

void f(int a)
{
   a = a + 1;
}

// call by reference

void f(int &);

main()
{
   int x = 2;
   f(x);
   cout << x;

   getch();
}

void f(int &a)
{
   a = a + 1;
}