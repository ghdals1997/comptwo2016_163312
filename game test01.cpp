#include <iostream>
#include <windows.h>


using namespace std;

class Screen{
	void menuScreen();	//�޴�ȭ�� 
	void gameScreen();	//���ӽ���ȭ�� 
	int gameRule();	//���ӱ�Ģȭ�� 
	void gameEnd();		//������ ���� 
};

void setcolor(int color, int bgcolor) 
{
    color &= 0xf;
    bgcolor &= 0xf;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}

  void menuScreen(){
  	
  
	cout << "Ʈ���� ����" << endl << endl;
	
  	cout << "1. ���ӽ���" << endl;
  	cout << "2. ���ӱ�Ģ" << endl;
  	cout << "3. ��������" << endl;
  	
  }
  
  void gameScreen(){
  	
  	system("cls");	//ȭ���� ���� 
  	
  	cout << endl;
	cout << endl;
	cout << "         Pin10     Pin09     Pin08     Pin07         " << endl;
	cout << endl;
	cout << endl;
	cout << "              Pin06     Pin05     Pin04              " << endl;
	cout << endl;
	cout << endl;
	cout << "                   Pin03     Pin02                   " << endl;
	cout << endl;
	cout << endl;
	cout << "                        Pin01                        " << endl;
	cout << endl;
	cout << endl;
	
	cout << "(�غ������� ��ġ�� ��Ÿ�� ���� �Դϴ�.)" << endl;
	cout << "1. ����" << endl << "2. ���ư���" << endl;
	
  }
  
  int gameRule(){
  	
  	int ruleInput;
  	
	system("cls");						//ȭ���� ���� 
  	cout << "���� ��Ģ" << endl << endl << "(����)" << endl; 
  	
  		cout << endl;
	cout << endl;
	cout << "          �� 10      �� 3       �� 7       �� 5          " << endl;
	cout << endl;
	cout << endl;
	cout << "               �� 1       �� 3       �� 2               " << endl;
	cout << endl;
	cout << endl;
	cout << "                    �� 4       �� 1                    " << endl;
	cout << endl;
	cout << endl;
	cout << "                         �� 10                         " << endl;
	cout << endl;
	cout << endl;
  	
  	cout << "�÷��̾�� 3���̼� �÷��� �����ϸ� 10���� ī�尡 �÷��̾��� ���� ���� �������� �����ȴ�." << endl;
  	
  	cout << "1) ����" << endl << endl; 
  	
  	cin >> ruleInput;
  	
  	if (ruleInput = 1){
  		system("cls");	//ȭ���� ���� 
  	
	  	cout << endl;
		cout << endl;
		cout << "         Pin10     Pin09     Pin08     Pin07         " << endl;
		cout << endl;
		cout << endl;
		cout << "              Pin06     Pin05     "; 
		setcolor(12 ,0);
		cout << "Pin04              " << endl; 
		setcolor(15 ,0);
		cout << endl;
		cout << endl;
		cout << "                   Pin03     Pin02                   " << endl;
		cout << endl;
		cout << endl;
		cout << "                        Pin01                        " << endl;
		cout << endl;
		cout << endl;
		cout << "�÷��̾�� �������� ����Ű�� ��ġ�� �ִ� ī�带 �� 2���ʿ� ���� ���߾�� �ϰ�, �� ���ʸ��� 5���� ī�尡 ��������, �������� ��ġ�� ����Ų��. " << endl;

		
	  }else if(ruleInput = 2){
		  	return 1;
	  }
 
  	cin >> ruleInput;
  	
  	if (ruleInput = 1){
  		system("cls");	//ȭ���� ���� 
  	
  		cout << "Strike : ù ���ʿ� ���� : 10��" << endl;
  		cout << "Spare : �� ���ʿ� ���� ���� : 8��" << endl;
  		cout << "Gutter : �� ���� ��� ���� X : 4��(Ư��ī�� ȹ��)" << endl << endl;
  		cout << "�� Ư��ī���� ȿ���� ���������� �ְ� ���� ���忡�� �ڵ� ����ȴ�." << endl << endl;
		cout << "�� Ư��ī��� Gutter�� ������ ����� �����ϴ� ���̸� �׻� ���� ȿ���� �ִ� ���� �ƴϱ⿡ �����ڿ��Ը� �δ����� ����. ������ �����ڿ��� ���� �Ǵ� ȿ���� ����." << endl;
		
		  		
	  }else if(ruleInput = 2){
	  	return 1;
	  }
  }

  void gameEnd(){
  	system("cls");
	exit(1);
  }
  
  int main(){
  	int decision = 0;
  	setcolor(15 ,0);
  	
  	menuScreen();
  	
  	cin >> decision;	//�ش���ڸ� �Է¹���. 
  	
  	switch(decision){	//�Է¹��� ���ڿ� ���ؼ� �Լ����� ȣ���. 
  		case 1:
  			gameScreen();
  			break;
  		case 2:
  			gameRule();
  			break;
  		case 3:
  			gameEnd();
  			break;
	  }
  	
  	
  }
