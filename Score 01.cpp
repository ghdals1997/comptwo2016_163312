#include<iostream>

using namespace std;

class Player {
public:
	int score;
	int answer;
	double getScore();
	
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
int main(){
	
	Player player;				//객체 player 생성. 
	
	player.score = 0;			//player의 점수를 0으로 초기화. 
	player.answer = 0;			// player의 답을 초기화.
	
/*
	2을 입력시 strike를 출력하고 점수 10점을 더함.
	1를 입력시 spare를 출력하고 점수 8점을 얻음.
	0을 입력시 gutter를 출력하고 점수 4점을 얻음.
*/ 
	
	cin >> player.answer;			// 제대로 동작 확인을 위한 해당 경우 입력. 
	double score = player.getScore();		//맴버 함수를 호출. 
	
	cout << "플레이어의 점수는 : " << score << endl;		//확인을 위해 출력. 
	

}
