
/*
#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

class Card {

public:
	int shape;
	int number;
};	

int main() {

	

	Card a,b,c,d,e,f,g,h,i,j; //카드 10개 생성

	srand((unsigned)time(0));

	a.number = rand() % 10+1;	//1~10까지 숫자를 랜덤으로 정함
	a.shape = rand() % 4+1;	//1~4까지 숫자를 랜덤으로 정해서 모양으로 사용할것임.

	b.number = rand() % 10+1;
	b.shape = rand() % 4+1;

	c.number = rand() % 10+1;
	c.shape = rand() % 4+1;

	d.number = rand() % 10+1;
	d.shape = rand() % 4+1;

	e.number = rand() % 10+1;
	e.shape = rand() % 4+1;

	f.number = rand() % 10+1;
	f.shape = rand() % 4+1;

	g.number = rand() % 10+1;
	g.shape = rand() % 4+1;

	h.number = rand() % 10+1;
	h.shape = rand() % 4+1;

	i.number = rand() % 10+1;
	i.shape = rand() % 4+1;

	j.number = rand() % 10+1;
	j.shape = rand() % 4+1;
	
	cout << "a.number" << endl;
	cout << "숫자 : " << a.number << endl;
	cout << "모양 : " << a.shape << endl;

}	*/

#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;


class Card {
	int number;
	char shape[10];
public:
	Card() { number = 1; }
	Card(int n) { number = n; }
	void setNumber(int n) { number = n;}

	int getShape();
};

int Card::getShape() {
	
	return  rand() % 4+1;
}

int main() {
	Card cardArray[10];

	
	cardArray[0].setNumber(1);
	cardArray[1].setNumber(2);
	cardArray[2].setNumber(3);
	cardArray[3].setNumber(4);
	cardArray[4].setNumber(5);
	cardArray[5].setNumber(6);
	cardArray[6].setNumber(7);
	cardArray[7].setNumber(8);
	cardArray[8].setNumber(9);
	cardArray[9].setNumber(10);


	Card *p;
	p = cardArray;
	for(int i=0; i<10; i++) {
	cout << i+1 << "번째 Card의 모양은 : "<< p->getShape() << endl;
	p++;
	}
}