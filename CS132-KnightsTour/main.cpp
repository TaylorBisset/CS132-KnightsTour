/*
 Author:        Taylor Bisset
 Section:       A
 Assignment:    Knights Tour
 Description:   Knight's Tour is a sequence of moves around a chessboard 
                so that a knight visits every location. 
*/
#include <iostream>
#include <iomanip>

using namespace std;

// create board size
const int boardSize = 5; 

// set characters used in printing the board 
char horLine = 196, verLine = 179, spaceDot = 250;

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

int main()
{
    int startX = 0; 
    int startY = 0; 
    int chessboard[boardSize][boardSize] = {spaceDot}; 
    printBoard(chessboard);
}
