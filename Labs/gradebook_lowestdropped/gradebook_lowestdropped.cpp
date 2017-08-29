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
double test_score_1[4],test_score_2[4],test_score_3[4],test_score_4[4],test_score_5[4];

///*************************FUNCTION PROTO CODE BLOCK***************************
void dropLowestScore();
double returnAverage(double* test_score_1,double* test_score_2, double* test_score_3,double* test_score_4,double* test_score_5);
void displayGrade();
string askUserNames(string student_names[]);
void format();
///*************************DATA CODE BLOCK*************************************
string student_names[NUM_STUDENTS];
char letter_grade[NUM_GRADES] = {'A','B','C','D','F'};

///*************************Processing******************************************
askUserNames(student_names);
returnAverage(test_score_1,test_score_2,test_score_3,test_score_4,test_score_5);
cout << "Student #1: " << endl;
format();
cout << student_names[0] << endl;
cout << "Test score #1 for " << student_names[0] << " : " << test_score_1[0] <<  endl;
cout << "Test score #2 for " << student_names[0] << " : " << test_score_1[1] <<  endl;
cout << "Test score #3 for " << student_names[0] << " : " << test_score_1[2] <<  endl;
cout << "Test score #4 for " << student_names[0] << " : " << test_score_1[3] <<  endl;
cout << "Test score #5 for " << student_names[0] << " : " << test_score_1[4] <<  endl;
cout << "Student #2: " << endl;
format();
cout << "Test score #1 for " << student_names[1] << " : " << test_score_2[0] <<  endl;
cout << "Test score #2 for " << student_names[1] << " : " << test_score_2[1] <<  endl;
cout << "Test score #3 for " << student_names[1] << " : " << test_score_2[2] <<  endl;
cout << "Test score #4 for " << student_names[1] << " : " << test_score_2[3] <<  endl;
cout << "Test score #5 for " << student_names[1] << " : " << test_score_2[4] <<  endl;
cout << "Student #3: " << endl;
format();
cout << "Test score #1 for " << student_names[2] << " : " << test_score_3[0] <<  endl;
cout << "Test score #2 for " << student_names[2] << " : " << test_score_3[1] <<  endl;
cout << "Test score #3 for " << student_names[2] << " : " << test_score_3[2] <<  endl;
cout << "Test score #4 for " << student_names[2] << " : " << test_score_3[3] <<  endl;
cout << "Test score #5 for " << student_names[2] << " : " << test_score_3[4] <<  endl;
cout << "Student #4: " << endl;
format();
cout << "Test score #1 for " << student_names[3] << " : " << test_score_4[0] <<  endl;
cout << "Test score #2 for " << student_names[3] << " : " << test_score_4[1] <<  endl;
cout << "Test score #3 for " << student_names[3] << " : " << test_score_4[2] <<  endl;
cout << "Test score #4 for " << student_names[3] << " : " << test_score_4[3] <<  endl;
cout << "Test score #5 for " << student_names[3] << " : " << test_score_4[4] <<  endl;
cout << "Student #5: " << endl;
format();
cout << "Test score #1 for " << student_names[4] << " : " << test_score_5[0] <<  endl;
cout << "Test score #2 for " << student_names[4] << " : " << test_score_5[1] <<  endl;
cout << "Test score #3 for " << student_names[4] << " : " << test_score_5[2] <<  endl;
cout << "Test score #4 for " << student_names[4] << " : " << test_score_5[3] <<  endl;
cout << "Test score #5 for " << student_names[4] << " : " << test_score_5[4] <<  endl;
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
    cout << "Enter Test Score 1 for Student #1:";
    cin >> test_score_1[0];
    cout << "Enter Test Score 2 for Student #1:";
    cin >> test_score_1[1];
    cout << "Enter Test Score 3 for Student #1:";
    cin >> test_score_1[2];
    cout << "Enter Test Score 4 for Student #1:";
    cin >> test_score_1[3];
    cout << "Enter Test Score 5 for Student #1:";
    cin >> test_score_1[4];
    cout << "Enter Test Score 1 for Student #2:";
    cin >> test_score_2[0];
    cout << "Enter Test Score 2 for Student #2:";
    cin >> test_score_2[1];
    cout << "Enter Test Score 3 for Student #2:";
    cin >> test_score_2[2];
    cout << "Enter Test Score 4 for Student #2:";
    cin >> test_score_2[3];
    cout << "Enter Test Score 5 for Student #2:";
    cin >> test_score_2[4];
    cout << "Enter Test Score 1 for Student #3:";
    cin >> test_score_3[0];
    cout << "Enter Test Score 2 for Student #3:";
    cin >> test_score_3[1];
    cout << "Enter Test Score 3 for Student #3:";
    cin >> test_score_3[2];
    cout << "Enter Test Score 4 for Student #3:";
    cin >> test_score_3[3];
    cout << "Enter Test Score 5 for Student #3:";
    cin >> test_score_3[4];
    cout << "Enter Test Score 1 for Student #4:";
    cin >> test_score_4[0];
    cout << "Enter Test Score 2 for Student #4:";
    cin >> test_score_4[1];
    cout << "Enter Test Score 3 for Student #4:";
    cin >> test_score_4[2];
    cout << "Enter Test Score 4 for Student #4:";
    cin >> test_score_4[3];
    cout << "Enter Test Score 5 for Student #4:";
    cin >> test_score_4[4];
    cout << "Enter Test Score 1 for Student #5:";
    cin >> test_score_5[0];
    cout << "Enter Test Score 2 for Student #5:";
    cin >> test_score_5[1];
    cout << "Enter Test Score 3 for Student #5:";
    cin >> test_score_5[2];
    cout << "Enter Test Score 4 for Student #5:";
    cin >> test_score_5[3];
    cout << "Enter Test Score 5 for Student #5:";
    cin >> test_score_5[4];
    return(test_score_1[0,1,2,3,4],test_score_2[0,1,2,3,4],test_score_3[0,1,2,3,4],test_score_4[0,1,2,3,4],test_score_5[0,1,2,3,4]);
}
void format(){
cout << setfill('_') << setw(80) << endl;
cout << " " << endl;
}