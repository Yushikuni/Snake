#pragma once
#include "GameField.h"
#include "Snake.h"	
#include <cstdlib>

class Food
{

public:
	int foodX;
	int foodY;
	void generateFood(int foodX,int foodY);
	bool snakeEatFood();
};

