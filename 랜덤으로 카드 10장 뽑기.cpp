
#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;


class Card {
	int number;
public:
	Card() { 
	number = 1; 
	}
	Card(int n) { 
	number = n; 
	}
	void setNumber(int n) { 
	number = n;
	}

	int getShape();		//모양을 정하는 함수. 
	int getNumber();	//숫자를 정하는 함수. 
};

int Card::getShape() {
	return  rand() % 4+1;
}

int Card:: getNumber() {
	return rand() % 10+1;
}
int main() {
	Card cardArray[10];
	
	for(int i=0; i <10; i++) {
		cardArray[i].setNumber(i+1);	//카드 10개를 만듦. 
	}

	Card *p;
	p = cardArray;
	for(int i=0; i<10; i++) {
	cout << i+1 << "번째 Card의 모양은 : ";
	switch (p->getShape()) {
		case '1':
			cout << "♠" << endl;
			break;
		case '2':
			cout << "◆" << endl;
			break;
		case '3':
			cout << "♣" << endl;
			break;
		case '4':
			cout << "♥" << endl;
			break;
	}
	cout << p->getShape() << endl;		//10개의 카드의 모양을 1~4로 표현하여 출력함. 
	p++;
	}

	Card *q;
	q = cardArray;
	for(int i=0; i<10; i++) {
	cout << i+1 << "번째 Card의 숫자는 : "<< q->getNumber() << endl;	//10개의 카드의 숫자를 1~10까지 랜덤으로 출력함.	
	p++;
	}
}

