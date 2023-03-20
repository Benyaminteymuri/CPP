#include <iostream>
#include <conio.h>

using namespace std;

main()
{

  for (int i = 100; i >= 40; i -= 3)
    cout << i << '\t';
  cout << i << '\t';

  for (char ch = 'A'; ch <= 'Z'; ch++)
  {
    int x = ch;
    cout << ch << "=" << x << endl;
  }

  for (float f = 0.3; f >= 0.8; f += 0.03)
    cout << f << endl;
  getch();
}
