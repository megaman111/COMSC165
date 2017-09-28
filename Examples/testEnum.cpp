#include <iostream>
using namespace std;

enum Day { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
string weekday[6] = {"", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
int main(){
    int day = TUESDAY;
    cout << "The work day is " << weekday[day] << endl;
    cout << "On " << weekday[day] << " I do this!";
}