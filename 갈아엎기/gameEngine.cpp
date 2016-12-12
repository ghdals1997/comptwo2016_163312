#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include<time.h>
#include <windows.h>

using namespace std;

class Card{
	public:	
		int cardNum;	// ī���� ���ڸ� ������ ���ؼ� ������ ���� 
		int cardShape;	//ī���� ����� ���ؼ� ������ ���� 
		int pinInfo;	//ī�带 ������ ��ȣ�� ��Ī�ϱ� ���� ���� 
		Card();			
		Card(int n);
	
		int getCardNum();		//ī���� ���ڸ� ������ �Լ� 
		int getShape();			//ī���� ����� ������ �Լ� 
		int getPinInfo();		//ī���� ������ ��ȣ�� ������ �Լ� 

};

  Card::Card() {
	cardNum = 1;					//ī���� ������ 
	cout << "  ī�����" << endl; 	//ī�� ����Ȯ��. 
}

  Card::Card(int n){
	cardNum = n;													//ī�� ���� 
	cout << "ī����� : " << cardNum << "  ī�����" << endl; 
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
  


class Pin{
	public:
		int pinNum;				//�������� ��ȣ�� ������ ���� ��� 
		int cardInfo;			//ī���� pinInfo�� ��Ī�� �ϱ� ���� �ʿ��� ���� 
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

class Screen{
	void menuScreen();		//�޴�ȭ�� 
	int gameScreen();		//���ӽ���ȭ�� 
	int gameRule();			//���ӱ�Ģȭ�� 
	void gameEnd();			//������ ���� 
	void printCard(int  x, int y);		//ī�带 ����ϱ� ���� �Լ� 
	void setcolor(int color, int bgcolor); 		//���� �ٲٱ� ���� �Լ� 
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
				cout << "2) �޴��� ���ư���" << endl; 
				  
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
				cout << "2) �޴��� ���ư���" << endl; 
				
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
	
	for(i = 0; i < 10; i++){
		cardAry[i].getCardNum();
		cardAry[i].getShape();
		
		cout << "����" << cardAry[i].getCardNum() << "���" <<cardAry[i].getShape() << endl;
		
		printCard(cardAry[i].getCardNum(),cardAry[i].getShape() );
	}
}

int main(){
	
	
	int decision = 0;		//�Է¹��� ���ڿ� ���ؼ� �Լ��� ����ϱ� ���� ����. 
  	setcolor(15 ,0);
  	int i;					//�ݺ����� ������ ���� ��������. 
  	
  	for(i=0; i<10; i++){
	  
	           
  		menuScreen();
  	
  		cin >> decision;	//�ش���ڸ� �Է¹���. 
  	
  		switch(decision){	//�Է¹��� ���ڿ� ���ؼ� �Լ����� ȣ���. 
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
