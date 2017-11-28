#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void readAndWrite();
string inputF,outputF;

int main()
{
   cout<<"Enter the file name with full path you want to process:\n";
   cin>>inputF;
   ifstream f(inputF.c_str());
   if(!f)
   {
   cout<<"Input file doesn't exist.";
   return 0;
   }
   cout<<"\nInput the file name with full path for the output file you want to create:\n";
   cin>>outputF;
   readAndWrite();
   return 0;
}
/**
*User defined function
*readAndWrite()
*To read the input file and write to the uoutput file
*/
void readAndWrite()
{
   char ch;
   ofstream of;
   of.open(outputF.c_str()); //opening the input file
   if(!of) //checking whether a valid file was entered
   {
       cout<<"Output file creation failed!";
       return;
   }
   fstream file(inputF.c_str(), fstream::in);
   int flag1=0 ;
   while (file >> noskipws >> ch) //reading the file character by character
   {
if(ch=='.')
flag1 = 1; //if a period is found then assign 1 to flag
if(isalpha(ch) && flag1==1)
{
of<<(char)toupper(ch); //change to upper if flag was 1, and then change the value of flag to 0.
flag1 = 0;
   }
   else
   {
   if(isupper(ch)) //else if in uppercase then change to lower and print all other chars as is.
   of<<(char)tolower(ch);
   else
   of<<ch;
   }
  
}

   ifstream f(outputF.c_str()); //checking whether output file was created or not
   if(f)
   cout<<"Output File was created successfuly!";
   else
   cout<<"Error in creating the file.";
}