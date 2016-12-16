#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include<time.h>
#include <windows.h>

using namespace std;

class Card{
	private:	
		int cardNum;	// ī���� ���ڸ� ������ ���ؼ� ������ ���� 
		int cardShape;	//ī���� ����� ���ؼ� ������ ���� 
		int pinInfo;	//ī�带 ������ ��ȣ�� ��Ī�ϱ� ���� ���� 
	
	public:	
		Card();			
		Card(int n);
	
		int getCardNum();		//ī���� ���ڸ� ������ �Լ� 
		int getShape();			//ī���� ����� ������ �Լ� 
		int getPinInfo();		//ī���� ������ ��ȣ�� ������ �Լ� 

};

  Card::Card() {
	cardNum = 1;					//ī���� ������ 
//	cout << "  ī�����" << endl; 	//ī�� ����Ȯ��. 
}

  Card::Card(int n){
	cardNum = n;													//ī�� ���� 
//	cout << "ī����� : " << cardNum << "  ī�����" << endl; 
}

  int Card::getCardNum(){			//ī���� ��ȣ�� 1~10���� �������� ������. 
	srand(time(NULL));
	return rand() % 10+1;

  }
  int Card::getShape(){				//ī���� ����� ���������ؼ� 1~4������ ���� �������� ����. 
  	srand(time(NULL));
	return rand() % 4+1;
  }

  int Card::getPinInfo(){		//ī�带 ������ 10���� �������� ��Ī�ϱ� ���ؼ� 1~10���� �������� ���ڸ� ������. 
  	srand(time(NULL));
	return rand() % 10+1;
  }
  
class Scard{
	private:	
		int scardNum;	// ī���� ���ڸ� ������ ���ؼ� ������ ���� 
		int scardShape;	//ī���� ����� ���ؼ� ������ ���� 
		int gutterInfo;	//gutter ���θ� Ȯ�� �Ҷ� �񱳿� �ʿ��� ����.  
		int scardScore;	//Ư��ī���� ������ �����ϱ� ���� ����. 
		
	public:	
		Scard();			
		Scard(int n);
	
		int getScardNum();		//ī���� ���ڸ� ������ �Լ� 
		int getScardShape();			//ī���� ����� ������ �Լ� 
		int getGutterInfo();		//gutter ���θ� �Ǵ��ϴ� �Լ�. 
		int getScardScore();		//Ư��ī���� ������ ������ �Լ�. 

};

  Scard::Scard() {
	scardNum = 1;					//ī���� ������ 
	cout << "  ī�����" << endl; 	//ī�� ����Ȯ��. 
}

  Scard::Scard(int n){
	scardNum = n;													//ī�� ���� 
	cout << "ī����� : " << scardNum << "  ī�����" << endl; 
}

  int Scard::getScardNum(){			//ī���� ��ȣ�� 1~10���� �������� ������. 
	srand(time(NULL));
	return rand() % 3+11;

  }
  int Scard::getScardShape(){				//ī���� ����� ���������ؼ� 1~4������ ���� �������� ����. 
  	srand(time(NULL));
	return rand() % 4+1;
  }

  int Scard::getGutterInfo(){		//ī�带 ������ 10���� �������� ��Ī�ϱ� ���ؼ� 1~10���� �������� ���ڸ� ������. 
  	
  	
  }
  
  int Scard::getScardScore(){		//1~12������ ��쿡 �ش��ϴ� Ư��ī�带 ����ϰ� Ư��ī�� ȿ���� �ش��ϴ�  ������ ����. 
  	
  	switch(scardNum){
  		case 1:
  			scardScore = scardScore + 4;
  			cout << "��J : 4�� ����" << endl;
  			break;
  		case 2:
  			scardScore = scardScore + 2;
  			cout << "��J : 2�� ����" << endl;
  			break;
  		case 3:
  			scardScore = scardScore - 4;
  			cout << "��J : 4�� ����" << endl;  			
  			break;
  		case 4:
  			scardScore = scardScore - 2;
  			cout << "��J : 2�� ����" << endl;  			
  			break;
  		case 5:
  			scardScore = scardScore + 4;
  			cout << "��Q : 1�� 4�� ����" << endl;
  			break;
  		case 6:
  			scardScore = scardScore + 4;
  			cout << "��Q : 2�� 4�� ����" << endl;
  			break;
  		case 7:
  			scardScore = scardScore - 4;
  			cout << "��Q : 1�� 4�� ����" << endl;  			
  			break;
  		case 8:
  			scardScore = scardScore - 2;
  			cout << "��Q : 2�� 4�� ����" << endl;  			
  			break;
 /* 		case 9:
  			cout << "1��� ���� ��ȯ" << endl;
			 
  			break;
  		case 10:
  			cout << "2�հ� ���� ��ȯ" << endl;
  			break;
  		case 11:
  			cout << "0������ �ʱ�ȭ" << endl;
  			break;
*/	  	
		case 12:
			cout << "��" << endl;
	  		break;
  		
	  }
  	
  	
  }
  
