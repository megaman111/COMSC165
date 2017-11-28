// ifstream and ofstream style
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string fileName, outFileName, input;
    
    cout << "Enter the file name: ";
    getline(cin, fileName); // 0 have the file name
    
    fstream file(fileName, ios::in | ios::out ); // 1 declare and open a file handle
    if(!file) {
        cout << "Something wrong with file opening!\n";
        exit(1);
    }
    
    while(!file.eof()) {
        getline(file, input, '\n');
        cout << input << endl;
    }
    
    file << "\nThis is the end.";
    file.close(); // 3 close the file before leaving
}