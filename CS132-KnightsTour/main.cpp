/*
 Author:        Taylor Bisset
 Section:       A
 Assignment:    Knights Tour
 Description:   Knights Tour is a sequence of moves around a chessboard 
                so that a knight visits every location. 
*/
#include <iostream>

using namespace std;

// create board size
const int boardSize = 5; 

// set characters used in printing the board 
char horLine = 196, verLine = 179, spaceDot = 250;

int startX = 0;
int startY = 0;
int currentPosX = 0;
int currentPosY = 0;
int tryNum = 1; 

/* - - - - - - - - - - PROTOTYPES - - - - - - - - - - */ 

void printBoard(int board[boardSize][boardSize]); 
bool knightMove(int board[boardSize][boardSize], int newX, int newY); 

/* - - - - - - - - - - MAIN - - - - - - - - - - */

int main()
{
    int chessboard[boardSize][boardSize] = {spaceDot}; 
    printBoard(chessboard);
}

/* - - - - - - - - - - FUNCTIONS - - - - - - - - - - */

void printBoard(int board[boardSize][boardSize])
{
    for (int row = 0; row < boardSize; row++)                   // row logic 
    {
        for (int row = 0; row < ((boardSize * 5) + 1); row++)   // row horizontal line
        {
            cout << horLine;
        }
        cout << endl;

        for (int col = 0; col < boardSize; col++)               // column logic     print "| xx "
        {
            cout << verLine << "  " << spaceDot << " "; // to-do: if statement for single digit vs double digit
        }
        cout << verLine << endl;                                // print column vertical line   "|"
    }

    for (int row = 0; row < ((boardSize * 5) + 1); row++)       // ending row horizontal line
    {
        cout << horLine;
    }
    cout << endl;
}

bool knightMove(int board[boardSize][boardSize], int newX, int newY)
{
    /*
    
    ...move logic...
    
    */
    if (newX < 0 || newY < 0 || newX > boardSize || newY > boardSize)
    {
        return false;
    }
    // else if ... find valid position that has not been visited. if it is a number, then invlad.
}
