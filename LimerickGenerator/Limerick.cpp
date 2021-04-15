#include "Limerick.h"
#include <iostream>

Limerick::Limerick()
{

}

Limerick::~Limerick()
{

}

std::string Limerick::GetFormattedLimerick()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << lines[i].GetPlaintextLine() + '\n';
	}
}
