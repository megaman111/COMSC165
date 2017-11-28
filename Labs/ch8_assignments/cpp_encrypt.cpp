#include <fstream> //file stream
#include <iostream> //used for input output to the console
#include <string> //used to add strings
using namespace std;

//main program
int main()
{
  //Data
  string objective = "encode a string into an the each character's ascii string plus 1";
  int i; // loop index
  ifstream fin; // input files
  string line; //used for line output
  ofstream fout; //output file
  string fileInput;
  string fileOutput;
  cout << "Enter the name of the input file: ";
  getline(cin,fileInput); // input
  //Checking for good input file
  fin.open(fileInput.c_str());
  if (!fin.good()) throw "I/O error";
  //Checking for good output file
  cout << "Enter the name of the output file: ";
  getline(cin,fileOutput);
  fout.open(fileOutput.c_str(), ios::out);
  if (!fout.good()) throw "I/O error";
  
  while (getline (fin, line))
  {
    for (int i = 0; i < line.length(); i++) // for each char in the string...
      line[i]++; // bump the ASCII code down by 1

    fout << line << endl; // display on screen
    cout << "Your encoded text: " << line << endl;
  }	
}//main