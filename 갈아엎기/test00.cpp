#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include<time.h>
#include <windows.h>

using namespace std;

class Card{
	private:	
		int cardNum;	// 카드의 숫자를 가지기 위해서 가지는 숫자 
		int cardShape;	//카드의 모양을 위해서 가지는 숫자 
		int pinInfo;	//카드를 볼링핀 번호와 매칭하기 위한 숫자 
		
	public:	
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
	srand((unsigned int)time(NULL));
	return rand() % 10+1;

  }
  int Card::getShape(){				//카드의 모양을 가지기위해서 1~4까지의 수를 랜덤으로 리턴. 
  	srand((unsigned int)time(NULL));
	return rand() % 4+1;
  }

  int Card::getPinInfo(){		//카드를 볼링핀 10개와 랜덤으로 매칭하기 위해서 1~10까지 랜덤으로 숫자를 리턴함. 
  	srand((unsigned int)time(NULL));
	return rand() % 10+1;
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

  
