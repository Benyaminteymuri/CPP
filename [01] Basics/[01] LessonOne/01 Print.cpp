// for cout function
#include <iostream>

// for getch function
#include <conio.h>

using namespace std;

main()
{
	cout << "Hello" << '\t' << "world" << '\n'
		 << "What 's up" << endl
		 << "today" << '\b' << "Ali"
		 << "BOGH" << '\a';

	// for see the output until getting a character
	getch();
}