/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on February 5, 2017, 8;56 PM
  Purpose:  Read exam answer sheet from a file and compare to user's answer sheet from a file
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    cout << setprecision(0) << fixed << showpoint;
    int position = 0;                       //Used for reading and placing grade in array
    int correct = 0;
    const int NUMBER_OF_QUESTIONS = 20;
    char examAnswers[NUMBER_OF_QUESTIONS];                //Hold content from correctAnswers.txt
    char studentAnswers[NUMBER_OF_QUESTIONS];                   //Hold content from userAnswers.txt
           
    //Read and place content of correctAnswers.txt into array
    ifstream inputFile1;
    inputFile1.open("CorrectAnswers.txt");
    if(inputFile1){
        while(inputFile1 >> examAnswers[position])
            position++;
    }
    
    inputFile1.close(); //Close input file to correctAnswers.txt
    
    //Read and place content of StudentAnswer.txt into array
    position = 0;
    ifstream inputFile2;
    inputFile2.open("StudentAnswers.txt");
    if(inputFile2){
        while(inputFile2 >> studentAnswers[position])
            position++;
    }
    inputFile2.close();  //Close input file to StudentAnswers.txt
 
    //Grade the student's answers
    cout << "This is the result of the student's exam:" << endl;
    cout << "Wrong answer\tCorrect answer" << endl;
    for(int i = 0; i < NUMBER_OF_QUESTIONS; i++){
        if(examAnswers[i] == studentAnswers[i]){ //If answer is correct 
            correct++;
        }
        else{ //If answer is wrong display correct answer
            cout << studentAnswers[i] << "\t\t" << examAnswers[i] << endl;
        }
    }
    
    //Output information
    double grade = (correct/(double)NUMBER_OF_QUESTIONS) * 100;
    cout << "Number of questions missed: " << (NUMBER_OF_QUESTIONS - correct) << endl;
    cout << "Grade: " << grade << "%" << endl;
    if(grade >= 70.00)          //Identify if student passed
        cout << "Congratulation you passed" << endl;
    else
        cout << "Sorry you failed the final exam" << endl;
    
    //Output values

    //Exit stage right!
    return 0;
}