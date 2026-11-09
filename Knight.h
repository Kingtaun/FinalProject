#include "Board.h"
#include "Move.h"

// Unique type of piece that moves in an L shape and can jump over other pieces.

class Knight : public Piece {
    public:
        using Piece::Piece;

        char getSymbol();
        bool isValidMove(Move move, Board board);
};