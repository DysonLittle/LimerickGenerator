#include "Limerick.h"
#include <iostream>

Limerick::Limerick()
{

}

Limerick::Limerick(std::string limerick)
{
	std::istringstream iss(limerick);
	std::string line;
	int i = 0;
	for (int i = 0; i < 5; i++)
	{
		std::getline(iss, line, '\n');
		lines[i] = Limerick_Line(line);
	}
}

Limerick::Limerick(Limerick_Line lines[5])
{
	for (int i = 0; i < 5; i++)
	{
		this->lines[i] = lines[i];
	}
}

Limerick::~Limerick()
{

}

void Limerick::printFormattedLimerick()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << lines[i].getPlaintextLine() + '\n';
	}
}
