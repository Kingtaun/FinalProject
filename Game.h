#include "Board.h"
#include "Piece.h"

// Runs the turn loop and keeps track of whose turn it is.

class Game {
    private:
        Board board;
        Color currentTurn;
        bool isRunning;

    public:
        Game();

        void run();
        void processTurn();
        void switchTurn();
        bool isGameOver();
};