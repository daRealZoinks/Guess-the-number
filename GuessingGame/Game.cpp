#include "Game.h"

Game::Game()
{
	srand(time(NULL));
	number = rand() % 100;
}

void Game::Play()
{
	while (true)
	{
		player1.ReadInput();

		if (player1.guess == number)
		{
			cout << "You win!" << endl;
			break;
		}
		if (player1.guess > number)
		{
			cout << "Your guess is too high." << endl;
		}
		if (player1.guess < number)
		{
			cout << "Your guess is too low." << endl;
		}

		player2.ReadInput();

		if (player2.guess == number)
		{
			cout << "You win!" << endl;
			break;
		}
		if (player2.guess > number)
		{
			cout << "Your guess is too high." << endl;
		}
		if (player2.guess < number)
		{
			cout << "Your guess is too low." << endl;
		}
	}
}