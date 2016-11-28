#include <windows.h>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>


using namespace std;


class positinNcolor{
	void gotoxy(int x, int y);
	void setcolor(int color, int bgcolor);
};

void gotoxy(int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void setcolor(int color, int bgcolor) 
{
    color &= 0xf;
    bgcolor &= 0xf;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}

class number{
	void printnum();
};

void printnum(){
	
	vector<int>name;
	name.reserve(8);
	srand((unsigned int)time(NULL));
	
	int j;
	
		for(int i=0; i<10; i++){
			name[i] = rand() % 10+1;
		//	if(name[i]=name[10])
		//		name[i] = j;
		//	else
		//		continue;
		}
		
		for(int i=0; i<10; i++){
		
			if (i == 5)	{
				setcolor(12 ,0);
				cout << name[i] << endl;
				setcolor(15 , 0);
			}
		
		cout << name[i] << endl;
	}
}

int main()
{

	printnum();

	setcolor(10,0);
	
	cout << "done" << endl;
	
	setcolor(15,0);

}
