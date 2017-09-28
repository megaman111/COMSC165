///****************************************************************************
/// Description: This program sorts and delimits C Strings in Ascending and Descending orders.
/// Author: Joseph Gertler
/// COMSC 165 Section 3020
/// Date: ___DATE___
/// Status :  
///****************************************************************************
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
void format();
int main() {
    cout << "enter your string delimited by space: ";
    string line, s; //making two strings, s and line, in order to delimit by spaces
    getline(cin, line);
    cout << "you have entered: " << line << endl;
    vector <string> vs; //define vector vs
    vector <const char*> cs; // define constant character vector cs; 
    stringstream ss(line); //init stringstream
    while(getline(ss, s, ' ')) //push back vector s
        vs.push_back(s);
    cout << "Sorting to ascending and decending orders:" << endl;
    auto str_compare = [] (string s1, string s2) {return (s1 > s2);};
    auto str_decompare = [](string s1, string s2) {return (s1 < s2);};
    sort(vs.begin(), vs.end(), str_decompare);
    for (auto x:vs) cout << x << " "; cout << endl;
    sort(vs.begin(), vs.end(), str_compare);
    for (auto x:vs) cout << x << " "; cout << endl;
}

void format(){
cout << setfill('_') << setw(80) << endl;
cout << " " << endl;
}
