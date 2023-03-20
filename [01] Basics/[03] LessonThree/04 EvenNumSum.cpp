#include <iostream>
#include <conio.h>

using namespace std;

main()
{
  // 10+12+14+...+98=?

  int sum = 0;
  int i;
  int n;

  cout << "enter n:";
  cin >> n;

  for (i = 10; i <= n; i++)
    if (i % 2 == 0)
      sum += i;

  cout << sum;

  getch();
}
