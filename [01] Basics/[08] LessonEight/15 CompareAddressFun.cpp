// Compare address
#include <iostream>
#include <conio.h>
using namespace std;

struct s {
  int y;
  int x;
}a[5];

int main()
{
  cout<<boolalpha;
  
  cout << (&a[0]   == a)      << '\n';    // true
  
  cout << (&a[0]   < &a[2])   << '\n';    // true
    
  cout << (&a[5]  > &a[4])   << '\n';     // true
  
  cout << (&a[0].x < &a[0].y) << '\n';    // false
  
  getch();
}
