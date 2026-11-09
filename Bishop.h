#include "Board.h"
#include "Move.h"

// Unique type of piece that moves any distance diagonally.

class Bishop : public Piece {
    public:
        using Piece::Piece;

        char getSymbol();
        bool isValidMove(Move move, Board board);
};