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
  			cout << "♠J : +4점 " << endl;
  			
  		case 2:
  			cout << "◇J : +2점 " << endl;
  			
  		case 3:
  			cout << "♣J : -4점 " << endl;
  			
  		case 4:
  			cout << "♡J : -3점 " << endl;
  			
  		case 5:
  			cout << "♠Q : 1등 -4점 " << endl;
  			
  		case 6:
  			cout << "◇Q : 2등 -4점 " << endl;
  			
  		case 7:
  			cout << "♣Q : 1등 +4점 " << endl;
  			
  		case 8:
  			cout << "♡Q : 2등 +4점 " << endl;
  			
  	}		
			 
  }
  
   int SpCard::getEffect(){
  	switch{
  		case 9:
  			cout << "♠K : 1등과 점수 교환 " << endl;
  			
  		case 10:
  			cout << "◇K : 2등과 점수 교환 " << endl;
  			
  		case 11:
  			cout << "♣K : 0점으로 최기화 " << endl;
  			
  		case 12:
  			cout << "♡K : 꽝 " << endl;
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
  	
  	cout << "플레이어1의 점수를 입력해주세요 " << endl;
	cin >> playerOne.score;
	cout << "플레이어2의 점수를 입력해주세요 " << endl;
	cin >> playerTwo.score;
	cout << "플레이어3의 점수를 입력해주세요 " << endl;
	cin >> playerThr.score;
	
	cout << "가장 점수가 높은 플레이어는 ";
	
	if(playerOne.score > playerTwo.score && playerOne.score > playerThr.score)
		cout << playerOne.score << "점_플레이어1 입니다." << endl;
	else if(playerTwo.score > playerOne.score && playerTwo.score > playerThr.score)
		cout << playerTwo.score << "점_플레이어2 입니다." << endl;	
    else if(playerThr.score > playerOne.score && playerThr.score > playerTwo.score)
  		cout << playerThr.score << "점_플레이어3 입니다." << endl;
  		
  }
