#include "Player.h"

Player::Player()
{
	guess = 0;
	std::cout << "Enter your name: ";
	std::cin >> name;
}

int Player::ReadInput()
{
	std::cout << name << ", what is your guess: ";
	std::cin >> guess;
	return 0;
}
