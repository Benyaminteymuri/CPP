#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main()
{

  // Power Fun
  cout << pow(2, 3) << endl;
  cout << pow(2, -2) << endl;

  cout << endl
       << endl;

  // Reminder Fun
  cout << fmod(6, 4) << endl;
  cout << fmod(-20, 7) << endl;

  cout << endl
       << endl;

  // ABS Fun
  cout << abs(-2) << endl;
  cout << fabs(-3.5) << endl;

  cout << endl
       << endl;

  // Floor and ceil Fun
  cout << floor(3.1) << endl;
  cout << ceil(3.1) << endl;

  cout << endl
       << endl;

  // LOG Fun
  cout << log10(100) << endl;
  cout << log(2.7) << endl;

  // Lower & Upper Fun
  cout << tolower('A') << endl;
  cout << toupper('a') << endl;

  cout << endl
       << endl;

  // Checked lower & upper Fun
  cout << islower('B') << endl;
  cout << isupper('B') << endl;

  cout << endl
       << endl;

  cout << int('a') << endl;
  cout << char(97) << endl;

  getch();
}
