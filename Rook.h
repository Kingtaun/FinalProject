#include "Board.h"
#include "Move.h"

// Unique type of piece that moves any distance in a straight line along a row or column.

class Rook : public Piece {
    public:
        Rook(Color color, int x, int y);

        char getSymbol();
        bool isValidMove(Move move, Board board) override;
};