#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int a = 6; // 110
  int b = 4; // 100

  // OR
  int c = a | b;
  cout << c << endl;

  // AND
  int c = a & b;
  cout << c << endl;

  // Rational operator
  int c = a && b;
  cout << c << endl;

  // Not
  int c = ~a;
  cout << c << endl;

  // XOR
  int c = a ^ b;
  cout << c << endl;

  int x, y = 8;

  // Shift to left (multiply with 2)
  y = x << 1;
  cout << y << endl;

  // Shift to right (divided by 2)
  int z;
  z = x >> 1;
  cout << z << endl;

  getch();
}
