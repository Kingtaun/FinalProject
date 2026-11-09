#include "Piece.h"
#include "Move.h"
#include <vector>

// Owns the pieces, executes moves, and answers questions about check, checkmate, and stalemate.

class Board {
    private:
        Piece** board = new Piece*[8];
        std::vector<Move> moveHistory;

    public:
        Board();

        void setupInitialPosition();

        bool movePiece(Move move);
        Piece* getPiece(int x, int y);

        bool isPathClear(Move move);
        bool isInCheck(Color color);
        bool isCheckmate(Color color);
        bool isStalemate(Color color);
};