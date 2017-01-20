/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 20, 2017, 2:58 AM
  Purpose:  Create menu that links to all 9 problems
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
    char choice;
    cout << setprecision(1) << showpoint << fixed; 
    
    //Problem 1
    int lastNum;        //The last number the loop will add
    int sum;            //The sum of all integers from 1 to lastNum
    
    //Problem 2
    int row = 0;            //used to display 16 character on each line
    
    //Problem 3
    const double OCEAN_LEVEL_RISING = 1.5;        //How much the ocean rises each year in millimeter
    const double START_OCEAN_LEVEL = 81.1;       //Sea level measurement as of 2016 in millimeter
    int year = 2016;                              //Starting year of 
    double oceanLevel;                             //Holds the current ocean level
    
    //Problem 4
    const double CALORIE_BURN = 3.6 ;        //Amount of calories burned per minutes

    
    //Problem 5
    int mph;                //Speed the vehicle traveled
    int hours;               //The amount of time the vehicle traveled
    
    //Problem 6
    int floors;                         //How many floors the hotel has
    int rooms;                          //Numbers of rooms on each floors
    int occupied;                       //Number of rooms occupied on each floors
    int roomsTotal = 0;                 //Total number of rooms in the hotel
    int occupiedTotal = 0;              //Total number of rooms occupied in the hotel
    int unoccupiedTotal;                //Total number of rooms unoccupied in the hotel
    double occupiedPercentage;          //Percentage of rooms occupied in the hotel
    
    //Problem 8
    int years;                   //How many years will the average rainfall be calculated for
    int rainfall;               //the amount of rainfall for each month
    int totalRainfall = 0;      //Total amount of rainfall for all months and years
    double averageRainfall;     //Calculate the average rainfall for all the months
    
    //Problem 9
    int greatest = 0;           //Hold the largest number entered
    int least = 0;              //Hold the smallest number entered
    int num;                //Hold user input
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Sum Of Numbers"<<endl;
        cout<<"Type 2 for ASCII Code"<<endl;
        cout<<"Type 3 for Ocean Levels"<<endl;
        cout<<"Type 4 for Calories Burned"<<endl;
        cout<<"Type 5 for Distance Traveled"<<endl;
        cout<<"Type 6 for Hotel Occupancy"<<endl;
        cout<<"Type 7 for Celsius To Fahrenheit Table"<<endl;
        cout<<"Type 8 for Average Rainfall"<<endl;
        cout<<"Type 9 for The Greatest and Least of These"<<endl;        
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                cout<<"We are in Problem 1: Sum Of Numbers"<<endl;
                    //Input values
                cout << "Please enter a number greater than 0: ";
                cin >> lastNum;

                //Check if input is valid
                while(lastNum <= 0){
                    cout << "The input is less than or equal to 0, please enter a valid number: ";
                    cin >> lastNum;
                }

                //Add all numbers from 1 to lastNum
                for(int i = 1; i <= lastNum; i++){
                    sum += i;
                }

                //Output sum
                cout << "The sum from 1 to " << lastNum << " is " << sum << endl;
                break;
            }
            case '2':{
                cout<<"We are in Problem 2: ASCII Code"<<endl;
                    //Message with the purpose
                cout << "This is the list of characters with their ASCII code\n";

                //Display list
                for(int i = 0; i <= 127; i++){
                    cout << i << ". " << (char)i << "\t";
                    row++;
                    if((row%16) == 0)
                        cout << "\n";
                }
                break;
            }
            case '3':{
                cout<<"We are in Problem 3: Ocean Levels"<<endl;
                //Output chart
                cout << "Chart for ocean level rising 1.5 mm per year.\n";
                cout << "YEAR\tOCEAN LEVEL(mm)\n";
                cout << "-------------------\n";
                for(int i = 0; i <= 25; i++){
                    oceanLevel = START_OCEAN_LEVEL + (i * OCEAN_LEVEL_RISING);
                    cout << (2016 + i) << "\t" << oceanLevel << endl;
                }
                break;
            }
            case '4':{
                cout<<"We are in Problem 4: Calories Burned"<<endl;
                //Process by mapping inputs to outputs
                for(int i = 5; i <= 30; i += 5){
                    cout << i << " minutes equals " << (i * CALORIE_BURN) << " calories burned.\n";
                }
                break;
            }
            case '5':{
                cout<<"We are in Problem 5: Distance Traveled"<<endl;
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
                break;
            }
            case '6':{
                cout<<"We are in Problem 6: Hotel Occupancy"<<endl;
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
                break;
            }
            case '7':{
                cout<<"We are in Problem 7: Celsius To Fahrenheit Table"<<endl;
                cout << "Converting temperatures\n";
                cout << "Celsius\t\tFahrenheit\n";
                cout << "-----------------------\n";
                for(int i = 0; i <= 20; i++){
                    cout << i << "\t\t" << (i * (9/5.0)) +  32 << endl;
                }
                break;
            }
            case '8':{
                cout<<"We are in Problem 8: Average Rainfall"<<endl;
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
                break;
            }
            case '9':{
                cout<<"We are in Problem 9: The Greatest and Least of These"<<endl;
                    //Input values
                while(num != 99){
                    cout << "Please enter a number (enter -99 to quit): ";
                    cin >> num;

                    //Make sure -99 is not included in checking values
                    if(num == -99) break;

                    //Find if number is the largest 
                    if(num > greatest)
                        greatest = num;
                    //Check if number is the smallest
                    if(num < least)
                        least = num;
                }

                //Output values
                cout << "The largest number is " << greatest << endl;
                cout << "The smallest number is " << least << endl;
                break;
            }            
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='9');    
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}