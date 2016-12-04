#include<iostream>

using namespace std;

class Player {
  private :
	int score;
	int answer;
	int judgement;
  public :
	double getScore();
	void getJudgement();
};

  double Player::getScore(){
	switch(answer){
		case 3:
			cout << "STRIKE" << endl;
			return 10;
		case 4:
			cout << "SPARE" << endl;
			return 8;
		case 2:
			cout << "GUTTER" << endl;
			return 4;	
	}
		
}

  void Player::getJudgement(){
  	switch(judgement){
  		case 0:
  			answer = answer + 1;
  			break;
  			
  		case 1:
  			answer = answer +3;
  			break;
	  }
	
}

int main(){
	
	Player playerOne;				//객체 player 생성. 
	
	playerOne.score = 0;			//player의 점수를 0으로 초기화. 
	playerOne.answer = 0;			// player의 답을 초기화.
	playerOne.judgement = 0;		
	
	
		//0과 1로 오답과 정답을 입력받음. 

	for(int i = 0; i < 2; i++){
		cin >> playerOne.judgement;	
		
		playerOne.getJudgement();		//오답과 정답에 따라 answer의 값을 정하고 옴. 
		
		switch (playerOne.judgement){
			case 1:
				playerOne.score = playerOne.score + playerOne.getScore();
				break;
			case 0:
				playerOne.score = playerOne.score + playerOne.getScore();
				break;
		
		}
		
	}
	 cout << "플레이어의 점수는 : " << playerOne.score << endl;
}





//	playerOne.score = playerOne.score + playerOne.getScore();
//	cout << "플레이어의 점수는 : " << playerOne.score << endl;
	
	
	/*if(playerOne.judgement = 1){
			playerOne.score = playerOne.score + playerOne.getScore();
			break;
		}else if(playerOne.judgement = 0){
		
			playerOne.score = playerOne.score + playerOne.getScore();
			cout << " 재판정을 합니다 0(오답)과 1(정답)을 입력" << endl;
		}

	2을 입력시 strike를 출력하고 점수 10점을 더함.
	1를 입력시 spare를 출력하고 점수 8점을 얻음.
	0을 입력시 gutter를 출력하고 점수 4점을 얻음.
*/  
/*	for(int i=0; i<2; i++){
	
	  cin >> playerOne.answer;			// 제대로 동작 확인을 위한 해당 경우 입력. 
  	  
  	  
  	 
  	  
    switch (playerOne.answer){
	  
  	  	case 2:
			playerOne.score = playerOne.score + playerOne.getScore();		//맴버 함수를 호출. 
			cout << "플레이어의 점수는 : " << playerOne.score << endl;
			return 0;
		case 1:
			playerOne.score = playerOne.score + playerOne.getScore();
			break;
		case 0:
			playerOne.score = playerOne.score + playerOne.getScore();
			break;
			}
	  cout << "플레이어의 점수는 : " << playerOne.score << endl;
		

	}
*/	


