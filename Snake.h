#pragma once
#include "GameField.h"

class Snake
{
protected:
	
public:
	int snakeX, snakeY;
	int snakeDirectiton;

	void SnakeMovement();
	void SnakeChangeMovement(int newDirection);
};

