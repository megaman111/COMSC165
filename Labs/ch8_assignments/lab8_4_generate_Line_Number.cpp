
#include <stdio.h>

#include<iostream>

#include<fstream>

#include<string>

#include<iomanip>


using namespace std;


int main(){
    string filename;
    fstream fin;
    char lines[120];
    cout << "Enter a Filename: ";
    cin >> filename;
    fin.open(filename.c_str(), ios::in);
    
    if(!fin){
        cout <<"Error opening file!";
    }
    else{
        int counter = 1;
        while(!fin.eof()){
            if(counter > 24){
                getchar();
                counter = 1;
                }
                fin.getline(lines,121,'\n');
                cout << counter << ":" << lines << endl;
                counter++;
            }
        }
    }
