#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include<time.h>
#include <windows.h>

using namespace std;

class Card{
	public:	
		int cardNum;	// 카드의 숫자를 가지기 위해서 가지는 숫자 
		int cardShape;	//카드의 모양을 위해서 가지는 숫자 
		int pinInfo;	//카드를 볼링핀 번호와 매칭하기 위한 숫자 
		Card();			
		Card(int n);
	
		int getCardNum();		//카드의 숫자를 가지는 함수 
		int getShape();			//카드의 모양을 가지는 함수 
		int getPinInfo();		//카드의 볼링핀 번호를 가지는 함수 

};

  Card::Card() {
	cardNum = 1;					//카드의 생성자 
	cout << "  카드생성" << endl; 	//카드 생성확인. 
}

  Card::Card(int n){
	cardNum = n;													//카드 생성 
	cout << "카드숫자 : " << cardNum << "  카드생성" << endl; 
}

  int Card::getCardNum(){			//카드의 번호를 1~10까지 랜덤으로 리턴함. 
	srand(time(NULL));
	return rand() % 10+1;

  }
  int Card::getShape(){				//카드의 모양을 가지기위해서 1~4까지의 수를 랜덤으로 리턴. 
  	srand(time(NULL));
	return rand() % 4+1;
  }

  int Card::getPinInfo(){		//카드를 볼링핀 10개와 랜덤으로 매칭하기 위해서 1~10까지 랜덤으로 숫자를 리턴함. 
  	srand(time(NULL));
	return rand() % 10+1;
  }
  


class Pin{
	public:
		int pinNum;				//볼링핀의 번호를 가지기 위해 사용 
		int cardInfo;			//카드의 pinInfo와 매칭을 하기 위해 필요한 숫자 
		Pin();
		Pin(int n);
		
		int getPinNum();		//볼링핀의 번호를 가지는 함수. 
		int getCardInfo();	//카드의 pinInfo와 매칭을 하기위해서 숫자를 가지는 함수. 
};

  Pin::Pin() {
	pinNum = 1;
	cout << "볼링핀 숫자 : " << pinNum << "  pin생성" << endl; 
}

  Pin::Pin(int n){
	pinNum = n;
	cout << "볼링핀 숫자 : " << pinNum << "  pin생성" << endl; 
}

  int Pin::getPinNum(){			//10개의 볼링핀을 숫자를 매기기위해서 1~10까지 숫자를 랜덤으로 리턴함. 
  	srand(time(NULL));
	return rand() % 10+1;
	
  }

  int Pin::getCardInfo(){		//카드의 pinInfo와 매칭시키기 위해서 1~10까지 숫자를 랜덤으로 리턴함. 
  	srand(time(NULL));
	return rand() % 10+1;
  }

class Screen{
	void menuScreen();		//메뉴화면 
	int gameScreen();		//게임시작화면 
	int gameRule();			//게임규칙화면 
	void gameEnd();			//게임을 종료 
	void printCard(int  x, int y);		//카드를 출력하기 위한 함수 
	void setcolor(int color, int bgcolor); 		//색을 바꾸기 위한 함수 
};

void setcolor(int color, int bgcolor) {
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
  
  int gameScreen(){
  	int gameInput;
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
	
	cin >> gameInput;
	
	switch(gameInput){
		case 1:
			system("cls");
			return 1;
		default :
			system("cls");	
			return 0;
	}
	
  }
  
  void
   gameRule(){
  	
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
  	
  	cout << "1) 다음" << endl;
  	
  	cin >> ruleInput;
  	
  		switch(ruleInput){
  			case 1:
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
  				cout << "1) 다음" << endl;
				cout << "2) 메뉴로 돌아가기" << endl; 
				  
				  	break;
			  }

  	cin >> ruleInput;
  	
  	switch(ruleInput){
  			case 1:
  				system("cls");	//화면을 지움 
  	
  				cout << "Strike : 첫 차례에 정답 : 10점" << endl;
  				cout << "Spare : 두 차례에 걸쳐 정답 : 8점" << endl;
 		 		cout << "Gutter : 두 차례 모두 정답 X : 4점(특수카드 획득)" << endl << endl;
 		 		cout << "※ 특수카드의 효과는 여러가지가 있고 다음 라운드에서 자동 적용된다." << endl << endl;
				cout << "※ 특수카드는 Gutter에 기죽지 말라고 증정하는 것이며 항상 좋은 효과만 있는 것은 아니기에 정답자에게만 부당하지 않음. 살제로 정답자에게 득이 되는 효과도 있음." << endl;
				cout << endl << "1) 다음" << endl;
				cout << "2) 메뉴로 돌아가기" << endl; 
				
				break;
			
								  		
	  }
  }

  void gameEnd(){
  	system("cls");
	exit(1);
  }
  
void printCard(int x, int y){

  	
  	switch (y){
  		case 1:
  			cout << "♠";
  			break;
		case 2:
			cout << "◆";
			break;
		case 3:
			cout << "♠";
		 	break;
		case 4:
			cout << "♥";
			break;
	  }
	
	cout << x << endl;
	  
  }
  
void playGround(){
	Card cardAry[10];

	int i;
	
	for(i = 0; i < 10; i++){
		cardAry[i].getCardNum();
		cardAry[i].getShape();
		
		cout << "숫자" << cardAry[i].getCardNum() << "모양" <<cardAry[i].getShape() << endl;
		
		printCard(cardAry[i].getCardNum(),cardAry[i].getShape() );
	}
}

int main(){
	
	
	int decision = 0;		//입력받은 숫자에 의해서 함수를 출력하기 위한 변수. 
  	setcolor(15 ,0);
  	int i;					//반복문을 돌리기 위한 변수선언. 
  	
  	for(i=0; i<10; i++){
	  
	           
  		menuScreen();
  	
  		cin >> decision;	//해당숫자를 입력받음. 
  	
  		switch(decision){	//입력받은 숫자에 의해서 함수들이 호출됨. 
  			case 1:
  				gameScreen();
  				decision = gameScreen();
  				break;
  			case 2:
  				gameRule();
  				break;
  			case 3:
  				gameEnd();
  				break;
		  }
		}

	switch(decision){
		case 1:
			cout << "good" << endl;
			
		}
	
	
	
	cout << "test" << endl;
	
}
