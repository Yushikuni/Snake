#include "GameField.h"

void GameField::renderGamingField(int SIRKA_HERNIHO_POLE, int VYSKA_HERNIHO_POLE)
{
	for (int i = 0; i < VYSKA_HERNIHO_POLE; ++i)
	{
		for (int j = 0; j < SIRKA_HERNIHO_POLE; ++j)
		{
			if (i == Food::foodY && j == Food::foodX)
			{
				std::cout << "0";
			}
			else if (i == Snake::snakeX && j == Snake::snakeX)
			{
				std::cout << "X";
			}
			else
			{
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
}