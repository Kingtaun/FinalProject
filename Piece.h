#include "Types.h"

class Move;
class Board;

// Base class for every unique piece.

class Piece {
    protected:
        Color color;
        int x;
        int y;
        bool hasMoved;

    public:
        Piece(Color color, int x, int y);

        Color getColor();

        int getX();
        int getY();
        void setPosition(int x, int y);

        bool getHasMoved();
        char getSymbol();

        bool isValidMove(Move move, Board board);
};