class Pin{
	private:
		int pinNum;				//�������� ��ȣ�� ������ ���� ��� 
		int cardInfo;			//ī���� pinInfo�� ��Ī�� �ϱ� ���� �ʿ��� ���� 
		
	public:	
		Pin();
		Pin(int n);
		
		int getPinNum();		//�������� ��ȣ�� ������ �Լ�. 
		int getCardInfo();	//ī���� pinInfo�� ��Ī�� �ϱ����ؼ� ���ڸ� ������ �Լ�. 
};

  Pin::Pin() {
	pinNum = 1;
	cout << "������ ���� : " << pinNum << "  pin����" << endl; 
}

  Pin::Pin(int n){
	pinNum = n;
	cout << "������ ���� : " << pinNum << "  pin����" << endl; 
}

  int Pin::getPinNum(){			//10���� �������� ���ڸ� �ű�����ؼ� 1~10���� ���ڸ� �������� ������. 
  	srand(time(NULL));
	return rand() % 10+1;
	
  }

  int Pin::getCardInfo(){		//ī���� pinInfo�� ��Ī��Ű�� ���ؼ� 1~10���� ���ڸ� �������� ������. 
  	srand(time(NULL));
	return rand() % 10+1;
  }
//  ���ӿ� �����ϴ� �÷��̾ ���� Ŭ���� 
class Player{
	private:
		int playerNum;		//�÷��̾ �����ϱ� ���� ���� 
		int pscore;			//�÷��̾��� ������ ���� ����. 
		int answer;			//�÷��̾��� ������ ���� ����. 
		int turn;			//�÷��̾��� ���ʸ� ���� ����. 
	
	public:
		Player();
		Player(int n);
		
		int getTurn();		//�÷��̾��� ���ʸ� �����ϴ� �Լ�. 
		int judgeAnswer();	//�÷��̾��� ��(andswer)������ skrike, spare, gutter�� �Ǵ��ϴ� �Լ�. 
};

  Player::Player(){
  	playerNum = 1;					//�÷��̾� ������ 
	cout << "�÷��̾� ����" << endl; 	//�÷��̾� ����Ȯ��. 
  }
  
  Player::Player(int n){
	playerNum = n;											
	cout << "�÷��̾� ����" << endl; 
 }
 
  Player::getTurn(){
  	
  }
  
  Player::judgeAnswer(){
  	
  }
  
// ������ ����ϰ� ����ϱ� ����  Ŭ����  
  
class ScoreBoard{
	private:
		int	score;
	
	public:
		ScoreBoard();
		ScoreBoard(int n);
		
		int calScore();				//���信 ���� ������ ��� �ϴ� �Լ�. 
		int calScardscore();		//ȸ���� Ư��ī�忡 ���� ������ ����ϴ� �Լ�. 
};

  ScoreBoard::ScoreBoard(){
  	 score = 1; 
// 	 cout << "���ھ� ���� ����" << endl;		//���ھ�� ����Ȯ���� ���� ���. 
  }
  
  ScoreBoard::ScoreBoard(int n){
	score = n;											
//	cout << "���ھ�� ���� Ȯ��!" << endl;  	// 
 }
 
class Screen{
	public:
		void menuScreen();		//�޴�ȭ�� 
		int gameScreen();		//���ӽ���ȭ�� 
		int gameRule();			//���ӱ�Ģȭ�� 
		void gameEnd();			//������ ���� 
		void printCard(int  x, int y);		//ī�带 ����ϱ� ���� �Լ� 
		void setcolor(int color, int bgcolor); 		//���� �ٲٱ� ���� �Լ� 
		void fiveSecLater();
};

