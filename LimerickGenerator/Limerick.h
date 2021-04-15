#pragma once
#include <vector>
#include <string>

struct Limerick {
public:

	struct Limerick_Line {
		std::string GetPlaintextLine()
		{
			std::string textLine = "";
			for (int i = 0; i < wordTokens.size() - 1; i++)
			{
				textLine += wordTokens[i] + " ";
			}
			textLine += wordTokens[wordTokens.size() - 1];

			return textLine;
		}

		std::vector<std::string> wordTokens;
		std::string rhyme;
		int syllable_count;
	};

	Limerick();
	~Limerick();

	std::string GetFormattedLimerick();

	Limerick_Line lines[5];

};