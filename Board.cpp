#include "Board.h"

Board::Board(){
    for (int i = 0; i < 8; i++){
        board[i] = new Piece[8];
    }
}


void Board::setupInitialPosition(){
    
}
void Board::fillBackRow(int row, Color color){
    board[row][0] = Piece(PieceType::ROOK, color);
}
void Board::fillPawnRow(){

}


bool Board::movePiece(Move move){

}
Piece* Board::getPiece(int x, int y){

}


bool Board::isPathClear(Move move){

}
bool Board::isInCheck(Color color){

}
bool Board::isCheckmate(Color color){

}
bool Board::isStalemate(Color color){

}