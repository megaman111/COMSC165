///****************************************************************************
/// Description: Displays movie data statistics
/// Author: Joseph Gertler
/// COMSC 165 Section 3020
/// Date: ___DATE___
/// Status : Incomplete 
///****************************************************************************
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int maxstudents;

/*struct MovieData {
    string title;
    string director;
    int year;
    int length;
};
MovieData a, b, c; 
MovieData d[3];
MovieData *p;
void display(MovieData, MovieData a){
    cout << "\n Movie Name: " << a.title << endl;
    cout << "\n Director: " << a.director << endl;
    cout << "\n Movie Year: " << a.year << endl;
    cout << "\n Movie Length: " << a.length << endl;
}
*/
int main() {
    //MovieData a1, a2;
    cout << "How many students were surveyed?: " << endl;
    cin >> maxstudents;
    cin.ignore(1000,10);
    
    const int MAX_ELEMENTS = maxstudents;
    int movies[MAX_ELEMENTS];
    
    for(int i=0; i<maxstudents; i++){
    cout << "Enter " << maxstudents << " values, each value representing how many movies each student saw this month: " << endl;
    cin >> movies[i]; 
    cin.ignore(1000,10);
    if(movies[i] < 0){
        cout << "Not a valid value: quitting" << endl;
        break;
    }
  }
}

    