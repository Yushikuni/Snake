#include "Snake.h"
#include "GameField.h"

void Snake::SnakeMovement()
{
	switch (snakeDirectiton)
	{
		case 1: //UP
		{
			snakeX++;
			break;
		}
		case 2: //down
		{
			snakeY--;
			break;
		}
		case 3: //left
		{
			snakeX--;
			break;
		}
		case 4: //right
		{
			snakeY++;
			break;
		}
	}
	//check if snake is at the eage
	if (snakeX < 0)
	{
		snakeX = SIRKA_HERNIHO_POLE - 1;
	}
	if (snakeX >= SIRKA_HERNIHO_POLE)
	{
		snakeX = 0;
	}
	if (snakeY < 0)
	{
		snakeY = VYSKA_HERNIHO_POLE - 1;
	}
	if (snakeY >= VYSKA_HERNIHO_POLE)
	{
		snakeY = 0;
	}
}

void Snake::SnakeChangeMovement(int newDirection)
{
	//if(newDirection == )
}