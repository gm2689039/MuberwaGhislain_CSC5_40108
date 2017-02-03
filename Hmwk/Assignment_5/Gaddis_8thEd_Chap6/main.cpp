/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on February 1, 2017, 5:05 PM
  Purpose:  Hold all ten problems for assignment 5
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

//User Libraries

//Global Constants
//Global Constants involed with Prob3: Winning Division
//four division
string northeastDivision = "Northeast";
string southeastDivision = "Southeast";
string northwestDivision = "Northwest";
string southwestDivision = "Southeast";

//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
//Functions involved with Probem 1 from Gaddis 8thEd: Markup
void prob1();
double calculateRetail(double, double);

//Functions involved with Problem 3 from Gaddis 8thEd: Winning Division
void prob2();
double getSales(string);
void findHighest(double, double, double, double);

//Functions involved with Problem 5 from Gaddis 8thEd: Falling Distance
void prob3();
double fallingDistance(int);

//Functions involved with Problem 6 from Gaddis 8thEd: Kinetic Energy
void prob4();
double kineticEnergy(double, double);

//Functions involved with Problem 7 from Gaddis 8thEd: Celsius Energy
void prob5();
double celsius(int);

//Functions involved with Problem 8 from Gaddis 8thEd: Coin Toss
void prob6();
int coinToss();

//Functions involved with Problem 9 from Gaddis 8thEd: Present Value
void prob7();
double presentValue(double, double, int);

//Functions involved with Problem 10 from Gaddis 8thEd: Future Value
void prob8();
double futureValue(double, double, int);

//Functions involved with Problem 11 from Gaddis 8thEd: Lowest Score Drop
void prob9();
void getScore(int &);
void calcAverage(int, int,  int, int, int);
int findLowest(int, int, int, int, int);

//Functions involved with Problem 12 from Gaddis 8thEd: Star Search
//findLowest(int, int, int, int, int) is also used
void prob10();
void getJudgeData(int &);
void calcScore(int, int, int, int, int);
int findHighest(int, int, int, int, int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
    do{
        //Input values
        cout << "Enter a number from the list to choice problem to implement, "
                << "enter anything else to end the assignment: " << endl;
        cout << "   1: Markup" << endl;
        cout << "   2: Winning Division" << endl;
        cout << "   3: Falling Distance" << endl;
        cout << "   4: Kinetic Energy" << endl;
        cout << "   5: Celsius Table" << endl;
        cout << "   6: Coin Toss" << endl;
        cout << "   7: Present Value" << endl;
        cout << "   8: Future Value" << endl;
        cout << "   9: Lowest Score Drop" << endl;
        cout << "   10: Star Search" << endl;
        cout << "Problem #";
        cin >> choice;
        
        //Switch statement to choice problem
        switch(choice){
            case 1: {prob1(); break;}
            case 2: {prob2(); break;}
            case 3: {prob3(); break;}
            case 4: {prob4(); break;}
            case 5: {prob5(); break;}
            case 6: {prob6(); break;}
            case 7: {prob7(); break;}
            case 8: {prob8(); break;}
            case 9: {prob9(); break;}
            case 10: {prob10(); break;}
            default:
                cout << "End of Assignment 5." << endl;
        }
        cout << endl;       //Extra space between each problems
    //Check if valid
    }while((choice >= 1) && (choice <= 10));

    //Exit stage right!
    return 0;
}

/*Gaddis 8thEd Problem 1: Markup*/
void prob1(){
    //Declare Variables
    double cost;            //Hold wholesale cost
    double markup;          //Hold percentage
    cout << setprecision(2) << fixed << showpoint;
    
    //Input values
    cout << "what is the wholesale cost: ";
    cin >> cost;
    
    //Check if valid
    while(cost < 0){
        cout << "Cannot accept negative cost, please try again: $";
        cin >> cost;
    }
    
    //Obtain markup input
    cout << "What is markup percentage: ";
    cin >> markup;
    
    //Check if valid
    while(markup < 0){
        cout << "Cannot accept negative markup, please try again: ";
        cin >> markup;
    }
    
    //Output retail price based on input
    cout << "Item's retail price is: $" << calculateRetail(cost, markup) << endl;    
}

//Calculate and return the item's retail price
double calculateRetail(double cost, double markup){
    return cost + (cost * (markup/100));
}

