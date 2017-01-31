/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 18, 2017, 10:45 PM
  Purpose:  Produce a chart for calories burned
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
    const double CALORIE_BURN = 3.6 ;        //Amount of calories burned per minutes
    cout << setprecision(1) << showpoint << fixed;
    
    //Process by mapping inputs to outputs
    for(int i = 5; i <= 30; i += 5){
        cout << i << " minutes equals " << (i * CALORIE_BURN) << " calories burned.\n";
    }
        
    //Output values

    //Exit stage right!
    return 0;
}