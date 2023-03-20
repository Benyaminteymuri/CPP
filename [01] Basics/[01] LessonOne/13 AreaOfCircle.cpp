#define PI 3.14

#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int r;
  float x;

  cout << "Enter the radius:";
  cin >> r;

  x = PI * r * r;
  cout << "area = " << x;

  getch();
}
