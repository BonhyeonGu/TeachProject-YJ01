#include <iostream>
#include <windows.h>
#include "KeyInput.h"
#include "GameStart.h"
using namespace std;

KeyInput ki;
GameStart gs;

void title();

void tutorial()
{
	system("cls");
	cout << "======================================================" << endl;
	cout << "O" << endl;
	cout << "I" << "<=플레이어" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "A" << endl;
	cout << "x" << "<=장애물" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "키보드 방향키로 이동합니다." << endl;
	cout << "키보드 a키로 장애물을 부술 수 있습니다." << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "아무 키를 누르면 튜토리얼 종료" << endl;
	cout << "======================================================" << endl;
	while (1)
		if (ki.inputKey() != -1) break;
	title();
}

void title()
{
	system("cls");
	int answer;
	cout << "   _____            __  __  ______ \n  / ____|    /\\    |  \\/  ||  ____|\n | |  __    /  \\   | \\  / || |__   \n | | |_ |  / /\\ \\  | |\\/| ||  __|  \n | |__| | / ____ \\ | |  | || |____ \n  \\_____|/_/    \\_\\|_|  |_||______|" << endl;
	cout << "제작 : 구본현, 구유정" << endl;
	cout << "1. 시작" << endl;
	cout << "2. 튜토리얼" << endl;
	cout << "3. 종료" << endl;
	answer = ki.inputAnswerWait(1, 3);
	if (answer == 1)
		gs.run();
	else if (answer == 2)
		tutorial();
	else if (answer == 3)
		return;
}

void start()
{
	title();
}



int main()
{
	start();
	return 0;
}