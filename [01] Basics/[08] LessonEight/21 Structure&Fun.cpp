#include <iostream>
#include <conio.h>
using namespace std;

struct a {
 char   Name[10];
 int    id;
 };

void  f (a  );
void  g (a *);
void  h (a &);

int main()
{
 a x[8];
  
 x[0].id = 1;

 f( x[0]);
 cout << x[0].id << "\n";   // 1

 g(&x[0]);
 cout << x[0].id << "\n";   // 4

 h( x[0]);
 cout << x[0].id << "\n";   // 7
 
 getch();
}
  
void  f(a  t) { t.id  += 3;  }

void  g(a *p) { p->id += 3;  }

void  h(a &r) { r.id  += 3;  }
