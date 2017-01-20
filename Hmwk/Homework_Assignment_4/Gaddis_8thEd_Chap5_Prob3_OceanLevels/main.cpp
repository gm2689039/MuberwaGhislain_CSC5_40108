/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 18, 2017, 8:51 PM
  Purpose:  Display a table that shows ocean levels by years
 */

//System Libraries
#include <iostream>

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
    const double OCEAN_LEVEL_RISING = 1.5;        //How much the ocean rises each year in millimeter
    const double START_OCEAN_LEVEL = 81.1;       //Sea level measurement as of 2016 in millimeter
    int year = 2016;                              //Starting year of 
    double oceanLevel;                             //Holds the current ocean level
    
    //Output chart
    cout << "Chart for ocean level rising 1.5 mm per year.\n";
    cout << "YEAR\tOCEAN LEVEL(mm)\n";
    cout << "-------------------\n";
    for(int i = 0; i <= 25; i++){
        oceanLevel = START_OCEAN_LEVEL + (i * OCEAN_LEVEL_RISING);
        cout << (2016 + i) << "\t" << oceanLevel << endl;
    }
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}