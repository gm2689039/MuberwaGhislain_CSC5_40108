/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on February 5, 2017, 3:41 AM
  Purpose:  Collect how many salsa jars have been sold
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
    const int ARRAY_SIZE = 5;                   //Size of array
    
    //List of the types of salsas sold
    string salsas[ARRAY_SIZE] = {"mild", "medium", "sweet", "hot", "zesty"};
    int jars[ARRAY_SIZE];                       //Number of orders for each salsas
    
    //Hold highest and lowest array spot
    int highestIndex;
    int lowestIndex;
    
    //Hold highest and lowest order for jars
    int highestOrder;
    int lowestOrder;
    
    int total;                                  //Hold full amount of jars sold
    //Input values
    cout << "How many salsa of each type have been sold in the past month:" << endl;
    for(int i = 0; i < ARRAY_SIZE; i++){
        cout << salsas[i] << ": ";
        cin >> jars[i];
        while(jars[i] < 0){
            cout << "Please enter a number greater than or equal to 0: ";
        }
        
        total += jars[i];
        if(i == 0){
            highestOrder = jars[i];
            lowestOrder = jars[i];
        }
        else{
            if(highestOrder < jars[i]){
                highestOrder = jars[i];
                highestIndex = i;
            }
            
            if(lowestOrder > jars[i]){
                lowestOrder = jars[i];
                lowestIndex = i;
            }    
        }
    }
    
    //Output values
    cout << "List of orders:" << endl;
    for(int i = 0; i < ARRAY_SIZE; i++){
        cout << salsas[i] << "\t" << jars[i] << endl;
    }
    cout << "Highest order: " << salsas[highestIndex] << " with " << jars[highestIndex] << " jars." << endl;
    cout << "Lowest order: " << salsas[lowestIndex] << " with " << jars[lowestIndex] << " jars." << endl;
    cout << "Total amount of jars sold: " << total << endl;
    //Exit stage right!
    return 0;
}