/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 11, 2017, 7:23 PM
  Purpose:  Calculate the average rainfall between three months
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
    string monthOne, monthTwo, monthThree; // each hold a month the user enters
    double monthOneRainfall, monthTwoRainfall, monthThreeRainfall, // each hold rainfall for a month in inches
            average; //average rainfall for the three months
    
    //Input values
    cout << "Enter first month: ";
    cin >> monthOne;
    cout << "Enter the amount of rain (in inches) that occurred in " << monthOne << ": ";
    cin >> monthOneRainfall;
    
    cout << "Enter first month: ";
    cin >> monthTwo;
    cout << "Enter the amount of rain (in inches) that occurred in " << monthTwo << ": ";
    cin >> monthTwoRainfall;
    
    cout << "Enter first month: ";
    cin >> monthThree;
    cout << "Enter the amount of rain (in inches) that occurred in " << monthThree << ": ";
    cin >> monthThreeRainfall;    
    
    //Calculate the average
    average = (monthOneRainfall + monthTwoRainfall + monthThreeRainfall)/3.00;
    
    //Output values
    cout << "The average rainfall for " << monthOne << ", " << monthTwo 
            << ", and " << monthThree << " is " << average << " inches.";
    
    //Exit stage right!
    return 0;
}