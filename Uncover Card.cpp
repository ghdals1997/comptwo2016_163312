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

	int getShape();		//����� ���ϴ� �Լ�. 
	int getNumber();	//���ڸ� ���ϴ� �Լ�. 
	
	void printNum();
};

int Pin::getShape() {
	return  rand() % 4+1;
}

int Pin:: getNumber() {
	return rand() % 10+1;
}

class screen{
	void coverCard();
	void printCard();
};

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

void printCard(){
	Pin pinArray[10];
	
	for(int i=0; i <10; i++) {
		pinArray[i].setNumber(i+1);	//ī�� 10���� ����. 
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
				cout << " �� ";
				break;
			case 2:
				cout << " �� ";
				break;
			case 3:
				cout << " �� ";
				break;
			case 4:
				cout << " �� ";
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
				cout << " �� ";
				break;
			case 2:
				cout << " �� ";
				break;
			case 3:
				cout << " �� ";
				break;
			case 4:
				cout << " �� ";
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
				cout << " �� ";
				break;
			case 2:
				cout << " �� ";
				break;
			case 3:
				cout << " �� ";
				break;
			case 4:
				cout << " �� ";
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
			cout << " �� ";
			break;
		case 2:
			cout << " �� ";
			break;
		case 3:
			cout << " �� ";
			break;
		case 4:
			cout << " �� ";
			break;
	}
	cout << q->getNumber() << endl;
	
	
}

void uncoverCard(){
	system("cls");
	
	
}

int main(){

	int x;

	printCard();
	cout << "5���� ī�尡 �������ϴ�. " << endl;
	coverCard();
	cout << "1�� �Է��ϸ� ī�尡 �ٽ� ���� �˴ϴ�." << endl;
	cin >> x;
	if (x == 1){
		system("cls");
		printCard();		
	}
	
}
