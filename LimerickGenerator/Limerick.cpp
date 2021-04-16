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
	//this might not work
	std::getline(iss, line, ',');
	if (line != "")
	{
		std::cout << "Warning: detected limerick with more than five lines!\n";
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

std::string Limerick::getFormattedLimerick()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << lines[i].getPlaintextLine() + '\n';
	}
}
