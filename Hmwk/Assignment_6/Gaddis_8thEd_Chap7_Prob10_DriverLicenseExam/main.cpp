/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on February 5, 2017, 8:02 PM
  Purpose:  Implement a twenty question Driver License exam
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
const int NUMBER_OF_QUESTIONS = 20;
char examAnswer[NUMBER_OF_QUESTIONS] = {'A', 'D', 'B', 'B', 'C', 
                                        'B', 'A', 'B', 'C', 'D', 
                                        'A', 'C', 'D', 'B', 'D',
                                        'C', 'C', 'A', 'D', 'B'};
bool correctAnswer[NUMBER_OF_QUESTIONS] = {false, false, false, false, false, 
                                           false, false, false, false, false, 
                                           false, false, false, false, false, 
                                           false, false, false, false, false};
char userAnswer[NUMBER_OF_QUESTIONS];

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int correct = 0;                    //Hold how many correct answer the user has
    
    //Obtain the user's answers
    cout << "Please provide answers to list of questions:" << endl;
    for(int i = 0; i < NUMBER_OF_QUESTIONS; i++){
        cout << "Question #" << (i + 1) << ":";         //Ask for user's answer
        cin >> userAnswer[i];
        userAnswer[i] = (char) toupper(userAnswer[i]);  //convert answer to uppercase
        
        //Check if answer is valid
        while(userAnswer[i] < 'A' || userAnswer[i] > 'D'){
            cout << "Answer has to be either A, B, C, or D: ";
            cin >> userAnswer[i];
            userAnswer[i] = (char) toupper(userAnswer[i]);
        }
        
        //Check if answer is correct
        if(userAnswer[i] == examAnswer[i]){
            correct++;
            correctAnswer[i] = true;
        }
    }
    
    //Check if user has passed or failed
    cout << "This is the result of the exam." << endl;
    if(correct >= 15){
        cout << "You passed" << endl;
    }
    else{
        cout << "You failed" << endl;
    }
    
    //Display result of exam
    cout << "Correct: " << correct << "\t\tIncorrect: " << (NUMBER_OF_QUESTIONS - correct) << endl;
    cout << "List of incorrect answers: ";
    for(int i = 0; i < NUMBER_OF_QUESTIONS; i++){
        if(!correctAnswer[i])           //If false, conditional is turned true and display number question
            cout << (i + 1) << " ";
    }
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}