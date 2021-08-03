#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

#include "GameStart.h"
#include "KeyInput.h"

using namespace std;

KeyInput kin;

bool GameStart::ran(int per)
{
	int v = rand() % 100 + 1;
	if (v < per) return true;
	else return false;
}

void GameStart::mapLoad()
{
	srand((unsigned int)time(NULL));
	for (int i = 10; i < MAPSIZE; i++)
	{
		if (ran(20))
		{
			this->mapp[i].box = true;
		}
		
		if (ran(30))
		{
			this->mapp[i].cloud = true;
		}
	}
}

void GameStart::displayLoad(int xco)
{
	int gep;
	for (int i = 0; i < DISPLAYSIZE; i++)
	{
		gep = i - DISPLAYSIZE / 2;
		if (this->mapp[gep + xco].cloud)
			this->display[0][i] = '%';
		else
			this->display[0][i] = ' ';

		this->display[1][i] = ' ';

		if (this->mapp[gep + xco].box)
		{
			this->display[2][i] = 'A';
			this->display[3][i] = 'x';
		}
		else
		{
			this->display[2][i] = ' ';
			this->display[3][i] = ' ';
		}

		if (gep == 0)
		{
			this->display[2][i] = '0';
			this->display[3][i] = 'I';
		}
	}
}

void GameStart::displayOut()
{
	system("cls");
	//2021-08-03
}

void GameStart::run()
{
	int cox = 20, inp;
	this->mapLoad();
	time_t timeStart, timeEnd;
	while (1)
	{
		timeStart = time(NULL);
		this->displayLoad(cox);
		this->displayOut();
		cout << cox << endl;
		while (1)
		{
			timeEnd = time(NULL);
			if ((double)(timeEnd - timeStart) > 0.001)
				break;
		}
		inp = kin.inputKey();
		if (inp == LEFTKEY)
		{
			if (cox > 20)
				cox--;
		}
		else if (inp == RIGHTKEY)
		{
			//2021-08-03
		}
		else if (inp == AKEY)
		{
			//2021-08-03
		}
	}
}