/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on February 4, 2017, 6:01 PM
  Purpose:  Collect information on rainfall for 12 months
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
    double rainfalls[12];                //Hold amount of rainfall for twelve months
    //List of months
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", 
                        "August", "September", "October", "November", "December"};
    
    double totalRainfall;               //Total amount of rainfall for the year1
    double averageRainfall;             //Average rainfall for the year
    double highestRainfall;             //Highest rainfall for the year
    int highestIndex;                   //Hold the array index with the highest rainfall
    double lowestRainfall;              //Lowest rainfall for the year
    int lowestIndex;                    //Hold the array index with the lowest rainfall
    cout << setprecision(2) << fixed << showpoint;
    
    //Input values
    cout << "What is the rainfall for the past twelve months (in inches):" << endl;
    for(int i = 0; i < 12; i++){
        cout << "   " << months[i] << ": ";
        cin >> rainfalls[i];
        while(rainfalls[i] < 0){
            cout << "Rainfall cannot be negative, please try again: ";
            cin >> rainfalls[i];
        } 
        
        totalRainfall += rainfalls[i];
        
         //find highest and lowest rainfall for the year
        if(i == 0){
            highestRainfall = rainfalls[i];
            lowestRainfall = rainfalls[i];
        }
        else{
            if(highestRainfall < rainfalls[i]){
                highestRainfall = rainfalls[i];
                highestIndex = i;
            }
            
            if(lowestRainfall > rainfalls[i]){
                lowestRainfall = rainfalls[i];
                lowestIndex = i;
            }
        }       
    }

    //Calculate average rainfall
    averageRainfall = totalRainfall/12;
    
    //Output result of collected information
    cout << "Highest rainfall occurred in " << months[highestIndex] << " with " << rainfalls[highestIndex] << " inches" << endl;
    cout << "Lowest rainfall occurred in " << months[lowestIndex] << " with " << rainfalls[lowestIndex] << " inches" << endl;
    cout << "Average rainfall: " << averageRainfall << " inches" << endl;
    cout << "Total rainfall: " << totalRainfall << " inches" << endl;
    //Exit stage right!
    return 0;
}