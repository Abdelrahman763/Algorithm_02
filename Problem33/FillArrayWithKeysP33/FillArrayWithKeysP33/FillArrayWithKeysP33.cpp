
#include <iostream>
#include <string>
using namespace std;

enum enCharType { LowerCase = 1, UpperCase = 2, Digit = 3, SpecialChar = 4 };

int getRandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

char CheckRandomChar(enCharType charType)
{
    switch (charType)
    {
    case LowerCase:
        return char(getRandomNumber(97, 122));
        break;
    case UpperCase:
        return char(getRandomNumber(65, 90));
        break;
    case Digit:
        return char(getRandomNumber(48, 57));
        break;
    case SpecialChar:
        return char(getRandomNumber(33, 47));
        break;
    default:
        return '\n';
        break;
    }
}

string GenerateWord( enCharType CharType, int length)
{
	string word = "";

    for (int i = 0; i < length; i++)
    {
		word = word + CheckRandomChar(CharType);
    }
	return word;
}

string GenerateKey()
{
	string key = "";    

	key = GenerateWord(UpperCase, 4) + "-";
	key = key + GenerateWord(Digit, 4) + "-";
	key = key + GenerateWord(LowerCase, 4) + "-";
	key = key + GenerateWord(SpecialChar, 4);
	
    return key;
}

void FillKeysArray( string arr[], int& ArrLength)
{
	cout << "Please enter the number of keys you want to generate: \n";
	cin >> ArrLength;

    for (int i = 0; i < ArrLength; i++)
    {
		arr[i] = GenerateKey();
    }
}

void PrintArray(string arr[], int ArrLength)
{
    for(int i =0 ;i < ArrLength ; i++)
    {
        cout << "arr[" << i << "]" << " : ";
		cout << arr[i] << endl;
	}
}
int main()
{
	srand((unsigned)time(NULL));

	string keys[100];
    int Arrlength;

	FillKeysArray(keys, Arrlength);

    PrintArray(keys, Arrlength);
	return 0;
}

