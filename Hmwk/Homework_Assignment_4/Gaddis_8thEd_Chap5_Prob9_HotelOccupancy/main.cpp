/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 19, 2017, 9:00 PM
  Purpose:  Calculate the occupancy rate of a hotel
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
    int floors;                         //How many floors the hotel has
    int rooms;                          //Numbers of rooms on each floors
    int occupied;                       //Number of rooms occupied on each floors
    int roomsTotal = 0;                 //Total number of rooms in the hotel
    int occupiedTotal = 0;              //Total number of rooms occupied in the hotel
    int unoccupiedTotal;                //Total number of rooms unoccupied in the hotel
    double occupiedPercentage;          //Percentage of rooms occupied in the hotel
    cout << setprecision(2) << showpoint << fixed;
    
    //Input values
    cout << "How many floors does the hotel have: ";
    cin >> floors;
    
    //Check if floors is valid
    while(floors < 1){
        cout << "Please enter the amount of floors for the hotel that greater than or equal to 1: ";
        cin >> floors;
    }
    
    //If there are 13 or more floors, increment variable floors by one.
    //Hotels don't count floor 13 so the amount is increased by one and in
    //the for loop, floor 13 will be skipped to keep original input
    if(floors >= 13)
        floors++;
    
    //Ask how many rooms are in each floors
    for(int i = 1; i <= floors; i++){
        //Skip the 13th floor because of hotel design
        if(i == 13)
            i = 14;

        //Ask how many rooms are on the floors
        cout << "How many rooms are on floor " << i << ": ";
        cin >> rooms;
        
        //Ask how many of those rooms are occupied
        cout << "How many of those rooms are occupied: ";
        cin >> occupied;
        
        //Check if occupied number is valid
        while(occupied > rooms){
            cout << "The amount of rooms occupied cannot be larger than the amount of rooms available.\n";
            cout << "Please enter a valid amount: ";
            cin >> occupied;
        }
        
        //Add rooms and occupancies together
        roomsTotal += rooms;
        occupiedTotal += occupied;
    }
    
    //decrease the amount of floors to original input
    if(floors >= 13)
        floors--;
    
    //Calculate the percentage of occupancy and unoccupied
    unoccupiedTotal = roomsTotal - occupiedTotal;
    occupiedPercentage = (occupiedTotal/(double)roomsTotal) * 100;
    
    //Output results
    cout << "The hotel contains " << floors << " floors.\n";
    cout << "There are " << roomsTotal << " rooms in the hotel.\n";
    cout << occupiedTotal << " are occupied while " << unoccupiedTotal << " are unoccupied.\n";
    cout << "There is a " << occupiedPercentage << "% occupancy in this hotel.";
           
    //Exit stage right!
    return 0;
}