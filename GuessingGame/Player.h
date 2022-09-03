#pragma once

#include <iostream>
#include <string>

class Player
{
public:
	Player();
	int ReadInput();
	std::string name;
	int guess;
};
