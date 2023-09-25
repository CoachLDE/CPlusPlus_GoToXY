/************************************************************************************************	
	Name: CoachLDE
	Date: 09.19.2023
	Purpose: This is the function Gotoxy().  A function used to position the cursor at specific
			 coordinates in the console.
*************************************************************************************************/

#include <iostream>		//Include all of the functions in the input/output
#include <Windows.h>	//Include all functions in the Windows API

using namespace std;

void GoToXY(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
	GoToXY(5, 10);
	cout << "CoachLDE" << endl;

	return 0;
}

