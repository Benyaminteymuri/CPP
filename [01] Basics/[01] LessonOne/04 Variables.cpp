#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  // unsigned int 0, 255
  // 2Byet -32768, +32767
  unsigned int a;
  cout << "sizeof(a) " << sizeof(a) << endl;
  a = 56;

  // 4Byte -2*10E9,+2*10E9
  int b;
  cout << "sizeof(b) " << sizeof(b) << endl;

  // 4Byte 10E-38,10.E+38
  float f = 5.3;
  cout << "sizeof(f) " << sizeof(f) << endl;

  // 8Byte
  double d = 25.18;
  cout << "sizeof(d) " << sizeof(d) << endl;

  char ch = 'A';
  // 1Byte

  // -128, +127
  unsigned CH = 'B';
  // 0, 255
  // a=97, A=65
  cout << ch << '\t' << ch + 1 << endl;
  cout << "sizeof(ch) " << sizeof(ch) << endl;
  cout << "sizeof(CH) " << sizeof(CH) << endl;

  getch();
}
