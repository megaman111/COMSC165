///****************************************************************************
/// Description: This program allow the user to enter each student’s
/// name and his or her four test scores, and should drop each student’s 
/// lowest score, then calculate and display each student’s average test score
/// and then, give a letter grade based on the average
/// Do not accept test scores less than 0 or greater than 100.
/// Author: Joseph Gertler
/// COMSC 165 Section 3020
/// Date: August 22, 2017
/// Status : Incomplete 
///*****************************************************************************
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
///*************************CONSTANTS*******************************************
const int NUM_GRADES = 5;
const int NUM_STUDENTS = 5;


///*************************FUNCTION PROTO CODE BLOCK***************************
void dropLowestScore();
double returnAverage(double test_score_1,double test_score_2, double test_score_3,double test_score_4,double test_score_5);
void displayGrade();
string askUserNames(string student_names[]);
void format();
///*************************DATA CODE BLOCK*************************************
string student_names[NUM_STUDENTS];
char letter_grade[NUM_GRADES] = {'A','B','C','D','F'};

///*************************Processing******************************************
askUserNames(student_names);
cout << "Student #1: " << student_names[0] << endl;
cout << setfill('_') << setw(80) << endl;
cout << " " << endl;
cout << "Student #2: " << student_names[1] << endl;
cout << setfill('_') << setw(80) << endl;
cout << " " << endl;
cout << "Student #3: " << student_names[2] << endl;
cout << setfill('_') << setw(80) << endl;
cout << " " << endl;
cout << "Student #4: " << student_names[3] << endl;
cout << setfill('_') << setw(80) << endl;
cout << " " << endl;
cout << "Student #5: " << student_names[4] << endl;
cout << setfill('_') << setw(80) << endl;
cout << " " << endl;
}
///*************************FUNCTION CODE BLOCK*********************************
string askUserNames(string student_names[]){
    cout << "Enter name of student #1: ";
    getline(cin, student_names[0]);
    cout << "Enter name of student #2: ";
    getline(cin, student_names[1]);
    cout << "Enter name of student #3: ";
    getline(cin, student_names[2]);
    cout << "Enter name of student #4: ";
    getline(cin, student_names[3]);
    cout << "Enter name of student #5: ";
    getline(cin, student_names[4]);
    return student_names[0,1,2,3,4];
}
double returnAverage(double test_score_1[], double test_score_2[], double test_score_3[], double test_score_4[], double test_score_5[]){
}
void format(int studentnum){
cout << "Student #" << studentnum << ": " << endl;
cout << setfill('_') << setw(80) << endl;
cout << " " << endl;
}