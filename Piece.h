#include "Types.h"

class Move;
class Board;

// Base class for every unique piece.

class Piece {
    protected:
        PieceType type;
        Color color;
        int x;
        int y;
        bool hasMoved = false;

    public:
        Piece(PieceType type, Color color, int x, int y);

        Color getColor();

        int getX();
        int getY();
        void setPosition(int x, int y);

        bool getHasMoved();
        char getSymbol();

        bool virtual isValidMove(Move move, Board board);
};
