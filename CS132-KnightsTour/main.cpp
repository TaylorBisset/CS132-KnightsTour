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

int tryNum = 0;
int moveCount = 1;

int startX = 0;
int startY = 0;
int currentX = 0;
int currentY = 0;

int chessboard[boardSize][boardSize] = { 0 };

// move #:   1   2   3   4   5   6   7   8
int dx[] = { 1,  2,  2,  1, -1, -2, -2, -1};
int dy[] = { 2,  1, -1, -2, -2, -1,  1,  2};

/* - - - - - - - - - - PROTOTYPES - - - - - - - - - - */ 

void printBoard(int board[boardSize][boardSize]); 
bool validMoveFound();

/* - - - - - - - - - - MAIN - - - - - - - - - - */

int main()
{
    if (moveCount == boardSize * boardSize && validMoveFound)
    {
        printBoard(chessboard);
        cout << "Knight's Tour was completed in " << tryNum << " steps.\n";
    }
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

        for (int col = 0; col < boardSize; col++)               // column logic     print "| ## "
        {
            cout << verLine << " ";                                 // print " " at start

            if (board[row][col] == 0)                               // print " ."
            {
                cout << " " << spaceDot;
            }
            else if (board[row][col] > 0 && board[row][col] < 10)   // print " #"
            {
                cout << " " << board[row][col];
            }
            else                                                    // print "##"
            {
                cout << board[row][col];
            }

            cout << " ";                                            // print " " at end
        }
        cout << verLine << endl;                                // print column vertical line   "|"
    }

    for (int row = 0; row < ((boardSize * 5) + 1); row++)       // ending row horizontal line
    {
        cout << horLine;
    }
    cout << endl;
}

bool validMoveFound()
{
    if (chessboard[currentX][currentY] == 0   && 
        currentX >= 0 && currentX < boardSize && 
        currentY >= 0 && currentY < boardSize)
    {
        return true;
    }
    else
    {
        return false;
    }
}



//void knightMove(int board[boardSize][boardSize], int currentX, int currentY)
//{
//    int move;
//    tryNum++;
//    if (tryNum % 1000 == 0)
//    {
//        printBoard(board);
//        cout << endl << "Total tries: " << tryNum << endl;
//    }
//
//    for (move = 0; move < 8; move++)
//    {
//        currentX += dx[move];
//        currentY += dy[move];
//    }
//}

// transition this to void
//bool knightMove(int board[boardSize][boardSize], int newX, int newY)
//{
//    board[newX][newY] += moveCount;
//    tryNum++;
//
//    if (tryNum % 1000 == 0)
//    {
//        printBoard(board);
//        cout << endl << "Total tries; " << tryNum << endl;
//    }
//
//    if (newX <= 0 || newY <= 0 || newX >= boardSize || newY >= boardSize)
//    {
//        return false;
//    }
//    
//    if (moveCount == boardSize * boardSize)
//    {
//        return true;
//    }
//
//    for (int move = 0; move < 8; move++)
//    {
//        currentX = newX + dx[move];
//        currentY = newY + dy[move];
//    }
//
//    moveCount--;
//    return false;
//}

