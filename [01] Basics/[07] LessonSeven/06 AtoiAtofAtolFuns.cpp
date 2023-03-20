// String     atoi  atof   atol
#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib>  // atoi prototype
using namespace std;

main()
{
  char s1[]="12abcd";
  cout<< atoi(s1)/2 <<endl; 
 
  char s2[]="45.7cdfdf";
  cout<< atof(s2)/2 <<endl;
  
  char s3[]="123456789";
  cout<< atol(s3)/2 <<endl;
  
  getch();
}







