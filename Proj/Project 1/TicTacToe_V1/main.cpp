/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 29, 2017, 4:04 PM
  Purpose:  Implement a two player Tic Tac Toe game
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>           //String class
#include <cstdlib>          //Timer class
#include <cmath>            //Math class
#include <fstream>
#include <ctime>
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
    //Holds how many wins each player won
    int player1Score = 0;               //Holds how many games player 1 won
    int player2Score = 0;               //Holds how many games player 2 won
    int tieGame = 0;                    //Holds tie games
    float totalGames;                     //How many games were played
    char playGame;                      //Hold response of if player wants to play again
    cout << setprecision(1) << showpoint << fixed;
    
    do{
        //Initialize board
        char square1 = '1';             //Start of first row
        char square2 = '2';             
        char square3 = '3';
        char square4 = '4';             //Start of second row
        char square5 = '5';
        char square6 = '6';
        char square7 = '7';             //Start of third row
        char square8 = '8';
        char square9 = '9';

        int player = 1;                  //indicate player's turn
        char choice;                    //Hold user's choice
        char mark;                      //Change square to either X or O
        int winner = -1;                     //Verify who the winner is
        bool invalid = true;              //Check that move was valid

        //Message to tell what the game is
        cout << "Welcome to Tic Tac Toe. This is a two player game where "
                << "each player will try to match either three X or O in a line. Player 1 will be X and Player 2 will be O.\n\n";

        do{
            cout << "Player 1 = X       Player 2 = O" << endl;

            //Draw current game board
            cout << "       |       |       " << endl;
            cout << "   " << square1 << "   |   " << square2 << "   |   " << square3 << endl;
            cout << "_______|_______|_______" << endl;
            cout << "       |       |   " << endl;
            cout << "   " << square4 << "   |   " << square5 << "   |   " << square6 << endl;   
            cout << "_______|_______|_______" << endl;
            cout << "       |       |   " << endl;
            cout << "   " << square7 << "   |   " << square8 << "   |   " << square9 << endl; 

            player = (player%2) ? 1 : 2;    //Identity current player
            cout << "Current player: " << player << " enter a number: ";
            cin >> choice;                      //Obtain player's choice;

            //Check if input is appropriate
            while((choice < '1') && (choice > '9')){
                cout << "Please enter a number between 1 and 9: ";
                cin >> choice;
            }

            mark = (player == 1) ? 'X' : 'O';   //Use appropriate mark for player

            //Find which square was selected and replace it with appropriate mark
            while(invalid){ //Stay in same turn until valid choice is implemented
                if((choice == '1') && square1 == '1'){
                    square1 = mark;
                    invalid = false;
                }
                else if((choice == '2') && square2 == '2'){
                    square2 = mark;
                    invalid = false;
                }
                else if((choice == '3') && square3 == '3'){
                    square3 = mark;
                    invalid = false;
                }
                else if((choice == '4') && square4 == '4'){
                    square4 = mark;
                    invalid = false;
                }
                else if((choice == '5') && square5 == '5'){
                    square5 = mark;
                    invalid = false;
                }
                else if((choice == '6') && square6 == '6'){
                    square6 = mark;
                    invalid = false;
                }
                else if((choice == '7') && square7 == '7'){
                    square7 = mark;
                    invalid = false;
                }
                else if((choice == '8') && square8 == '8'){
                    square8 = mark;
                    invalid = false;
                }
                else if((choice == '9') && square9 == '9'){
                    square9 = mark;
                    invalid = false;
                }
                else{
                    cout << "Invalid move please try again: ";
                    cin >> choice;
                    invalid = true;
                }
            }

            //Check if there is a winner
            if((square1 == square2) && (square2 == square3))        //First row match
                winner = 1;
            else if((square4 == square5) && (square5 == square6))   //Second row match
                winner = 1;
            else if((square7 == square8) && (square8 == square9))   //Third row match
                winner = 1;
            else if((square1 == square4) && (square4 == square7))   //First column match
                winner = 1;
            else if((square2 == square5) && (square5 == square8))   //Second column match
                winner = 1;
            else if((square3 == square6) && (square6 == square9))   //Third column match
                winner = 1;            
            else if((square1 == square5) && (square5 == square9))   //Diagonal down match
                winner = 1;
            else if((square7 == square5) && (square5 == square3))   //Diagonal up match
                winner = 1;
            else if((square1 != '1') && (square2 != '2') && (square3 != '3') && 
                    (square4 != '4') && (square5 != '5') && (square6 != '6') && 
                    (square7 != '7') && (square8 != '8') && (square9 != '9'))
                winner = 0;
            else{
                winner = -1;
                player++;           //Increment player variable to allow next player to play  
                invalid = true;
            }    
        }while(winner == -1);

        //Output who won
        cout << endl;
        if(winner == 0){
            cout << "Game is a tie" << endl;
        }
        else{
            ((player)%2) ? player1Score++ : player2Score++;
            cout << "The winner is Player " << ((player)%2 ? 1 : 2) << ", this is the winning board" << endl;
        }
        //Draw winning game board
        cout << "       |       |       " << endl;
        cout << "   " << square1 << "   |   " << square2 << "   |   " << square3 << endl;
        cout << "_______|_______|_______" << endl;
        cout << "       |       |   " << endl;
        cout << "   " << square4 << "   |   " << square5 << "   |   " << square6 << endl;   
        cout << "_______|_______|_______" << endl;
        cout << "       |       |   " << endl;
        cout << "   " << square7 << "   |   " << square8 << "   |   " << square9 << endl;  
        cout << endl;
        //Ask if player wants to play again
        cout << "Do you want to play again (Y for yes, N for no): ";
        cin >> playGame;
        while((playGame != 'Y') && (playGame != 'y') && (playGame != 'N') && (playGame != 'n')){
            cout << "Please enter Y for yes or N for no: ";
            cout << playGame;
        }
    }while((playGame == 'Y') || (playGame == 'y'));
    
    //Output results of all games
    totalGames = player1Score + player2Score + tieGame;
    cout << "at the end of all the games, this is the final score:\n";
    cout << "Player 1: " << player1Score << "   Winning ratio: " << ((player1Score/(float)totalGames)*100) << "%" << endl;
    cout << "Player 2: " << player2Score << "   Winning ratio: " << ((player2Score/(float)totalGames)*100) << "%" << endl;
    cout << "Tie game: " << tieGame <<  "   tie ratio: " << (tieGame/(double)totalGames) << "%" << endl;
    cout << endl;
    
    //Save final game
    ofstream outputFile;
    outputFile.open("saveGame.txt");
    cout << "Saving scores..." << endl;
    outputFile << "Player 1: " << player1Score << "   Winning ratio: " << ((player1Score/(float)totalGames)*100) << "%\n"; 
    outputFile << "Player 2: " << player2Score << "   Winning ratio: " << ((player2Score/(float)totalGames)*100) << "%\n";
    outputFile << "Tie game: " << tieGame <<  "   tie ratio: " << (tieGame/(double)totalGames) << "%\n";
    cout << "Done.\n\n";
    
    //Close file
    outputFile.close();
    
    //Reading file
    string player1Results;
    string player2Results;
    string tieGameResults;
    ifstream inputFile;
    inputFile.open("saveGame.txt");
    
    //Output file content
    cout << "Result from previous games:\n";
    getline(inputFile, player1Results);
    cout << player1Results << endl;
    getline(inputFile, player2Results);
    cout << player2Results << endl;
    getline(inputFile, tieGameResults);
    cout << tieGameResults << endl;

    //Close file
    inputFile.close();
    
    //Exit stage right!
    return 0;
}