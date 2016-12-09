#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include<time.h>


using namespace std;

class Card{
	public:	
		int cardNum;
		int cardShape;
		int pinInfo;
		Card();
		Card(int n);
	
		double getCardNum();
		double getShape();
		double getPinInfo();

};

  Card::Card() {
	cardNum = 1;
	cout << "  카드생성" << endl; 
}

  Card::Card(int n){
	cardNum = n;
	cout << "카드숫자 : " << cardNum << "  카드생성" << endl; 
}

  double Card::getCardNum(){
	srand(time(NULL));
	return rand() % 10+1;

  }
  double Card::getShape(){
  	srand(time(NULL));
	return rand() % 4+1;
  }

  double Card::getPinInfo(){
  	srand(time(NULL));
	return rand() % 10+1;
  }
  


class Pin{
	public:
		int pinNum;
		int cardInfo;
		Pin();
		Pin(int n);
		
		double getPinNum();
		double getCardInfo();
};

  Pin::Pin() {
	pinNum = 1;
	cout << "볼링핀 숫자 : " << pinNum << "  pin생성" << endl; 
}

  Pin::Pin(int n){
	pinNum = n;
	cout << "볼링핀 숫자 : " << pinNum << "  pin생성" << endl; 
}

  double Pin::getPinNum(){
  	srand(time(NULL));
	return rand() % 10+1;
	
  }

  double Pin::getCardInfo(){
  	srand(time(NULL));
	return rand() % 10+1;
  }

class Screen{
	void printCard(int  x, int y);
};

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

int main(){
	
	Card cardAry[10];

	int i;
	
	for(i = 0; i < 10; i++){
		cardAry[i].getCardNum();
		cardAry[i].getShape();
		
		cout << "숫자" << cardAry[i].getCardNum() << "모양" <<cardAry[i].getShape() << endl;
		
		printCard(cardAry[i].getCardNum(),cardAry[i].getShape() );
	}
	
	
	Pin pinOne(3);
	
	
}
