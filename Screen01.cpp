#include<iostream>
#include<cstring>
#include "Screen.h"

using namespace std;

void menuScreen(){
  	
  
	cout << "트럼프 볼링" << endl << endl;
	
  	cout << "1. 게임시작" << endl;
  	cout << "2. 게임규칙" << endl;
  	cout << "3. 게임종료" << endl;
  	
  }
  
  void gameScreen(){
  	
  	system("cls");	//화면을 지움 
  	
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
	
	cout << "(※볼링핀의 위치를 나타낸 숫자 입니다.)" << endl;
	cout << "1. 시작" << endl << "2. 돌아가기" << endl;
	
  }
  
  void gameRule(){
  	system("cls");						//화면을 지움 
  	cout << "게임 규칙" << endl;
  	
  }

  void gameEnd(){
  	system("cls");
	exit(1);
  }
