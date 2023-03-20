#include <iostream>
#include <conio.h>

using namespace std;

main()
{
  for (int i = 1, int j = 3; i <= j; i++, j--)
  {
    cout << i << '*' << j << "=" << i * j << endl;
    cout << i++ << endl;
  }
  int x, y;
  x = 1, y = 9;

  for (; x != y; x++, y--)

    cout << x << " " << y << endl;

  getch();
}
