#include <iostream>
#include <conio.h>

using namespace std;

main()
{
   int i, j, n;
   cout << "enter n:" << endl;
   cin >> n;

   for (i = 1; i <= n; i++)
   {
      for (j = 1; j <= i; j++)
         cout << j << "  ";
      cout << endl;
   }

   for (i = n; i >= 1; i--)
   {
      for (j = 1; j <= i; j++)
         cout << j << "  ";
      cout << endl;
   }

   getch();
}

/*
1
1   2
1   2    3
1   2    3    4
1   2    3    4    5
1   2    3    4    5    6
1   2    3    4    5    6    7
*/


/*
1   2    3    4    5    6    7
1   2    3    4    5    6
1   2    3    4    5
1   2    3    4
1   2    3
1   2
1
*/#include <iostream>
#include <conio.h>

using namespace std;

main()
{
   int i, j, n;
   cout << "enter n:" << endl;
   cin >> n;

   for (i = 1; i <= n; i++)
   {
      for (j = 1; j <= i; j++)
         cout << j << "  ";
      cout << endl;
   }

   for (i = n; i >= 1; i--)
   {
      for (j = 1; j <= i; j++)
         cout << j << "  ";
      cout << endl;
   }

   getch();
}

/*
1
1   2
1   2    3
1   2    3    4
1   2    3    4    5
1   2    3    4    5    6
1   2    3    4    5    6    7
*/


/*
1   2    3    4    5    6    7
1   2    3    4    5    6
1   2    3    4    5
1   2    3    4
1   2    3
1   2
1
*/