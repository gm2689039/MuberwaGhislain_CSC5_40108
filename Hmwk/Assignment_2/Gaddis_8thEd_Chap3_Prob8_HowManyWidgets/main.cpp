/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 12, 2017, 11:54 AM
  Purpose:  Calculate how many widgets on a pallet
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
    cout << setprecision(1) << showpoint << fixed;
    //All weight are in pound
    double palletWeight,            //User tells how much the pallet weight on it's own
            palletWidget,           //User tells weight of pallet with widgets on it
            widgetWeight = 12.5;    //weight of one widget
    int widgetAmount;           //how many widgets are on the pallet
    
    //Input values
    cout << "How much does the pallet without any widget on it weight (in pound): ";
    cin >> palletWeight;
    cout << "How much does the pallet with widget on it weight (in pound): ";
    cin >> palletWidget;
    
    //Calculate the amount of widget on the pallet
    palletWidget -= palletWeight;
    
    //round up to compensate for any decimal points.
    //transfer answer to int to show answer without ".0"
    widgetAmount = ceil(palletWidget / widgetWeight); 
    
    //Output values
    cout << "The amount of widget on the pallet is " << widgetAmount;

    //Exit stage right!
    return 0;
}