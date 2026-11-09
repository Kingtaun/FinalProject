#include "Board.h"
#include "Move.h"

// Unqique type of piece that moves forward either one or 2 squares, captures diagonally, and can promote.

class Pawn : public Piece {
    public:
        using Piece::Piece;

        char getSymbol();
        bool isValidMove(Move move, Board board);
};