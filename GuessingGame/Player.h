#include <iostream>
#include <string>

using namespace std;

#pragma once
class Player
{
public:
	Player();
	int ReadInput();
	string name;
	int guess;
};