#include "Rook.h"

Rook::Rook(Color color, int x, int y) : Piece(PieceType::ROOK, color, x, y) {}

char Rook::getSymbol() {
    if (color == Color::WHITE){
        return 'R';
    } else {
        return 'r';
    }
}

