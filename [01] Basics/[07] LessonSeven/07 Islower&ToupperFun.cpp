// String     islower  toupper
#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib>  
using namespace std;

main()
{
  char  ch;
  
  while(cin.get(ch)) 
  {
  	if(islower(ch))
  	   cout<<toupper(ch);
  	else
  	  cout<<ch;
  }
  
  getch();
}







