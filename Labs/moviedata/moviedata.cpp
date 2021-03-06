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
#include <map>
using namespace std;
int maxstudents;

/*
void display(maxstudents, int movies){
    cout << "There were " << maxstudents << " students" << endl;
        cout << "Average was " << average << endl;
        cout << "Minimum was " << minimum << endl;
        cout << "Maximum was " << maximum << endl;
        cout << "Median was " << median << endl;
        cout << "Median was";
        //This function is conceptual at this point, but I previously wrote some code for the 5 m functions, just need to figure out how to implement.
}
*/
void showArray();

int main() {
    cout << "How many students were surveyed?: " << endl;
    cin >> maxstudents;
    cin.ignore(1000,10);
    
    const int MAX_ELEMENTS = maxstudents;
    int movies[MAX_ELEMENTS];
    int i = MAX_ELEMENTS;
    for( i=0; i<maxstudents; i++){
    cout << "Enter " << maxstudents << " values, each value representing how many movies each student saw this month: " << endl;
    cin >> movies[i]; 
    cin.ignore(1000,10);
    if(movies[i] < 0){
        cout << "Not a valid value: quitting" << endl;
        //I feel like this is still storing the first value of whatever negative number is inputted upon being run, which might be a problem? I don't know.
        break;
    }
  }
      //for(int j = 0; j<maxstudents; j++)
    //cout << movies[j] << " ";
    
    double sum;
    double average, minimum=(int)INFINITY, maximum=-(int)INFINITY, median;
    map<int,int>modes;
    vector<int>data;
    int count,mxmode=0;
    // initialise
    sum = 0.0;
    count = 0;

    while (cin >> movies[i])
    {
        // process value
        sum += movies[i];
        count++;
        if (movies[i] > maximum)
            maximum = movies[i];
        else if (movies[i] < minimum)
            minimum = movies[i];

        modes[ movies[i] ]++;
        mxmode = max(mxmode, modes[movies[i]]);
        data.push_back(movies[i]);
    }
    if (count == 0)
        cout << "No data entry" << endl;
    else
    {
        average = sum / count;

        sort(data.begin(), data.end());

        if(data.size()%2==0) median = ( data[ data.size()/2 - 1 ] + data[ data.size()/2 ] )/2.0;
        else median = data[ data.size()/2 ];

        cout << "There were " << count << " numbers" << endl;
        cout << "Average was " << average << endl;
        cout << "Minimum was " << minimum << endl;
        cout << "Maximum was " << maximum << endl;
        cout << "Median was " << median << endl;
        cout << "Median was";

        for (auto &x: modes)
            if(x.second == mxmode) cout<<" "<<x.first;

        cout<<" ("<<mxmode<<")" << endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
    