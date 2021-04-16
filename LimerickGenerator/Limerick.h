#pragma once
#include <vector>
#include <string>
#include <sstream>
#include <iterator>

struct Limerick {
public:

	struct Limerick_Line {
		std::string getPlaintextLine()
		{
			std::string textLine = "";
			for (int i = 0; i < (int)wordTokens.size() - 1; i++)
			{
				textLine += wordTokens[i] + " ";
			}
			textLine += wordTokens[wordTokens.size() - 1];

			return textLine;
		}

		Limerick_Line()
		{

		}

		Limerick_Line(std::string line)
		{
			std::istringstream iss(line);
			std::string word;
			while (std::getline(iss, word, ' '))
			{
				wordTokens.push_back(word);
			}

			//TODO init syllable_count
		}

		Limerick_Line(const Limerick_Line& rhs)
		{
			wordTokens = rhs.wordTokens;
			//syllable_count = rhs.syllable_count;
		}

		std::vector<std::string> wordTokens;
		//int syllable_count;
	};

	Limerick();
	Limerick(std::string limerick);
	Limerick(Limerick_Line lines[5]);
	~Limerick();

	void printFormattedLimerick();

	Limerick_Line lines[5];

};