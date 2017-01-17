/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 16, 2017, 9:51 PM
  Purpose:  Take two of the three primary colors and output the result of the mixture
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
    string primeColor1, primeColor2;    //Holds the input of the user
    int colorMix1, colorMix2;           //Holds conformation number that it is a valid number
    
    //Input values
    cout << "Please enter two of the primary color (red, blue, yellow): ";
    cin >> primeColor1 >> primeColor2;
    
    //Verify that the first color is valid
    if(primeColor1 == "red")
        colorMix1 = 1;
    else if(primeColor1 == "blue")
        colorMix1 = 3;
    else if(primeColor1 == "yellow")
        colorMix1 = 7;
    else
        colorMix1 = 0;            

    //Verify that the second color is valid
    if(primeColor2 == "red")
        colorMix2 = 1;
    else if(primeColor2 == "blue")
        colorMix2 = 3;
    else if(primeColor2 == "yellow")
        colorMix2 = 7;
    else
        colorMix2 = 0;

    //output message with secondary message and error message
    switch(colorMix1 + colorMix2){
        case 2: cout << "The color is red, choose different color to see a mixture.";
                break;
        case 4: cout << "The color is purple.";
                break;
        case 6: cout << "The color is blue, choose different color to see a mixture.";
                break;
        case 8: cout << "The color is orange.";
                break;
        case 10: cout << "The color is green.";
        case 14: cout << "The color is yellow, choose different color to see a mixture.";
                break;
        default: cout << "Please select two of these colors (red, blue, yellow) to mix.";
    }
    
    //Exit stage right!
    return 0;
}