/*Gaddis 8thEd Problem 3: Winning Division*/
void prob2(){
    //Declare Variables
    //four sales division input
    double northeastSale;
    double southeastSale;
    double northwestSale;
    double southwestSale;
    cout << setprecision(2) << fixed << showpoint; //Round output to two decimal points
    
    //Acquire sales 
    northeastSale = getSales(northeastDivision);
    southeastSale = getSales(southeastDivision);
    northwestSale = getSales(northwestDivision);
    southwestSale = getSales(southwestDivision);
    
    //Find which division has the highest sales figure for the quarter
    findHighest(northeastSale, southeastSale, northwestSale, southwestSale);    
}

//Obtain quarterly sales figure
double getSales(string division){
    double result;
    cout << "What is the quarterly sales figure for " << division << " : $";
    cin >> result;
    while(result < 0){
        cout << "Sales cannot be less than $0, please try again: $";
        cin >> result;
    }
    return result;
}

//Find which sales figure is the largest
void findHighest(double div1, double div2, double div3, double div4){
    if(div1 > div2){
        if(div1 > div3){
            if(div1 > div4)
                cout << northeastDivision << " division has the highest quarterly with $" << div1 << endl;
            else
                cout << southwestDivision << " division has the highest quarterly with $" << div4 << endl;
        }else{
            if(div3 > div4)
                cout << northwestDivision << " division has the highest quarterly with $" << div3 << endl;
            else
                cout << southwestDivision << " division has the highest quarterly with $" << div4 << endl;            
        }
    }
    else{
        if(div2 > div3){
            if(div2 > div4)
                cout << southeastDivision << " division has the highest quarterly with $" << div2 << endl;
            else
                cout << southwestDivision << " division has the highest quarterly with $" << div4 << endl;
        }else{
            if(div3 > div4)
                cout << northwestDivision << " division has the highest quarterly with $" << div3 << endl;
            else
                cout << southwestDivision << " division has the highest quarterly with $" << div4 << endl;            
        }        
    }
}

/*Gaddis 8thEd Problem 5: Falling Distance*/
void prob3(){
    //Display time and distance of falling object
    for(int i =  1; i <= 10; i++){
        cout << "At " << i << " seconds, an object has fallen " 
                << fallingDistance(i) << " meters" << endl;
    }    
}

//Calculate distance of falling object
double fallingDistance(int seconds){
    return .5*9.8*pow(seconds, 2);
}

/*Gaddis 8thEd Problem 6: Kinetic Energy*/
void prob4(){
    //Declare Variables
    double mass;            //Hold the object's mass in kilograms
    double velocity;        //Hold the object's speed in meters per second
    
    //Input values
    cout << "What is the object's mass (in kilograms): ";
    cin >> mass;
    cout << "What is the object's velocity (in meters per second): ";
    cin >> velocity;
    
    //Calculate and output kinetic energy
    cout << "The kinetic energy is " << kineticEnergy(mass, velocity) << " Joule(J)" << endl;    
}

/*Calculate kinetic energy*/
double kineticEnergy(double mass, double velocity){
    return .5*mass*pow(velocity, 2);
}

/*Gaddis 8thEd Problem 7: Celsius Table*/
void prob5(){
    //Declare variables
    cout << setprecision(1) << fixed << showpoint;
    
    //Display Fahrenheit and it's equivalent Celsius temperature
    cout << "Temperature table" << endl;
    cout << "Fahrenheit\t\tCelsius" << endl;
    for(int i = 0; i <= 20; i++){
        cout << i << "\t\t\t" << celsius(i) << endl;
    }    
}

/*Convert temperature Fahrenheit to Celsius*/
double celsius(int fahrenheit){
    return (5/9.0)*(fahrenheit - 32);
}

/*Gaddis 8thEd Problem 8: Coin Toss*/
void prob6(){
    //Declare Variables
    int toss;           //How many coin toss should the program generate
    
    //Input values
    cout << "How many coin toss: ";
    cin >> toss;
    
    //Simulate coin toss
    for(int i = 0; i < toss; i++){
        cout << "Coin toss #" << (i + 1) << " : "; 
        if(coinToss() == 1)
            cout << "head" << endl;
        else
            cout << "tail" << endl;
    }    
}
/*Simulate coin toss, return 1 for head, 2 for tail*/
int coinToss(){
    //Declare variable for minimum and maximum value
    int head = 1;       //Lowest random number
    int tail = 2;       //Highest random number
    
    /* Using seed only returns one number, does not create randomness
    //Get the system time
    unsigned seed = time(0);

    //Seed random number generator
    srand(seed);*/
    
    return (rand() % (tail - head + 1)) + head;
}

