#include<iostream>
#include<cstring>
#include "Screen.h"

using namespace std;

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
  
  void gameRule(){
  	system("cls");						//ȭ���� ���� 
  	cout << "���� ��Ģ" << endl;
  	
  }

  void gameEnd(){
  	system("cls");
	exit(1);
  }
