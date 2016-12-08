#ifndef __Screen_H__
#define __Screen_H__

#include <iostream>

using namespace std;

class Screen{
  public:
  	
	void menuScreen();	//메뉴화면 
	void gameScreen();	//게임시작화면 
	void gameRule();	//게임규칙화면 
	void gameEnd();		//게임을 종료 
};
#endif