/*Gaddis 8thEd Problem 9: Present Value*/
void prob7(){
    //Declare Variables
    double futureValue;             //Amount that is desired in the savings account
    double interestRate;            //Interest placed on the savings account
    int year;                       //Amount of years the account is left alone
    cout << setprecision(2) << fixed << showpoint;
    
    //Input values
    cout << "How much would you like to have in the future in your bank account: $";
    cin >> futureValue;
    cout << "What is the interest rate on the account (in percent): ";
    cin >> interestRate;
    cout << "How many years do you want to let it grow: ";
    cin >> year;
    
    //Calculate present value and return output
    cout << "Based on the information you need to deposit $" << presentValue(futureValue, interestRate, year) << endl;    
}

/*Calculate present value*/
double presentValue(double futureValue, double interestRate, int year){
    return futureValue/pow(1+ (interestRate/100), year);
}

/*Gaddis 8thEd Problem 10: Future Value*/
void prob8(){
    //Declare Variables
    double presentValue;                //How much money is currently in the savings account
    double monthlyInterest;             //current monthly interest rate
    int month;                          //Number of months the account will be left alone
    cout << setprecision(2) << fixed << showpoint;
    
    //Input values
    cout << "How much money is currently in the savings account: $";
    cin >> presentValue;
    cout << "What is the monthly interest (in percent): ";
    cin >> monthlyInterest;
    cout << "How many months will the account be left alone: ";
    cin >> month;
    
    //Calculate and return output
    cout << "Based on the information, there will be $" << futureValue(presentValue, monthlyInterest, month) << endl;    
}

/*Calculate future value*/
double futureValue(double presentValue, double monthlyInterest, int month){
    return presentValue * pow(1 + (monthlyInterest/100), month);
}

/*Gaddis 8thEd Problem 11: Lowest Score Drop*/
void prob9(){
    //Declare Variables
    int score1, score2, score3, score4, score5;     //Each hold a different score
    
    //Retrieve users' score
    cout << "Please enter a score between 0 and 100:" << endl;
    cout << "What is the first score: ";
    getScore(score1);
    cout << "What is the second score: ";    
    getScore(score2);
    cout << "What is the third score: ";
    getScore(score3);
    cout << "What is the fourth score: ";
    getScore(score4);
    cout << "What is the fifth score: ";
    getScore(score5);
    
    //Calculate and display the average with the lowest score removed
    calcAverage(score1, score2, score3, score4, score5);    
}

/*Obtain list of scores from user and save answers using reference variables*/
void getScore(int &score){
    cin >> score; 
    while((score < 0) || (score > 100)){
        cout << "Score must be between 0 and 100: ";
        cin >> score;
    }
    
}

/*Calculate the average of scores*/ 
void calcAverage(int score1, int score2, int score3, int score4, int score5){
    //calculate sum of scores and remove lowest score
    int sum = (score1 + score2 + score3 + score4 + score5) - findLowest(score1, score2, score3, score4, score5);
    cout << "Average score with lowest score dropped: " << (sum/4.0) << endl;
}

/*Find the lowest score from list*/
int findLowest(int score1, int score2, int score3, int score4, int score5){
    //use min function to find smallest score
    return min({score1, score2, score3, score4, score5});
}

/*Gaddis 8thEd Problem 12: Star Search*/
void prob10(){
    //Declare Variables
    int score1, score2, score3, score4, score5;         //Hold judge's score
    cout << setprecision(1) << fixed << showpoint;
    //Input values
    cout << "Please enter a score between 0 and 10: " << endl;
    cout << "Judge 1 score: ";
    getJudgeData(score1);
    cout << "Judge 2 score: ";
    getJudgeData(score2);
    cout << "Judge 3 score: ";
    getJudgeData(score3);
    cout << "Judge 4 score: ";
    getJudgeData(score4);
    cout << "Judge 5 score: ";
    getJudgeData(score5);    
    
    //Find the performer's final score
    calcScore(score1, score2, score3, score4, score5);    
}

/*Obtain judge's score*/
void getJudgeData(int &score){
    cin >> score;
    while((score < 0) || (score > 10)){
        cout << "Scores between 0 and 10 are only accepted: ";
        cin >> score;
    }
}

/*Calculate the performer's final score*/
void calcScore(int score1, int score2, int score3, int score4, int score5){
    int sum = (score1 + score2 + score3 + score4 + score5) - findHighest(score1, score2, score3, score4, score5) - findLowest(score1, score2, score3, score4, score5);
    cout << "Performer's final score is " <<  (sum/3.0) << endl;
}

/*Return highest score*/
int findHighest(int score1, int score2, int score3, int score4, int score5){
    return max({score1, score2, score3, score4, score5});
}