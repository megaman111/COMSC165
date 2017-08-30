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
///*************************FUNCTION PROTO CODE BLOCK***************************
using namespace std;
void dropLowestScore();
double averageScore(double a, double b, double c, double d, double e);
double returnScores(double* test_score_1,double* test_score_2, double* test_score_3,double* test_score_4,double* test_score_5);
void displayGrade();
string askUserNames(string student_names[]);
void format();
char letterGrade(double score);
int main() {
///*************************CONSTANTS*******************************************
const int NUM_GRADES = 5;
const int NUM_STUDENTS = 5;
double test_score_1[NUM_GRADES],test_score_2[NUM_GRADES],test_score_3[NUM_GRADES],test_score_4[NUM_GRADES],test_score_5[NUM_GRADES];


///*************************DATA CODE BLOCK*************************************
string student_names[NUM_STUDENTS];

///*************************Processing******************************************
askUserNames(student_names);
returnScores(test_score_1,test_score_2,test_score_3,test_score_4,test_score_5);
cout << "Student #1: " << student_names[0] << endl;
format();
cout << "Test score #1 for " << student_names[0] << " : " << test_score_1[0] <<  endl;
cout << "Test score #2 for " << student_names[0] << " : " << test_score_1[1] <<  endl;
cout << "Test score #3 for " << student_names[0] << " : " << test_score_1[2] <<  endl;
cout << "Test score #4 for " << student_names[0] << " : " << test_score_1[3] <<  endl;
cout << "Test score #5 for " << student_names[0] << " : " << test_score_1[4] <<  endl;
cout << "Average score for " << student_names[0] << " : " << averageScore(test_score_1[0],test_score_1[1],test_score_1[2],test_score_1[3],test_score_1[4]) << endl;
cout << "Letter Grade for " << student_names[0] << " : " << letterGrade(averageScore(test_score_1[0],test_score_1[1],test_score_1[2],test_score_1[3],test_score_1[4])) << endl;
cout << "Student #2: " << student_names[0] << endl;
format();
cout << "Test score #1 for " << student_names[1] << " : " << test_score_2[0] <<  endl;
cout << "Test score #2 for " << student_names[1] << " : " << test_score_2[1] <<  endl;
cout << "Test score #3 for " << student_names[1] << " : " << test_score_2[2] <<  endl;
cout << "Test score #4 for " << student_names[1] << " : " << test_score_2[3] <<  endl;
cout << "Test score #5 for " << student_names[1] << " : " << test_score_2[4] <<  endl;
cout << "Average score for " << student_names[1] << " : " << averageScore(test_score_2[0],test_score_2[1],test_score_2[2],test_score_2[3],test_score_2[4]) << endl;
cout << "Letter Grade for " << student_names[1] << " : " << letterGrade(averageScore(test_score_2[0],test_score_2[1],test_score_2[2],test_score_2[3],test_score_2[4])) << endl;
cout << "Student #3: " << student_names[0] << endl;
format();
cout << "Test score #1 for " << student_names[2] << " : " << test_score_3[0] <<  endl;
cout << "Test score #2 for " << student_names[2] << " : " << test_score_3[1] <<  endl;
cout << "Test score #3 for " << student_names[2] << " : " << test_score_3[2] <<  endl;
cout << "Test score #4 for " << student_names[2] << " : " << test_score_3[3] <<  endl;
cout << "Test score #5 for " << student_names[2] << " : " << test_score_3[4] <<  endl;
cout << "Average score for " << student_names[2] << " : " << averageScore(test_score_3[0],test_score_3[1],test_score_3[2],test_score_3[3],test_score_3[4]) << endl;
cout << "Letter Grade for " << student_names[2] << " : " << letterGrade(averageScore(test_score_3[0],test_score_3[1],test_score_3[2],test_score_3[3],test_score_3[4])) << endl;
cout << "Student #4: " << endl;
format();
cout << "Test score #1 for " << student_names[3] << " : " << test_score_4[0] <<  endl;
cout << "Test score #2 for " << student_names[3] << " : " << test_score_4[1] <<  endl;
cout << "Test score #3 for " << student_names[3] << " : " << test_score_4[2] <<  endl;
cout << "Test score #4 for " << student_names[3] << " : " << test_score_4[3] <<  endl;
cout << "Test score #5 for " << student_names[3] << " : " << test_score_4[4] <<  endl;
cout << "Average score for " << student_names[3] << " : " << averageScore(test_score_4[0],test_score_4[1],test_score_4[2],test_score_4[3],test_score_4[4]) << endl;
cout << "Letter Grade for " << student_names[3] << " : " << letterGrade(averageScore(test_score_4[0],test_score_4[1],test_score_4[2],test_score_4[3],test_score_4[4])) << endl;
cout << "Student #5: " << endl;
format();
cout << "Test score #1 for " << student_names[4] << " : " << test_score_5[0] <<  endl;
cout << "Test score #2 for " << student_names[4] << " : " << test_score_5[1] <<  endl;
cout << "Test score #3 for " << student_names[4] << " : " << test_score_5[2] <<  endl;
cout << "Test score #4 for " << student_names[4] << " : " << test_score_5[3] <<  endl;
cout << "Test score #5 for " << student_names[4] << " : " << test_score_5[4] <<  endl;
cout << "Average score for " << student_names[4] << " : " << averageScore(test_score_5[0],test_score_5[1],test_score_5[2],test_score_5[3],test_score_5[4]) << endl;
cout << "Letter Grade for " << student_names[4] << " : " << letterGrade(averageScore(test_score_5[0],test_score_5[1],test_score_5[2],test_score_5[3],test_score_5[4])) << endl;
}
///*************************FUNCTION CODE BLOCK*********************************
string askUserNames(string student_names[]){
    for(int i = 0; i<5; i++){
    cout << "Enter name of student #" << (i+1) << ": ";
    getline(cin, student_names[i]);
    }
    return student_names[0,1,2,3,4];
}
double returnScores(double test_score_1[], double test_score_2[], double test_score_3[], double test_score_4[], double test_score_5[]){
    for(int i = 0; i<5; i++){
        do{
    cout << "Enter Test Score #" << (i+1) << " for Student #1: ";
    cin >> test_score_1[i];
    }while(test_score_1[i]<0||test_score_1[i]>100);
        }
 
    for(int i = 0; i<5; i++){
        do{
    cout << "Enter Test Score #" << (i+1) << " for Student #2: ";
    cin >> test_score_2[i];
    }while(test_score_2[i]<0||test_score_2[i]>100);
        }
 
    for(int i = 0; i<5; i++){
        do{
    cout << "Enter Test Score #" << (i+1) << " for Student #3: ";
    cin >> test_score_3[i];
    }while(test_score_3[i]<0||test_score_3[i]>100);
        }
        
     for(int i = 0; i<5; i++){
         do{
    cout << "Enter Test Score #" << (i+1) << " for Student #4: ";
    cin >> test_score_4[i];
    }while(test_score_4[i]<0||test_score_4[i]>100);
        }
        
    for(int i = 0; i<5; i++){
        do{
    cout << "Enter Test Score #" << (i+1) << " for Student #5: ";
    cin >> test_score_5[i];
    }while(test_score_5[i]<0||test_score_5[i]>100);
    }
    return(test_score_1[0,1,2,3,4],test_score_2[0,1,2,3,4],test_score_3[0,1,2,3,4],test_score_4[0,1,2,3,4],test_score_5[0,1,2,3,4]);
}
void format(){
cout << setfill('_') << setw(80) << endl;
cout << " " << endl;
}
char letterGrade(double score)
{

    if(score >= 90 && score <=100)
        return 'A';
     else if(score >= 80 && score <90)
         return 'B';
     else if(score >= 70 && score <80)
          return 'C';
     else if(score >= 60 && score <70)
          return 'D';
     else
          return 'F';
}
double averageScore(double a, double b, double c, double d, double e){
    return (a+b+c+d+e)/(5);
}