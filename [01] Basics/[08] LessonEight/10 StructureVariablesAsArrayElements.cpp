//structure variables as array elements 
#include <iostream>
#include <conio.h>
using namespace std;

const int SIZE = 2;  

  struct part{  
     int   modelnumber;              
     float cost;                   
  };  
  
  int main(){  
     int n;  
     part a[SIZE];    // array of structure 
    
     for(n=0; n<SIZE; n++)
	 {  
        cout << endl;  
        cout << "Enter model number: ";  
        cin >> a[n].modelnumber;
        
        cout << "Enter cost: ";  
        cin >> a[n].cost;       
     }  
     
     
     for(n=0; n<SIZE; n++) {  
        cout << " Model "  << a[n].modelnumber;  
        cout << " Cost  "  << a[n].cost << endl;  
     }  
     
	 getch();
  }
