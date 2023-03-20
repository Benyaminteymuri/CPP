#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int b = 25;
  int c = 5.3;
  
  int f = true;
  int g = false;
  cout << (!g) << '\t' << (f && g) << '\t' << (f || g) << endl; 
  // 1 = True

  cout << (b += 3) << '\t' << (b -= 3) << '\t' << (b *= 3) << endl;

  int h = 8;
  // b=11001, c=00101 -> 69, 5
  cout << (h >> 1) << '\t' << (h << 1) << '\t' << (b | c) << '\t' << (b & c)
       << '\t' << (b && c) << endl;

  getch();
}
