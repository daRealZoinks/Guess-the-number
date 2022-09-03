#pragma once

#include "Player.h"

class Game
{
public:
	Game();
	void Play();
private:
	int number;
	Player player1;
	Player player2;
};
