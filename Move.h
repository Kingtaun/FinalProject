#include "Types.h"
#include "Piece.h"

// Describes a single move, its start and end squares, and any promotion or capture.

class Move {
    private:
        int fromX;
        int fromY;
        int toX;
        int toY;

        PieceType promotionType;
        Piece* capturedPiece = nullptr;

    public:
        Move(int fromX, int fromY, int toX, int toY);

        bool isPromotion();
        void setPromotion(PieceType type);
        PieceType getPromotionType();

        bool isCapture();
        Piece* getCapturePiece();
        void setCapturePiece(Piece* piece);
};