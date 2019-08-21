/*******************************************************************************
** Author:       Risa Fletcher
** Date:         08/12/19
** Description:  A class specification for a board game (2d array) where the
**               offensive player is trying to get to the (7, 7) position and 
**               the defensive player is working to block that player.
*******************************************************************************/
#include "FBoard.hpp"
#include <iostream>

using std::cout;
using std::endl;

/*********************************************************************
** Description: Initialize according to assignment specs
*********************************************************************/
FBoard::FBoard()
{
    // initialize data members
    boardSize = 8;
    xChar = 'x';
    oChar = 'o';
    blankChar = '-';

    for (int row = 0; row < boardSize; row++)
    {
        for (int col = 0; col < boardSize; col++)
        {
            // set offense marker at the origin
            if(row == 0 && col == 0)
            {   
                board[row][col] = xChar;
                // set xPosition to origin
                xPosition[0] = row;
                xPosition[1] = col;
            }  
            // set defense marker in the positions specified
            else if(
                (row == 5 && col == 7) ||
                (row == 6 && col == 6) ||
                (row == 7 && col == 5) ||
                (row == 7 && col == 7)
            )
                board[row][col] = oChar;
            // set remaining cells to a blank value (-)
            else
                board[row][col] = blankChar; 
        }
    }
    // initialize game state as unfinished
    gameState = UNFINISHED;
}

/*********************************************************************
** Description: Getter for gameState
*********************************************************************/
GameState FBoard::getGameState()
{
    return gameState;
}

/*********************************************************************
** Description: print board to the console.
*********************************************************************/
void FBoard::printBoard()
{
    for(int row = 0; row < boardSize; row++)
    {
        for(int column = 0; column < boardSize; column++)
        {
            cout << board[row][column] << ' ';
        }
        cout << endl;
    }
}

/*********************************************************************
** Description: a check to see if desired coords are within the 
**              bounds of the board.
*********************************************************************/
bool FBoard::isMoveInBounds(int row, int column)
{
    return row >= 0 &&
           row < boardSize &&
           column >= 0 &&
           column < boardSize;
}

/*********************************************************************
** Description: a check to see if the desired space is occupied
*********************************************************************/
bool FBoard::isSpaceOccupied(int row, int column)
{
    return board[row][column] != blankChar;
}

/*********************************************************************
** Description: a check to see if the desired space is a valid
**              (diagonal) move.
*********************************************************************/
bool FBoard::isDestAdjacent(int currentRow,
                            int currentColumn,
                            int destRow,
                            int destColumn)
{
    // if destination coordinates are in the row above or below the current row
    // and to the left or right of the current column, it must be diagonal
    if (destRow == currentRow - 1 || destRow == currentRow + 1)
        return destColumn == currentColumn - 1 || destColumn == currentColumn + 1;
    else
        return false;   
}

/*********************************************************************
** Description: a check to see if the move complies with all the 
**              rules.
*********************************************************************/
bool FBoard::isMoveValid(int currentRow,
                         int currentColumn,
                         int destRow,
                         int destColumn)
{
    bool gameIsOver = gameState != UNFINISHED;
    bool moveIsInBounds = isMoveInBounds(destRow, destColumn);
    bool destSpaceIsOccupied = isSpaceOccupied(destRow, destColumn);
    bool destIsAdjacent = isDestAdjacent(currentRow, currentColumn, destRow, destColumn);

    // if desired move complies with the rules, return true
    return !gameIsOver && moveIsInBounds && !destSpaceIsOccupied && destIsAdjacent;
}

/*********************************************************************
** Description: moves the marker and clears out the previous space
*********************************************************************/
void FBoard::moveMarker(int currentRow,
                        int currentColumn,
                        int destRow,
                        int destColumn,
                        char marker)
{
    // fill in new cell
    board[destRow][destColumn] = marker;
    // clear out last cell
    board[currentRow][currentColumn] = blankChar;
}

/*********************************************************************
** Description: takes as parameters the row and column of the square
**              to move X to
*********************************************************************/
bool FBoard::moveX(int row, int column)
{
    int xMarkerRow = xPosition[0];
    int xMarkerColumn = xPosition[1];
    bool moveIsValid = isMoveValid(xMarkerRow, xMarkerColumn, row, column);

    if(moveIsValid)
    {
        moveMarker(xMarkerRow, xMarkerColumn, row, column, xChar);
        // update xPosition coordinates
        xPosition[0] = row;
        xPosition[1] = column;
        // if reached the last space, x wins
        if(row == 7 && column == 7)
        {
            cout << "X Wins!" << endl;
            gameState = X_WON;  
        }   

        return true;
    }
    else
        return false;
}

/*********************************************************************
** Description: takes as parameters the row and column of the square
**              to move O to
*********************************************************************/
bool FBoard::moveO( int currentRow,
                    int currentColumn,
                    int destRow,
                    int destColumn )
{
    // additional checks before O can move: is the space and O space?
    //                                      cannot move backwards, only forward
    bool currentSpaceIsYours = board[currentRow][currentColumn] == oChar;
    bool isMovingBackwards = destRow > currentRow && destColumn > currentColumn;
    bool moveIsValid =  isMoveValid(currentRow,
                                    currentColumn,
                                    destRow,
                                    destColumn) &&
                        !isMovingBackwards && currentSpaceIsYours;
    // if the move is valid, move the marker and check to see if X has moves left
    if (moveIsValid)
    {
        moveMarker(currentRow, currentColumn, destRow, destColumn, oChar);

        // test out each possible move left for x
        bool xHasMovesLeft = isMoveValid(xPosition[0],
                                         xPosition[1],
                                         xPosition[0] - 1,
                                         xPosition[1] - 1) ||
                             isMoveValid(xPosition[0],
                                         xPosition[1],
                                         xPosition[0] - 1,
                                         xPosition[1] + 1) ||
                             isMoveValid(xPosition[0],
                                         xPosition[1],
                                         xPosition[0] + 1,
                                         xPosition[1] - 1) ||
                             isMoveValid(xPosition[0],
                                         xPosition[1],
                                         xPosition[0] + 1,
                                         xPosition[1] + 1);

        // after moving the marker, if x has no viable moves, O wins
        if(!xHasMovesLeft)
        {
            cout << "O Wins!" << endl;
            gameState = O_WON;
        }
        
        return true;
    }
    else
        return false;
}