/*

Assignment Details:

P.5 Knight's Tour
Due: Sun Oct 8, 2023 11:59pmDue: Sun Oct 8, 2023 11:59pm
Ungraded, 100 Possible Points
100 Possible Points
Attempt
Attempt 1

In Progress
NEXT UP: Submit Assignment

Unlimited Attempts Allowed

Available: Sep 18, 2023 12:00am until Dec 7, 2023 11:59pm
NOTE: Please try to solve this problem by working on your own or by talking with your classmates. 
This is a very famous problem, and so there are solutions to this problem in many books and on the web, 
but if you solve the problem by looking at those solutions then you robbing yourself of the joy learning 
and accomplishment of struggling with a problem/concept and finally gaining the victory over the problem.

Knight's Tour:
In the game of (International) Chess the knight moves in an unusual pattern of 2 squares horizontally 
and then 1 square vertically or 2 squares vertically and then 1 square horizontally. 

Somewhere along the line the question was asked: 
Could a knight move to every location on a chess board without ever landing on a square more than once. 
This challenge is known as the Knight's Tour.

Your assignment is to come up with a recursive solution to the Knight's Tour. 
As your knight travels the board record the squares that he has touched by storing the move count, 
so for example the first square that the knight starts from would be marked with a 1 
and the next square that the knight moves to would be marked with a 2 and so on 
until on a normal 8x8 chess board the knight moves to the last square and stores a 64 there......
the knight would have them completed his tour. 
For this assignment, it is ok to use some global variables for recording some of the statistics you may want 
( move count, tries, board, ect ).

Remember in recursion you call a function to solve a problem, 
then the function will call itself to solve the next step of the problem. 
This will go on until the function gets to some ending solution. 
In this case, your function would be a move for the knight, 
and it would call itself for the next place to try moving to, 
which would call itself for the next place to move, and so on, and so on.

Programming Note:

Think about what information needs to be passed into the function 
and what information needs to be returned from the function.
What are the things that you need to do in a square?
For output from the program, you need to print out a map of where the knight visited in his tour. 
Here is an example of a Knight's Tour for a 5x5 board starting from the upper left corner:

Yeehaw!!! after 41 tries
and 16 bad moves
 1 20 17 12  3
16 11  2  7 18
21 24 19  4 13
10 15  6 23  8
25 22  9 14  5

I do also want you to display the number of tries 
(these were squares the knight actually moved i.e. an empty square on the board).

Debugging Suggestions: 
For debugging use a 5x5 board to see if the recursive calls are working. 
This is nice for following the algorithm for a few moves. 
Have the board print out after each move when you are first testing to verify that your algorithm is working. 
Once you are convinced your algorithm is good, 
you can have the board printed periodically to give you an update 
( I had mine print out after every 10 million tries... 
some of the tours on an 8x8 board can take a while.... 
starting at location 4, 4 (when first row and col are 0) 
the program ran over night and had tried 62,200,000,000 moves 
and had a ways to go before solving it with this brute force algorithm). 
The solution for a tour starting at 0,0 did not take that long; 
and only took 3,242,065 tries to find the solution.

I solved the problem by using a function prototype like the following:

bool moveKnight( int row, int col, int movNum);
The boolean return value I used as a signal of the results of the function;  
false meant this call could not move further,  
true meant that the end was found (eventually) from this move.  
This is just a way of thinking of it, and your are not required to have the same function prototype.

Use setw while printing out your board so that you output is clean and easier to read.

Turn in: For turn in you should have your program give a solution for a knight's tour on an 8x8 board.  
Paste this board as a comment below your program.

Turn in your program file with the output copied from the output window as a comment below your program.    
The file format for turning in files is pdf.     
If you have a program that can easily convert your program file to pdf, do that 
(One way to do that is within the print dialog box instead of selecting a printer 
you can often select Save as PDF ).       
Last choice only if you can't convert to pdf:  Append the .txt extension to your .cpp files.    
For example prog1.cpp would be prog1.cpp.txt

Thank you

Global Data:  
Usually I do not allow global data that is not constant, 
but for this program you can make the board and the number of tries as global variables.

Ways to lose points:

if your file does not contain the program header with a program description 
and short function descriptions to accompany the function prototypes (for functions used with main).
your code should also be consistently indented as talked about in class, and shown in the book, and class
you should use good variable names (descriptive, and start with lower case letter )
proper placement of { and } ( a } should not be placed at the end of a line)
no staple to keep your papers together (folding a corner or using a paper clip are not good enough)
Comments: Comments are a way of documenting a program (explaining who did what and how). 
All programs for the rest of the course are required to have the following header documentation 
and inline documentation to explain any tricky pieces of code.

////
// Author:       Your Name
// Section:      A or S
// Assignment:   #
// Description:  Short description of what the program accomplishes
// (at least a couple sentences � also you should say where the input
//  data comes from, what information is output, and where the output
//  data is sent to (the screen or a file)
////

#include <iostream>.......the rest of the program
*/
