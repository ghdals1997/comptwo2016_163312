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
	
	Player playerOne;				//��ü player ����. 
	
	playerOne.score = 0;			//player�� ������ 0���� �ʱ�ȭ. 
	playerOne.answer = 0;			// player�� ���� �ʱ�ȭ.
	playerOne.judgement = 0;		
	
	
		//0�� 1�� ����� ������ �Է¹���. 

	for(int i = 0; i < 2; i++){
		cin >> playerOne.judgement;	
		
		playerOne.getJudgement();		//����� ���信 ���� answer�� ���� ���ϰ� ��. 
		
		switch (playerOne.judgement){
			case 1:
				playerOne.score = playerOne.score + playerOne.getScore();
				break;
			case 0:
				playerOne.score = playerOne.score + playerOne.getScore();
				break;
		
		}
		
	}
	 cout << "�÷��̾��� ������ : " << playerOne.score << endl;
}





//	playerOne.score = playerOne.score + playerOne.getScore();
//	cout << "�÷��̾��� ������ : " << playerOne.score << endl;
	
	
	/*if(playerOne.judgement = 1){
			playerOne.score = playerOne.score + playerOne.getScore();
			break;
		}else if(playerOne.judgement = 0){
		
			playerOne.score = playerOne.score + playerOne.getScore();
			cout << " �������� �մϴ� 0(����)�� 1(����)�� �Է�" << endl;
		}

	2�� �Է½� strike�� ����ϰ� ���� 10���� ����.
	1�� �Է½� spare�� ����ϰ� ���� 8���� ����.
	0�� �Է½� gutter�� ����ϰ� ���� 4���� ����.
*/  
/*	for(int i=0; i<2; i++){
	
	  cin >> playerOne.answer;			// ����� ���� Ȯ���� ���� �ش� ��� �Է�. 
  	  
  	  
  	 
  	  
    switch (playerOne.answer){
	  
  	  	case 2:
			playerOne.score = playerOne.score + playerOne.getScore();		//�ɹ� �Լ��� ȣ��. 
			cout << "�÷��̾��� ������ : " << playerOne.score << endl;
			return 0;
		case 1:
			playerOne.score = playerOne.score + playerOne.getScore();
			break;
		case 0:
			playerOne.score = playerOne.score + playerOne.getScore();
			break;
			}
	  cout << "�÷��̾��� ������ : " << playerOne.score << endl;
		

	}
*/	


