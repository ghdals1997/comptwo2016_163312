
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

	int getShape();		//����� ���ϴ� �Լ�. 
	int getNumber();	//���ڸ� ���ϴ� �Լ�. 
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
		cardArray[i].setNumber(i+1);	//ī�� 10���� ����. 
	}

	Card *p;
	p = cardArray;
	for(int i=0; i<10; i++) {
	cout << i+1 << "��° Card�� ����� : ";
	switch (p->getShape()) {
		case '1':
			cout << "��" << endl;
			break;
		case '2':
			cout << "��" << endl;
			break;
		case '3':
			cout << "��" << endl;
			break;
		case '4':
			cout << "��" << endl;
			break;
	}
	cout << p->getShape() << endl;		//10���� ī���� ����� 1~4�� ǥ���Ͽ� �����. 
	p++;
	}

	Card *q;
	q = cardArray;
	for(int i=0; i<10; i++) {
	cout << i+1 << "��° Card�� ���ڴ� : "<< q->getNumber() << endl;	//10���� ī���� ���ڸ� 1~10���� �������� �����.	
	p++;
	}
}

