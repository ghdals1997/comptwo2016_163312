#include <iostream>
#include <windows.h>


using namespace std;

class Screen{
	void menuScreen();	//메뉴화면 
	void gameScreen();	//게임시작화면 
	int gameRule();	//게임규칙화면 
	void gameEnd();		//게임을 종료 
};

void setcolor(int color, int bgcolor) 
{
    color &= 0xf;
    bgcolor &= 0xf;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}

  void menuScreen(){
  	
  
	cout << "트럼프 볼링" << endl << endl;
	
  	cout << "1. 게임시작" << endl;
  	cout << "2. 게임규칙" << endl;
  	cout << "3. 게임종료" << endl;
  	
  }
  
  void gameScreen(){
  	
  	system("cls");	//화면을 지움 
  	
  	cout << endl;
	cout << endl;
	cout << "         Pin10     Pin09     Pin08     Pin07         " << endl;
	cout << endl;
	cout << endl;
	cout << "              Pin06     Pin05     Pin04              " << endl;
	cout << endl;
	cout << endl;
	cout << "                   Pin03     Pin02                   " << endl;
	cout << endl;
	cout << endl;
	cout << "                        Pin01                        " << endl;
	cout << endl;
	cout << endl;
	
	cout << "(※볼링핀의 위치를 나타낸 숫자 입니다.)" << endl;
	cout << "1. 시작" << endl << "2. 돌아가기" << endl;
	
  }
  
  int gameRule(){
  	
  	int ruleInput;
  	
	system("cls");						//화면을 지움 
  	cout << "게임 규칙" << endl << endl << "(예시)" << endl; 
  	
  		cout << endl;
	cout << endl;
	cout << "          ♥ 10      ◆ 3       ♣ 7       ♥ 5          " << endl;
	cout << endl;
	cout << endl;
	cout << "               ♥ 1       ◆ 3       ♣ 2               " << endl;
	cout << endl;
	cout << endl;
	cout << "                    ♥ 4       ♣ 1                    " << endl;
	cout << endl;
	cout << endl;
	cout << "                         ♥ 10                         " << endl;
	cout << endl;
	cout << endl;
  	
  	cout << "플레이어는 3명이서 플레이 가능하며 10개의 카드가 플레이어의 차례 마다 랜덤으로 구성된다." << endl;
  	
  	cout << "1) 다음" << endl << endl; 
  	
  	cin >> ruleInput;
  	
  	if (ruleInput = 1){
  		system("cls");	//화면을 지움 
  	
	  	cout << endl;
		cout << endl;
		cout << "         Pin10     Pin09     Pin08     Pin07         " << endl;
		cout << endl;
		cout << endl;
		cout << "              Pin06     Pin05     "; 
		setcolor(12 ,0);
		cout << "Pin04              " << endl; 
		setcolor(15 ,0);
		cout << endl;
		cout << endl;
		cout << "                   Pin03     Pin02                   " << endl;
		cout << endl;
		cout << endl;
		cout << "                        Pin01                        " << endl;
		cout << endl;
		cout << endl;
		cout << "플레이어는 무작위로 가리키는 위치에 있는 카드를 총 2차례에 걸쳐 맞추어야 하고, 각 차례마다 5초후 카드가 뒤집히고, 무작위로 위치를 가리킨다. " << endl;

		
	  }else if(ruleInput = 2){
		  	return 1;
	  }
 
  	cin >> ruleInput;
  	
  	if (ruleInput = 1){
  		system("cls");	//화면을 지움 
  	
  		cout << "Strike : 첫 차례에 정답 : 10점" << endl;
  		cout << "Spare : 두 차례에 걸쳐 정답 : 8점" << endl;
  		cout << "Gutter : 두 차례 모두 정답 X : 4점(특수카드 획득)" << endl << endl;
  		cout << "※ 특수카드의 효과는 여러가지가 있고 다음 라운드에서 자동 적용된다." << endl << endl;
		cout << "※ 특수카드는 Gutter에 기죽지 말라고 증정하는 것이며 항상 좋은 효과만 있는 것은 아니기에 정답자에게만 부당하지 않음. 살제로 정답자에게 득이 되는 효과도 있음." << endl;
		
		  		
	  }else if(ruleInput = 2){
	  	return 1;
	  }
  }

  void gameEnd(){
  	system("cls");
	exit(1);
  }
  
  int main(){
  	int decision = 0;
  	setcolor(15 ,0);
  	
  	menuScreen();
  	
  	cin >> decision;	//해당숫자를 입력받음. 
  	
  	switch(decision){	//입력받은 숫자에 의해서 함수들이 호출됨. 
  		case 1:
  			gameScreen();
  			break;
  		case 2:
  			gameRule();
  			break;
  		case 3:
  			gameEnd();
  			break;
	  }
  	
  	
  }
