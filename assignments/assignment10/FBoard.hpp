/*******************************************************************************
** Author:       Risa Fletcher
** Date:         08/12/19
** Description:  A class interface for a board game (2d array) where the
**               offensive player is trying to get to the (7, 7) position and 
**               the defensive player is working to block that player.
*******************************************************************************/
#ifndef FBOARD_HPP
#define FBOARD_HPP

enum GameState { X_WON, O_WON, UNFINISHED };

class FBoard
{
    private:
        int xPosition[2],
            boardSize;
        char
            board[8][8],
            xChar,
            oChar,
            blankChar;
        GameState gameState;
        bool isMoveInBounds(int, int);
        bool isSpaceOccupied(int, int);
        bool isDestAdjacent(int, int, int, int);
        bool isMoveValid(int, int, int, int);
        void moveMarker(int, int, int, int, char);

    public:
        FBoard();
        GameState getGameState();
        void printBoard();
        bool moveX(int, int);
        bool moveO(int, int, int, int);
};

#endif