#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;


class Pin {
	int number;
public:
	Pin() { 
	number = 1; 
	}
	Pin(int n) { 
	number = n; 
	}
	void setNumber(int n) { 
	number = n;
	}

	int getShape();		//모양을 정하는 함수. 
	int getNumber();	//숫자를 정하는 함수. 
};

int Pin::getShape() {
	return  rand() % 4+1;
}

int Pin:: getNumber() {
	return rand() % 10+1;
}
int main() {
	Pin pinArray[10];
	
	for(int i=0; i <10; i++) {
		pinArray[i].setNumber(i+1);	//카드 10개를 만듦. 
	}

	Pin *p;
	p = pinArray;
	
	Pin *q;
	q = pinArray;
	 
	for(int i=0; i<10; i++) {
	cout << i+1 << "번째 볼링핀의 Card는 : ";
	switch (p->getShape()) {
		case 1:
			cout << "♠";
			break;
		case 2:
			cout << "◆";
			break;
		case 3:
			cout << "♣";
			break;
		case 4:
			cout << "♥";
			break;
	}
	cout << q->getNumber() << endl;
//	cout << p->getShape() << endl;		//10개의 카드의 모양을 1~4로 표현하여 출력함. 
	p++;
	q++;
	}

/*	Card *q;
	q = cardArray;
	for(int i=0; i<10; i++) {
	cout << i+1 << "번째 Card의 숫자는 : "<< q->getNumber() << endl;	//10개의 카드의 숫자를 1~10까지 랜덤으로 출력함.	
	p++;
	}*/
}

