// Keanu Aloua
// December 11, 2021
// Reviewing CS 202
// This program will practice File IO, Standard IO, and the string library

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#include "word_analyzer.h"

int getWords(vector<string> &v, string filename);
string findMaxWord(vector<string> v, int vectorSize);

int main(int argc, char* argv[]) 
{
    vector<string> poem;
    int wordAmount, letterCount = 0, lowerCount = 0, upperCount = 0, vowelCount = 0;
    string maxWord, tempWord;

    // Checks to see if there are two command line arguments
    if (argc != 2)
    {        
        cout << "Correct usage: " << endl;
        cout << "./text_analyzer filename" << endl;
        return 0; // Returning 1 is an error code, ends program
    }

    string filename = argv[1];

    wordAmount = getWords(poem, filename);

    // End program if file can not be opened
    if (wordAmount == 1) {
        return 0;
    }

    // Calls to find which word comes first alphabetically
    maxWord = findMaxWord(poem, wordAmount);

    // Loops through the vector to find letter counts
    for (int i = 0; i < wordAmount; i++)
    {
        tempWord = poem[i];
        letterCount += countLetters(tempWord);
        lowerCount += countLowerCase(tempWord);
        upperCount += countUpperCase(tempWord);
        vowelCount += countVowels(tempWord);
    }

    // Outputs results to the user
    cout << "There are " << letterCount << " letters in your file." << endl;
    cout << "There are " << lowerCount << " lower case letters in your file." << endl;
    cout << "There are " << upperCount << " upper case letters in your file." << endl;
    cout << "There are " << vowelCount << " vowels in your file." << endl;
    cout << "The last word alphabetically is: " << maxWord << endl;

    return 0;
}

int getWords(vector<string> &v, string filename) 
{
    int count;
    string temp;

    ifstream infile;
    infile.open(filename); // Opens the file with the given filename.

    // Checks if the file failed to be opened
    // Use .is_open() to see if the file was opened successfully
    if (infile.fail()) 
    {
        cout << "\"" << filename << "\" can not be opened." << endl;
        return 1;
    }

    // DO THIS AND NOT "while(!infile.eof()" because it repeats last element
    while (infile >> temp)
    {
        v.push_back(temp);
        count++;
    }

    infile.close();

    return count;
}

string findMaxWord(vector<string> v, int vectorSize) 
{
    string max;

    // The sort function, sorts the vector alphabetically
    sort(v.begin(), v.end());

    max = v[vectorSize - 1];

    return max;
}
