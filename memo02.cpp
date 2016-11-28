#include <windows.h>
#include <iostream>
#include <vector>

using namespace std;

/*void gotoxy(int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}*/

void setcolor(int color, int bgcolor) 
{
    color &= 0xf;
    bgcolor &= 0xf;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}

void printnum(){
	
	vector<int>name;
	name.reserve(8);
		for(int i=0; i<10; i++){
			name[i] = rand() % 4+1;
		
			setcolor(10 ,0);
		
		cout << name[i] << endl;
	}
}

int main()
{

	printnum();

	setcolor(15,0);
	
	cout << "done" << endl;

}
