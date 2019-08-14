/*******************************************************************************
** Author:       Risa Fletcher
** Date:         08/12/19
** Description:  A class specification for a board game (2d array) where the
**               offensive player is trying to get to the (7, 7) position and 
**               the defensive player is working to block that player.
*******************************************************************************/
#include "FBoard.hpp"

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
                xPosition[row] = row;
                xPosition[col] = col;
            }  
            // set defense marker in the positions specified
            else if(
                row == 5 && col == 7 ||
                row == 6 && col == 6 ||
                row == 7 && col == 5 ||
                row == 7 && col == 7
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

bool FBoard::isMoveInBounds(int row, int column)
{
    return row >= 0 &&
           row < BOARD_SIZE &&
           column >= 0 &&
           column < BOARD_SIZE;
}

bool FBoard::isSpaceOccupied(int row, int column)
{
    return board[row][column] != blankChar;
}

bool FBoard::isDestAdjacent(int destRow,
                            int destColumn,
                            int currentRow,
                            int currentColumn)
{
    if (destRow == currentRow - 1 || destRow == currentRow + 1)
        return destColumn == currentColumn - 1 || currentColumn + 1;
    else
        return false;   
}

bool FBoard::isMoveValid(int destRow,
                         int destColumn,
                         int currentRow,
                         int currentColumn)
{
    bool gameIsOver = gameState != UNFINISHED;
    bool moveIsInBounds = isMoveInBounds(destRow, destColumn);
    bool destSpaceIsOccupied = isSpaceOccupied(destRow, destColumn);
    bool destIsAdjacent = isDestAdjacent(destRow, destColumn, currentRow, currentColumn);

    // if desired move complies with the rules, return true
    return !gameIsOver && moveIsInBounds && !destSpaceIsOccupied && destIsAdjacent;
}

bool FBoard::moveMarker(int destRow,
                        int destColumn,
                        int currentRow,
                        int currentColumn,
                        char marker)
{
    // fill in new cell
    board[destRow][destColumn] = marker;
    // clear out last cell
    board[currentRow][currentColumn] = blankChar;
}

/*********************************************************************
** Description: takes as parameters the row and column of the square
** to move X to
*********************************************************************/
    bool FBoard::moveX(int row, int column)
{
    bool xMarkerRow = xPosition[0];
    bool xMarkerColumn = xPosition[1];
    bool moveIsValid = isMoveValid(row, column, xMarkerRow, xMarkerColumn);

    if(moveIsValid)
    {
        moveMarker(row, column, xMarkerRow, xMarkerColumn, xChar);
        // update xPosition coordinates
        xMarkerRow = row;
        xMarkerColumn = column;
        // if reached the last space, x wins
        if(row == 7 && column == 7)
            gameState = X_WON;

        return true;
    }
    else
        return false;
}

bool FBoard::moveO( int currentRow,
                    int currentColumn,
                    int destRow,
                    int destColumn )
{
    bool currentSpaceIsYours = board[currentRow][currentColumn] == oChar;
    bool isMovingBackwards = destRow > currentRow && destColumn > currentColumn;
    bool moveIsValid =  isMoveValid(currentRow,
                                   currentColumn,
                                   destRow,
                                   destColumn) &&
                        !isMovingBackwards && currentSpaceIsYours;

    if (moveIsValid)
    {
        moveMarker(destRow, destColumn, currentRow, currentColumn, oChar);

        // test out each possible move left for x
        bool xHasMovesLeft = isMoveValid(xPosition[0],
                                         xPosition[1],
                                         xPosition[0] - 1,
                                         xPosition[1] - 1) &&
                             isMoveValid(xPosition[0],
                                         xPosition[1],
                                         xPosition[0] - 1,
                                         xPosition[1] + 1) &&
                             isMoveValid(xPosition[0],
                                         xPosition[1],
                                         xPosition[0] + 1,
                                         xPosition[1] - 1) &&
                             isMoveValid(xPosition[0],
                                         xPosition[1],
                                         xPosition[0] + 1,
                                         xPosition[1] + 1);
        // after moving the marker, if x has no viable moves, O wins
        if(!xHasMovesLeft)
            gameState = O_WON;
    }
    else
        return false;
}





