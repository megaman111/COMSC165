#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int WordsPerSentence (const string& sentence);

int main ()
{
  int wordCount = 0, sentenceCount = 0;

  fstream dataFile ("declarationofind", ios::in);
  
  if (dataFile.fail ())
  {
    cout << "Error! The file did not open correctly." << endl;
    return 1;
  }

  string line;
  const char EOL = '.';
  
  while (getline (dataFile, line, EOL))
  {
    sentenceCount++;
    wordCount += WordsPerSentence (line);
  }
  cout << "The file contains " << sentenceCount << " sentences, and " << wordCount << " words in it." << endl;
  double averageWords = double (wordCount) / double (sentenceCount);
  cout << "There is an average of " << averageWords << " words per sentence." << endl; 
  return 0;
}

int WordsPerSentence (const string& sentence)
{
  int count = 0;
  istringstream iss (sentence);
  string word;

  while (iss >> word)
  {
    count++;
  }

  return count;
}