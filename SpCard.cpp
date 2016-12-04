#include<iostream>

using namespace std;

class Player {
  private :
	int score;
	int answer;
	
  public:
	double getScore();
	int judgement();
};

class SpCard(){

	private :	
	
		int number;
		int effect;
		int shape;
	
		string SPADE;
		string DIAMOND;
		string CLOVER;
		string HEART;
		
	public :
		
		void show();
		void getNumber;
		void getShape;
		void getScore;
		void getEffect;
}
