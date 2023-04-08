
#include "Food.h"


void Food::generateFood(int foodX, int foodY)
{
	foodX = rand() % SIRKA_HERNIHO_POLE;
	foodY = rand() % VYSKA_HERNIHO_POLE;
}

bool Food::snakeEatFood()
{
	if (snakeX == foodX && snakeY == foodY)
	{
		generateFood(foodX, foodY);
		return true;
	}
	return false;
}
