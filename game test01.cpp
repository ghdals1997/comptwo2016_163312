#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

const int CARDNUM = 52;
const int PINNUM = 10;



class Card{
	private:
		string SPADE;
		string DIAMOND;
		string CLOVER;
		string HEART;
		
		int num;
	
	public:
		Card(int num);
		
		void show();
		Card() {
			num = 51;  
    		SPADE = "¢¼";  
  			DIAMOND = "¡Þ";
			CLOVER ="¢À";  
			HEART = "¢½";  
    		
		}
};


Card::Card(int num){
	this->num = num;
}

void Card::show(){
	int shape;
	int cardnum;
	
	shape = num / 13;
	cardnum = num % 13;
	
	switch(shape) {  
  		case 0:  
    		cout << "¢¼" ;  
    		break;  
		  case 1:  
		    	cout <<"¡Þ";  
		    	break;  
		  case 2:  
		    	cout <<"¢À";  
		    	break;  
		  case 3:  
		    	cout <<"¢½";  
		    	break;  
		  default:  
		    	break;  
  		}  

  if (cardnum > 1 && cardnum < 11 ) {  
    cout << cardnum << " ";  
  }else {  
	    switch (cardnum) {  
	    	case 0:  
			      cout << "K " ;  
			      break;  
	    	case 1:  
			      cout << "A " ;  
			      break;  
	    	case 11:  
			      cout <<"J ";  
			      break;  
	    	case 12:  
			      cout << "Q ";  
			      break;  
   		}  
	}
}




int main() {
	cout << "main" << endl;
}
