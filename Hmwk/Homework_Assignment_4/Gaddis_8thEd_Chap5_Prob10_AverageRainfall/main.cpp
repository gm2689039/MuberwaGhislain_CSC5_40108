/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 20, 2017, 12:46 AM
  Purpose:  Calculate the average rainfall over several years
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
    int years;                   //How many years will the average rainfall be calculated for
    int rainfall;               //the amount of rainfall for each month
    int totalRainfall = 0;      //Total amount of rainfall for all months and years
    double averageRainfall;     //Calculate the average rainfall for all the months
    cout << setprecision(1) << showpoint << fixed;
    
    //Input values
    cout << "How many years to calculate average rainfall: ";
    cin >> years;
    
    //Check years is valid
    while(years < 1){
        cout << "Please enter an amount of years greater than or equal to 1: ";
        cin >> years;
    }
    
    //Use loops to obtain amount of rainfall for the months
    for(int i = 1; i <= years; i++){
        for(int j = 1; j <= 12; j++){
            cout << "How much rainfall (in inches) occur in year " << i << " month " << j << ": ";
            cin >> rainfall;
            
            //Check if rainfall input is valid
            while(rainfall < 0){
                cout << "Negative amount for rainfall is not valid, please try again: ";
                cin >> rainfall;
            }
            
            //Add rainfall input to total
            totalRainfall += rainfall;
        }
    }
    
    //Calculate the average rainfall for all the months
    averageRainfall = totalRainfall/(years * 12.0);
    
    //Output values
    cout << "There are a total of " << (years * 12) << " months.\n";
    cout << "A total of " << totalRainfall << " inches or rain fell in those years.\n";
    cout << "the average rainfall is " << averageRainfall << " inches.";
    
    //Exit stage right!
    return 0;
}