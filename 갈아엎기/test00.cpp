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
	cout << "  ī�����" << endl; 	//ī�� ����Ȯ��. 
}

  Card::Card(int n){
	cardNum = n;													//ī�� ���� 
	cout << "ī����� : " << cardNum << "  ī�����" << endl; 
}

  int Card::getCardNum(){			//ī���� ��ȣ�� 1~10���� �������� ������. 
	srand((unsigned int)time(NULL));
	return rand() % 10+1;

  }
  int Card::getShape(){				//ī���� ����� ���������ؼ� 1~4������ ���� �������� ����. 
  	srand((unsigned int)time(NULL));
	return rand() % 4+1;
  }

  int Card::getPinInfo(){		//ī�带 ������ 10���� �������� ��Ī�ϱ� ���ؼ� 1~10���� �������� ���ڸ� ������. 
  	srand((unsigned int)time(NULL));
	return rand() % 10+1;
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
	  
int main(){
	Card cardAry[10];

	int i;
	int tmpNum;
	int tmpShape;
	
	for(i = 0; i < 10; i++){
		tmpNum = cardAry[i].getCardNum();
		tmpShape = cardAry[i].getShape();
		
		printCard(tmpNum, tmpShape);
	}
}

  
