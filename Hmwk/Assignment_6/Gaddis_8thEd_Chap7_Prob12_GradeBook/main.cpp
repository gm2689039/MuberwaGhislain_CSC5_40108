/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on February 5, 2017, 11:30 PM
  Purpose:  collect five students' information and scores from four tests
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const int NUMBER_OF_TESTS = 4;
const int NUMBER_OF_STUDENTS = 5;
string studentNames[NUMBER_OF_STUDENTS];
char studentGrades[NUMBER_OF_STUDENTS];          //Hold student's grade
    //Array to hold each student's scores
    double student1Scores[NUMBER_OF_TESTS];
    double student2Scores[NUMBER_OF_TESTS];
    double student3Scores[NUMBER_OF_TESTS];
    double student4Scores[NUMBER_OF_TESTS];
    double student5Scores[NUMBER_OF_TESTS];
    
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
void getScores(double []);
char averageGrade(double[]);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
               
    int position = 0;
    cout << setprecision(2) << fixed << showpoint;
 
    
    //Input values for student 1
    cout << "What is the name of student 1: ";
    cin >> studentNames[position];
    getScores(student1Scores);              //Acquire test scores of students
    //Find the average score and letter grade
    studentGrades[position] = averageGrade(student1Scores); 
    cout << endl;

    //Input values for student 2 
    position++;
    cout << "What is the name of student 2: ";
    cin >> studentNames[position];
    getScores(student2Scores);              //Acquire test scores of students
    //Find the average score and letter grade
    studentGrades[position] = averageGrade(student2Scores);    
    cout << endl;

    //Input values for student 3 
    position++;
    cout << "What is the name of student 3: ";
    cin >> studentNames[position];
    getScores(student3Scores);              //Acquire test scores of students
    //Find the average score and letter grade
    studentGrades[position] = averageGrade(student3Scores);   
    cout << endl;
    
    //Input values for student 4 
    position++;
    cout << "What is the name of student 4: ";
    cin >> studentNames[position];
    getScores(student4Scores);              //Acquire test scores of students
    //Find the average score and letter grade
    studentGrades[position] = averageGrade(student4Scores);   
    cout << endl;

    //Input values for student 5 
    position++;
    cout << "What is the name of student 5: ";
    cin >> studentNames[position];
    getScores(student5Scores);              //Acquire test scores of students
    //Find the average score and letter grade
    studentGrades[position] = averageGrade(student5Scores);    
    cout << endl;
    
    //Display student's name and their grade
    cout << "Student\tGrade" << endl;
    for(int i = 0; i < NUMBER_OF_STUDENTS; i++){
        cout << studentNames[i] << "\t" << studentGrades[i] << endl;
    }

    //Exit stage right!
    return 0;
}

//collect student's grade
void getScores(double scores[]){

    cout << "What are your scores: " << endl;
    for(int i = 0; i < NUMBER_OF_TESTS; i++){
        cout << "Question #" << (i + 1) << ": ";
        cin >> scores[i];
        while(scores[i] < 0 || scores[i] > 100){
            cout << "Test score can only be between 0 and 100: ";
            cin >> scores[i];
        }
    }
}

//Return average grade of student from four test score
char averageGrade(double scores[]){
    double sum;                 //Hold sum of all test scores
    double average;             //Hold average of tests
    char letter;                //Hold equivalent average as a letter grade
    for(int i = 0; i < NUMBER_OF_TESTS; i++){
        sum += scores[i];
    }
    
    average = sum/NUMBER_OF_TESTS;
    
    cout << "Average test score: " << average << endl;
    
    if(average <= 100 && average >= 90)
        letter = 'A';
    else if(average <= 89 && average >= 80)
        letter = 'B';
    else if(average <= 79 && average >= 70)
        letter = 'C';
    else if(average <= 69 && average >= 60)
        letter = 'D';
    else if(average <= 59 && average >= 0)
        letter = 'F';
    else
        letter = 'N';
    
    return letter;
}