void setcolor(int color, int bgcolor) {
    color &= 0xf;
    bgcolor &= 0xf;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}
  void menuScreen(){
  	
  
	cout << "Ʈ���� ����" << endl << endl;
	
  	cout << "1. ���ӽ���" << endl;
  	cout << "2. ���ӱ�Ģ" << endl;
  	cout << "3. ��������" << endl;
  	
  }
  
  int gameScreen(){
  	int gameInput;
  	system("cls");	//ȭ���� ���� 
  	
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
	
	cout << "(�غ������� ��ġ�� ��Ÿ�� ���� �Դϴ�.)" << endl;
	cout << "1. ����" << endl << "2. ���ư���" << endl;
	
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
  	
	system("cls");						//ȭ���� ���� 
  	cout << "���� ��Ģ" << endl << endl << "(����)" << endl; 
  	
  		cout << endl;
	cout << endl;
	cout << "          �� 10      �� 3       �� 7       �� 5          " << endl;
	cout << endl;
	cout << endl;
	cout << "               �� 1       �� 3       �� 2               " << endl;
	cout << endl;
	cout << endl;
	cout << "                    �� 4       �� 1                    " << endl;
	cout << endl;
	cout << endl;
	cout << "                         �� 10                         " << endl;
	cout << endl;
	cout << endl;
  	
  	cout << "�÷��̾�� 3���̼� �÷��� �����ϸ� 10���� ī�尡 �÷��̾��� ���� ���� �������� �����ȴ�." << endl;
  	
  	cout << "1) ����" << endl;
  	
  	cin >> ruleInput;
  	
  		switch(ruleInput){
  			case 1:
			  system("cls");	//ȭ���� ���� 
  	
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
				cout << "�÷��̾�� �������� ����Ű�� ��ġ�� �ִ� ī�带 �� 2���ʿ� ���� ���߾�� �ϰ�, �� ���ʸ��� 5���� ī�尡 ��������, �������� ��ġ�� ����Ų��. " << endl;
  				cout << "1) ����" << endl;
				  
				  	break;
			  }

  	cin >> ruleInput;
  	
  	switch(ruleInput){
  			case 1:
  				system("cls");	//ȭ���� ���� 
  	
  				cout << "Strike : ù ���ʿ� ���� : 10��" << endl;
  				cout << "Spare : �� ���ʿ� ���� ���� : 8��" << endl;
 		 		cout << "Gutter : �� ���� ��� ���� X : 4��(Ư��ī�� ȹ��)" << endl << endl;
 		 		cout << "�� Ư��ī���� ȿ���� ���������� �ְ� ���� ���忡�� �ڵ� ����ȴ�." << endl << endl;
				cout << "�� Ư��ī��� Gutter�� ������ ����� �����ϴ� ���̸� �׻� ���� ȿ���� �ִ� ���� �ƴϱ⿡ �����ڿ��Ը� �δ����� ����. ������ �����ڿ��� ���� �Ǵ� ȿ���� ����." << endl;
				cout << endl << "1) ����" << endl;
				
				break;
			
								  		
	  }
  }

  void gameEnd(){
  	system("cls");
	cout << "������ �����մϴ�" << endl;
	cout << "ENTER�� ��������" << endl;
  }
  
  void printCard(int x, int y){

  	
  	switch (y){
  		case 1:
  			cout << "��";
  			break;
		case 2:
			cout << "��";
			break;
		case 3:
			cout << "��";
		 	break;
		case 4:
			cout << "��";
			break;
	  }
	
	cout << x << endl;
	  
  }
  
  void playGround(){

	Card cardAry[10];

	int i;
	int tmpNum;
	int tmpShape;
	
	for(i = 0; i < 10; i++){
		tmpNum = cardAry[i].getCardNum();
		tmpShape = cardAry[i].getShape();
		
		printCard(tmpNum, tmpShape);
	}
	
	cout << "5���� ī�尡 �������ϴ�." << endl;
	sleep(5);
}

	void fiveSecLater(){
	int shape;
	int num;	
	
  	system("cls");
  		cout << endl << endl;

/*	cout << endl;
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
*/		cout << endl;
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
	cout << "���������� ����Ű�� �������� ī�带 ���߼���." << endl << endl;
	cout << "���� ����� �Է��ϼ���.(�ش� ����� ���ڸ� �Է��ϼ���)" << endl;
	cout << "1)��, 2)��, 3)��, 4)��" << endl;
	cin >> shape;
	cout << "1~10���� �� ���ڸ� �Է��ϼ���" << endl;
	cin >> num;
	}


int main(){
	
	
	int decision = 0;		//�Է¹��� ���ڿ� ���ؼ� �Լ��� ����ϱ� ���� ����. 
  	setcolor(15 ,0);
  	int i;					//�ݺ����� ������ ���� ��������. 

	back:	           
  		menuScreen();
  	
  		cin >> decision;	//�ش���ڸ� �Է¹���. 
  	
  		switch(decision){	//�Է¹��� ���ڿ� ���ؼ� �Լ����� ȣ���. 
  			case 1:
  				decision = gameScreen();		//����ȭ���� ����ϰ� gameScreen()�Լ��� ���ϰ��� dicision�� ������. 
  				break;							
  			case 2:
  				gameRule();						//���ӱ�Ģȭ���� ����ϴ� �Լ��� ȣ�� 
  				system("cls");
  				break;
  			case 3:
  				gameEnd();						//��������ȭ���� ��� �� ���� �Լ��� ȣ�� 
  				return 0;
			  }
		
		if(decision == 1){					//������ dicision�� ���� ����  
			playGround();
			fiveSecLater();					//back���� ���ư��� �ƴϸ� playGround�Լ��� ������� ������.
		}else{
			goto back;						//back���� ���ư�. 
		}
			
		
			goto back;
//	cin >> decison;
	
	
	cout << "test" << endl;
	
}
