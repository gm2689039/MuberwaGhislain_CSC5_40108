/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 12, 2017, 7:39 PM
  Purpose:  Convert celsius temperature to farenheit
 */

//System Libraries
#include <iostream>
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
    double celsius,         //holds input from user
            fahrenheit;      //Holds the result of the conversion
    
    //Input values
    cout << "What is the temperature in celsius to convert: ";
    cin >> celsius;
    
    //Convert celsius to farenheit
    fahrenheit = round((9/5) * celsius + 32);
    
    //Output values
    cout << "The temperature in fahrenheit is " << fahrenheit;
    //Exit stage right!
    return 0;
}