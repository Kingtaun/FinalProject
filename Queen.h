#include "Board.h"
#include "Move.h"

// Unique type of piece that moves any distance in a straight line or diagonally.

class Queen : public Piece {
    public:
        using Piece::Piece;

        char getSymbol();
        bool isValidMove(Move move, Board board);
};