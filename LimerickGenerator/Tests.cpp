#include "Limerick.h"
#include <iostream>

bool validateLimerick(Limerick limerick)
{
	return false;
}

bool testLimerickValidator()
{
	Limerick rightLimerick = Limerick("There was an old man with a beard\nwho said it is just as I feared\ntwo owls and a hen\nfour larks and a wren\nhave all built their nests in my beard");
	Limerick wrongLimerick1 = Limerick("This limerick is only two lines\nbut eight syllables and it rhymes");
	Limerick wrongLimerick2 = Limerick("This limerick is the right number\nof syllables but it doesn't rhyme\nthis one does not\nneither this one\nthis one has eight syllables too");
	Limerick wrongLimerick3 = Limerick("Very big\npig\nbook and\ncrook\nseventeen gig");

	bool succeeded = true;

	std::cout << "Validator Test 1:\n";
	if (validateLimerick(rightLimerick))
	{
		std::cout << "Test succeeded.\n";
	}
	else
	{
		std::cout << "Test failed; did not validate correct limerick as correct.\n";
		succeeded = false;
	}

	std::cout << "Validator Test 2:\n";
	if (validateLimerick(wrongLimerick1))
	{
		std::cout << "Test failed; validated limerick with two lines.\n";
		succeeded = false;
	}
	else
	{
		std::cout << "Test succeeded.\n";
	}

	std::cout << "Validator Test 3:\n";
	if (validateLimerick(wrongLimerick2))
	{
		std::cout << "Test failed; validated limerick that doesn't rhyme.\n";
		succeeded = false;
	}
	else
	{
		std::cout << "Test succeeded.\n";
	}

	std::cout << "Validator Test 4:\n";
	if (validateLimerick(wrongLimerick3))
	{
		std::cout << "Test failed; validated limerick with inconsistant syllables.\n";
		succeeded = false;
	}
	else
	{
		std::cout << "Test succeeded.\n";
	}

	return succeeded;
}

/*
#include "pch.h"
#include "CppUnitTest.h"

#include <iostream>
#include <map>
#include <string>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace LimerickGenerator
{

	TEST_CLASS(TestLimerickGenerator)
	{

	public:
		map<string, int> uInput1;
		map<string, int> uInput2;
		map<string, int> uInputInvalid;

		TestLimerickGenerator() {
			uInput1["There once was a man from nantucket"] = 9;
			uInput1["the limerick packs laughs anatomical?"] = 10;
			uInput1["There wasn't a lady of station"] = 9;
			uInput1["There was an Old Man in a tree!"] = 8;
			uInput1["A man hired by John Smith and Co."] = 9;

			uInput2["But the good ones I've seen  "] = 6;
			uInput2["Until she fell down,"] = 5;
			uInput2[" He was asked what they said"] = 6;
			uInput2["Two Owls and a Hen"] = 5;
			uInput2["But its colour and size."] = 6;

			uInputInvalid[""] = 0;
			uInputInvalid["too short"] = 0;
			uInputInvalid["`this 1nput (ontains inv@lid charact3rs"] = 0;
			uInputInvalid["hello this is line is too long for a limerick"] = 0;
			uInputInvalid["                  "] = 0;
			uInputInvalid["\n"] = 0;

		}

		TEST_METHOD(test_syllable_count) {
			for (auto input : uInput1) {
				int actual = syllable_count(input.first);
				Assert::AreEqual(input.second,actual );
			}
			for (auto input : uInput2) {
				int actual = syllable_count(input.first);
				Assert::AreEqual(input.second, actual);
			}
		}
		TEST_METHOD(test_syllable_count_invalid) {
			for (auto input : uInputInvalid) {
				auto func = [&] { syllable_count(input.first); };
				Assert::ExpectException<std::invalid_argument>(func);
			}
		}

		TEST_METHOD(second_line_gen_valid)
		{
			for (auto input : uInput1) {

				string second_line = generateLine(input.first);
				int actual = syllable_count(second_line);
				Assert::AreEqual(input.second, actual);
			}
		}

		TEST_METHOD(test_second_line_gen_invalid) {
			for (auto input : uInputInvalid) {
				auto func = [&] { generateLine(input.first); };
				Assert::ExpectException<std::invalid_argument>(func);
			}
		}

		TEST_METHOD(ending_gen_valid)
		{

			auto a_line = uInput1.begin(), b_line = uInput2.begin();
			while (a_line != uInput1.end() || b_line != uInput2.end()) {
				string *lines;
				lines = generateLine(a_line->first,b_line->first) ;
				int actual_4th = syllable_count(lines[0]);
				int actual_5th = syllable_count(lines[1]);

				Assert::AreEqual(a_line->second, actual_4th);
				Assert::AreEqual(b_line->second, actual_5th);
				a_line++;
				b_line++;
			}
		}

		TEST_METHOD(test_ending_gen_invalid) {
			auto a_line = uInput1.cbegin(), b_line = uInput2.cbegin();
			while( a_line != uInput1.cend() || b_line != uInput2.cend()){
				auto func = [&] { generateLine(a_line->first, b_line->first); };
				Assert::ExpectException<std::invalid_argument>(func);
				a_line++;
				b_line++;
			}
		}

		// Here just so it will compile. Implement these functions.
		int syllable_count(string input) {
			return -1;
		}
		string generateLine(string line) {
			return "Wrong";
		}
		string * generateLine(string a_line, string b_line) {
			static string lines[2] = { "Wrong", "Wrong" };
			return lines;
		}
	};
}*/
