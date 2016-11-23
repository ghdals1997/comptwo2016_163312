#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;


class Scard {
	int num;
public:
	Scard() { 
	num = 1; 
	}
	Scard(int n) { 
	num = n; 
	}
	void setNumber(int n) { 
	num = n;
	}

	int getShape();		//모양을 정하는 함수. 
	int getNumber();	//숫자를 정하는 함수. 
};

int Scard::getShape() {
	return  rand() % 4+1;
}

int Scard:: getNumber() {
	return rand() % 3+10;
}
int main() {
	Scard scardArray[4];
	
	for(int i=0; i <4; i++) {
		scardArray[i].setNumber(i+1);	//카드를 4개 만든다. 
	}

	Scard *p;
	p = scardArray;
	
	Scard *q;
	q = scardArray;
	 
	for(int i=0; i<4; i++) {
	cout << i+1 << "번째 특수카드는: ";		//반복문을 통해서 카드의 모양과 숫자를 출력한다. 
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
	p++;
	q++;
	}

}
