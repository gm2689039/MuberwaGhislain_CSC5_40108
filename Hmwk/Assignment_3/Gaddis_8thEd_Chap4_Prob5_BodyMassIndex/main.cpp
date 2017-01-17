/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 16, 2017, 8:12 PM
  Purpose:  Calculate the Body Mass Index(BMI) of a person
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <math.h>
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
    int weight;     //Hold the weight of the user
    int height;     //Hold the height of the user
    double bmi;     //Hold the Body Mass Index of the user
    cout << setprecision(1) << showpoint << fixed;
    
    //Input values
    cout << "What is the weight in pound: ";
    cin >> weight;
    cout << "What is the height in inches: ";
    cin >> height;
    
    //Process BMI
    bmi = (weight *703)/pow(height, 2);
    
    //Output values
    if(bmi > 25.0)
        cout << "This person is considered to be overweight.";
    else if((bmi <= 25.0) && (bmi >= 18.5))
        cout << "This person is considered to be in optimal weight.";
    else if(bmi < 18.5)
        cout << "This person is considered to be underweight.";

    //Exit stage right!
    return 0;
}