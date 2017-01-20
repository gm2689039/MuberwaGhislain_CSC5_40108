/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 11, 2017, 7:46 PM
  Purpose:  Calculate the percentage of male and female in a class
 */

//System Libraries
#include <iostream>
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
    cout << setprecision(2) << showpoint << fixed;
    double male, female, //number of male and female in the class
            malePercent, femalePercent, // hold percentage for each male and female
            total; //total number of students in the class
    
    //Input values
    cout << "How many males are in the class: ";
    cin >> male;
    
    cout << "How many females are in the class: ";
    cin >> female;
    
    //Calculate values
    total = male + female;
    malePercent = (male/total) * 100;
    femalePercent = (female/total) * 100;
    
    //Output values
    cout << "In a class of " << total << " students, there are " << malePercent
            << "% male and " << femalePercent << "% female.";
    
    //Exit stage right!
    return 0;
}