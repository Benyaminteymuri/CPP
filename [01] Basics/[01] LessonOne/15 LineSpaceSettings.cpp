#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int x = 5;
  cout.width(3);

  // after character
  cout.setf(ios::left);
  cout.fill('-');
  cout << x;

  cout << endl;

  cout.width(8);
  // Defult
  cout.setf(ios::right);
  cout.fill('*');
  cout << "ali";

  getch();
}
