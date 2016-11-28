#include <cstdlib>
#include <iostream>
#include <unistd.h>

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
	
	void printNum();
};

int Pin::getShape() {
	return  rand() % 4+1;
}

int Pin:: getNumber() {
	return rand() % 10+1;
}

void coverCard(){
	
	sleep(5);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "         Pin07     Pin08     Pin09     Pin10         " << endl;
	cout << endl;
	cout << endl;
	cout << "              Pin04     Pin05     Pin06              " << endl;
	cout << endl;
	cout << endl;
	cout << "                   Pin02     Pin03                   " << endl;
	cout << endl;
	cout << endl;
	cout << "                        Pin01                        " << endl;
	cout << endl;
	cout << endl;
}

void printNum(){
	Pin pinArray[10];
	
	for(int i=0; i <10; i++) {
		pinArray[i].setNumber(i+1);	//카드 10개를 만듦. 
	}

	Pin *p;
	p = pinArray;
	
	Pin *q;
	q = pinArray;
	
	cout << endl;
	cout << endl;
	cout << "          ";
	
	for(int i = 0;i<4;i++){
		switch (p->getShape()) {
			case 1:
				cout << " ♠ ";
				break;
			case 2:
				cout << " ◆ ";
				break;
			case 3:
				cout << " ♣ ";
				break;
			case 4:
				cout << " ♥ ";
				break;
		}
		cout << q->getNumber();
		cout <<"     ";
		p++;
		q++;
	}
	cout << endl << endl << "     " << endl << "          ";
	
	for(int i = 0;i<3;i++){
		cout << "     ";
		switch (p->getShape()) {
			case 1:
				cout << " ♠ ";
				break;
			case 2:
				cout << " ◆ ";
				break;
			case 3:
				cout << " ♣ ";
				break;
			case 4:
				cout << " ♥ ";
				break;
		}
		cout << q->getNumber();
		p++;
		q++;
	}
	cout << endl << endl << "               " << endl << "                    ";
	
	for(int i = 0;i<2;i++){
		switch (p->getShape()) {
			case 1:
				cout << " ♠ ";
				break;
			case 2:
				cout << " ◆ ";
				break;
			case 3:
				cout << " ♣ ";
				break;
			case 4:
				cout << " ♥ ";
				break;
		}
		cout << q->getNumber();
		cout << "     ";
		p++;
		q++;
	}
	cout << endl << endl << "               " << endl << "                        ";
	
	switch (p->getShape()) {
		case 1:
			cout << " ♠ ";
			break;
		case 2:
			cout << " ◆ ";
			break;
		case 3:
			cout << " ♣ ";
			break;
		case 4:
			cout << " ♥ ";
			break;
	}
	cout << q->getNumber() << endl;
	
	
}

void uncoverCard(){
	system("cls");
	
	
}

int main(){

	int x;

	printNum();
	cout << "5초후 카드가 뒤집힙니다. " << endl;
	coverCard();
	cout << "1을 입력하면 카드가 다시 공개 됩니다." << endl;
	cin >> x;
	if (x == 1){
		system("cls");
		printNum();		
	}
	
}
