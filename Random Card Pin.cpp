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

	int getShape();		//����� ���ϴ� �Լ�. 
	int getNumber();	//���ڸ� ���ϴ� �Լ�. 
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
		pinArray[i].setNumber(i+1);	//ī�� 10���� ����. 
	}

	Pin *p;
	p = pinArray;
	
	Pin *q;
	q = pinArray;
	 
	for(int i=0; i<10; i++) {
	cout << i+1 << "��° �������� Card�� : ";
	switch (p->getShape()) {
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
	cout << q->getNumber() << endl;
//	cout << p->getShape() << endl;		//10���� ī���� ����� 1~4�� ǥ���Ͽ� �����. 
	p++;
	q++;
	}

/*	Card *q;
	q = cardArray;
	for(int i=0; i<10; i++) {
	cout << i+1 << "��° Card�� ���ڴ� : "<< q->getNumber() << endl;	//10���� ī���� ���ڸ� 1~10���� �������� �����.	
	p++;
	}*/
}

