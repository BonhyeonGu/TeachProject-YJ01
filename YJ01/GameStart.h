#pragma once
#include <string>
#include "Co.h"
#define MAPSIZE 100
#define DISPLAYSIZE 31

using namespace std;

class GameStart
{
private:
	Co mapp[MAPSIZE];
	string display[4][DISPLAYSIZE];
	bool ran(int per);

	void mapLoad();
	void displayLoad(int xco);
	void displayOut();
public:


	void run();
};
