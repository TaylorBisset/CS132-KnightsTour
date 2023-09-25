/*
 Author:        Taylor Bisset
 Section:       A
 Assignment:    Knights Tour
 Description:   Knight's Tour is a sequence of moves around a chessboard 
                so that a knight visits every location. 
*/
#include <iostream>

using namespace std;

// create board size
const int boardSize = 5; 

// set characters used in printing the board 
char horLine = 196, verLine = 179, spaceDot = 250;

void printBoard(int board[boardSize][boardSize])
{
    for (int row = 0; row < boardSize; row++)
    {
        for (int col = 0; col < boardSize; col++)
        {
            cout << spaceDot;
        }
        cout << endl;
    }
}

int main()
{
    int chessboard[boardSize][boardSize];
    printBoard(chessboard);
}
