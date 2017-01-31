/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 20, 2017, 1:45 AM
  Purpose:  Create table to display Celsius to Fahrenheit from 0-20
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
    //Display table of Celsius and Fahrenheit
    cout << "Converting temperatures\n";
    cout << "Celsius\t\tFahrenheit\n";
    cout << "-----------------------\n";
    for(int i = 0; i <= 20; i++){
        cout << i << "\t\t" << (i * (9/5.0)) +  32 << endl;
    }
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}