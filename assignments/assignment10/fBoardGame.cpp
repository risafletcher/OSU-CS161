#include "FBoard.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    FBoard fb;
    fb.moveX(1, 1);
    fb.moveX(2, 0);
    fb.moveO(6, 6, 5, 5);
    fb.moveX(3, 1);
    fb.moveX(4, 2);
    fb.moveX(5, 3);
    fb.moveO(7, 5, 6, 4);
    fb.moveO(6, 4, 7, 3);
    // UNCOMMENT BELOW TO TEST CASE FOR O WINNING
    fb.moveX(6, 4);
    fb.moveX(7, 5);
    fb.moveO(7, 3, 6, 4);
    fb.moveO(7, 7, 6, 6);
    fb.moveO(6, 4, 7, 5);
    // UNCOMMENT BELOW TO TEST CASE FOR X WINNING
    // fb.moveO(7, 7, 6, 6);
    // fb.moveO(5, 5, 4, 4);
    // fb.moveO(6, 6, 5, 5);
    // fb.moveX(6, 4);
    // fb.moveX(7, 5);
    // fb.moveX(6, 6);
    // fb.moveX(7, 7);

    fb.printBoard();
    return 0;
};