// Keanu Aloua
// December 12, 2021
// Word analyzer source file

#include <iostream>
#include <string>
#include <vector>
using namespace std;
    
int countLetters(string s)
{
    int letterCount = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) 
        {
            letterCount++;
        }
    }

    return letterCount; 
}

int countLowerCase(string s)
{
    int lowerCount = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z') 
        {
            lowerCount++;
        }
    }

    return lowerCount;
}

int countUpperCase(string s)
{
    int upperCount = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') 
        {
            upperCount++;
        }
    }

    return upperCount;
}

int countVowels(string s)
{
    int vowelCount = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') 
        {
            vowelCount++;
        }
        else if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') 
        {
            vowelCount++;
        }
    }

    return vowelCount;
}