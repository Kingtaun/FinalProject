#include "Board.h"
#include "Move.h"

// Unique type of piece that moves one square in any direction and can castle.

class King : public Piece {
    public:
        using Piece::Piece;

        char getSymbol();
        bool isValidMove(Move move, Board board);
};