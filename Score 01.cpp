#include<iostream>

using namespace std;

class Player {
public:
	int score;
	int answer;
	double getScore();
	int judgement();
};

double Player::getScore(){
	switch(answer){
		case 2:
			cout << "STRIKE" << endl;
			return score+10;
		case 1:
			cout << "SPARE" << endl;
			return score+8;
		case 0:
			cout << "GUTTER" << endl;
			return score+4;	
	}
		
}

int judgement(){
	
}
int main(){
	
	Player player;				//��ü player ����. 
	
	player.score = 0;			//player�� ������ 0���� �ʱ�ȭ. 
	player.answer = 0;			// player�� ���� �ʱ�ȭ.
	
/*
	2�� �Է½� strike�� ����ϰ� ���� 10���� ����.
	1�� �Է½� spare�� ����ϰ� ���� 8���� ����.
	0�� �Է½� gutter�� ����ϰ� ���� 4���� ����.
*/ 
	
	cin >> player.answer;			// ����� ���� Ȯ���� ���� �ش� ��� �Է�. 
	double score = player.getScore();		//�ɹ� �Լ��� ȣ��. 
	
	cout << "�÷��̾��� ������ : " << score << endl;		//Ȯ���� ���� ���. 
	

}
