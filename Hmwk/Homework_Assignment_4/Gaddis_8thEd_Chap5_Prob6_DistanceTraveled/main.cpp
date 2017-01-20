/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 19, 2017, 8:34 PM
  Purpose:  Calculate the distance a vehicle traveled
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
    int mph;                //Speed the vehicle traveled
    int hours;               //The amount of time the vehicle traveled
    
    //Input values for speed
    cout << "What is the speed of the vehicle in mph? ";
    cin >> mph;
    
    //Check speed is valid
    while(mph < -1){
        cout << "Please enter a speed that is positive: ";
        cin >> mph;
    }
    
    //Input value for hours
    cout << "How many hours has it traveled? ";
    cin >> hours;
            
    //Check if hours is valid
    while(hours < 1){
        cout << "Please enter an amount of hour greater than or equal to 1: ";
        cin >> hours;
    }
    
    //Create chart for distance and output the values
    cout << "Hours\tDistance Traveled\n";
    cout << "-------------------------------\n";
    for(int i = 1; i <= hours; i++){
        cout << i << "\t\t" << (mph * i) << endl;     //using Distance = speed * time to obtain results
    }

    //Exit stage right!
    return 0;
}