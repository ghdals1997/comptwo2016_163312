#include<iostream>

using namespace std;

class Player {
  public:
	int score;
	double getSpcard();
	int judgement();
};
  int Player::judgement(){
  	
  } 

class SpCard{

  public:
		int number;
		
		int getNumber;
		int getScore;
		int getEffect;
};

/*  
  int SpCard::getNumber(){
  	return rand() % 12+1;
  }
  
  int SpCard::getScore(){
  	switch(number){
	  
  		case 1:
  			cout << "��J : +4�� " << endl;
  			
  		case 2:
  			cout << "��J : +2�� " << endl;
  			
  		case 3:
  			cout << "��J : -4�� " << endl;
  			
  		case 4:
  			cout << "��J : -3�� " << endl;
  			
  		case 5:
  			cout << "��Q : 1�� -4�� " << endl;
  			
  		case 6:
  			cout << "��Q : 2�� -4�� " << endl;
  			
  		case 7:
  			cout << "��Q : 1�� +4�� " << endl;
  			
  		case 8:
  			cout << "��Q : 2�� +4�� " << endl;
  			
  	}		
			 
  }
  
   int SpCard::getEffect(){
  	switch{
  		case 9:
  			cout << "��K : 1��� ���� ��ȯ " << endl;
  			
  		case 10:
  			cout << "��K : 2��� ���� ��ȯ " << endl;
  			
  		case 11:
  			cout << "��K : 0������ �ֱ�ȭ " << endl;
  			
  		case 12:
  			cout << "��K : �� " << endl;
  		}
  }
  */
  int main(){
  	Player playerOne;
  	Player playerTwo;
  	Player playerThr;
  	
  	playerOne.score = 0;
  	playerTwo.score = 0;
  	playerThr.score = 0;
  	
  	cout << "�÷��̾�1�� ������ �Է����ּ��� " << endl;
	cin >> playerOne.score;
	cout << "�÷��̾�2�� ������ �Է����ּ��� " << endl;
	cin >> playerTwo.score;
	cout << "�÷��̾�3�� ������ �Է����ּ��� " << endl;
	cin >> playerThr.score;
	
	cout << "���� ������ ���� �÷��̾�� ";
	
	if(playerOne.score > playerTwo.score && playerOne.score > playerThr.score)
		cout << playerOne.score << "��_�÷��̾�1 �Դϴ�." << endl;
	else if(playerTwo.score > playerOne.score && playerTwo.score > playerThr.score)
		cout << playerTwo.score << "��_�÷��̾�2 �Դϴ�." << endl;	
    else if(playerThr.score > playerOne.score && playerThr.score > playerTwo.score)
  		cout << playerThr.score << "��_�÷��̾�3 �Դϴ�." << endl;
  		
  }
