// CodeHunter.cpp : Defines the entry point for the console application.
//This is the debugged version of the original code

//We omitted "pch.h" since we don't need it at all
//We then reference our headers
#include <iostream>
#include <string>

//We also reference the library namespace that we are using.
using namespace std;


int main()
{
	string textToAnalyze; //This is the screen for whenever the program asked us to display text			
	//int foo = 0; This code is not being used in any of this code
	int vowels = 0; //We keep track of the amount of vowels
	int consonants = 0; //consonants
	int digits = 0;	//digits
	int spaces = 0; //spaces (including tabs)
	int unknownCharacters = 0; //and any unrecognizable character will be recorded with these variables
	int lengthOfStringSubmittedForAnalysis = 0; //This will represent textToAnalyze.length(), which you will see later in this code.
	int checkSum = 0; //It'll add the total amount of characters together.
	//int bar = 0; This is also not referenced within this code.

	//We are then introduced to the program
	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;

	//We type out our text here.
	getline(cin, textToAnalyze);

	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			//--vowels is the original code, but you ask yourself, "Why is the incrementation going through the negative.
			//so --vowels was changed to ++vowels;
			++vowels;
		}
		//now we check the entire alphabet (lower or uppercase),
		//This was a working statement in the program;
		//No changes was add except in the statement's code block
		else if ((textToAnalyze[i] >= 'a' && textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A' && textToAnalyze[i] <= 'Z'))
		{
			//The incrementation of the consonants variable was actually implemented as a comments.
			//This make this else if statement an empty one, so the amount of consonants in the code
			//couldn't get recorded.
			++consonants;
		}
		//We now count the amount of digits present in the text. This statement had no
		//error, so there was no changes.
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits;
		}
		//We find any whitespace that may be found in the text. This also had no errors
		else if (textToAnalyze[i] == ' ')
		{
			++spaces;
		}
		//We check for any other existing characters. Those are recorded here!
		else
		{
			++unknownCharacters;
		}
	}

	lengthOfStringSubmittedForAnalysis = textToAnalyze.length(); //We then get the length of the text that the user types in.
	checkSum = unknownCharacters + vowels + consonants + digits + spaces; //Check sum is the cumulation of all existing characters.


	//Finally we print the amount of vowels, consonants, digits, whitespaces, unknown characters, the length of our text, and the total amount of character in our code.
	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	//This is our error handeling statement.
	//It doesn't uses error exceptions, but instead check rather the calculations are truly what they are.
	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		//This means all of our statistics were recorded and calculated successfully
		cout << "This program self checking has found this analysis to be valid." << endl;
	}
	else
	{
		//However, whenever we had the errors in our code, it would interfere with the calculation
		//of our stats, therefore, it would give us this message here.
		cout << "WARNING! *** This program self checking has found this analysis to be invalid! Do not use this data!" << endl;
	}

	//I went ahead and lowercased "analysis". They were capitalized in the original code.

	system("pause"); //The system then pauses until the user hits a key.

	return 0; //The program returns a zero, telling us that there was no errors found.
}

/*
Now we show the original code for comparing and contrasting.

// CodeHunter.cpp : Defines the entry point for the console application.
//
#include "pch.h" // This line only needed for console C++ project, omit this for Empty C++ Project.
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string textToAnalyze;
	int foo = 0;
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	int unknownCharacters = 0;
	int checkSum = 0;
	int bar = 0;

	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze);

	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			--vowels;
		}
		else if ((textToAnalyze[i] >= 'a'&& textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A'&& textToAnalyze[i] <= 'Z'))
		{
			//++consonants;
		}
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits;
		}
		else if (textToAnalyze[i] == ' ')
		{
			++spaces;
		}
		else
		{
			++unknownCharacters;
		}
	}

	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;

	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");

	return 0;
}

*/