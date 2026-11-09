
# classDiagram

class Color {
    <<enumeration>>
    WHITE
    BLACK
}

class PieceType {
    <<enumeration>>
    PAWN
    ROOK
    KNIGHT
    BISHOP
    QUEEN
    KING
}

class Piece {
    #color : Color
    #x : int
    #y : int
    #hasMoved : bool
    +getColor() Color
    +getX() int
    +getY() int
    +setPosition(x, y) void
    +getHasMoved() bool
    +getSymbol() char
    +isValidMove(move, board) bool
}

class Pawn {
    +getSymbol() char
    +isValidMove(move, board) bool
}

class Rook {
    +getSymbol() char
    +isValidMove(move, board) bool
}

class Knight {
    +getSymbol() char
    +isValidMove(move, board) bool
}

class Bishop {
    +getSymbol() char
    +isValidMove(move, board) bool
}

class Queen {
    +getSymbol() char
    +isValidMove(move, board) bool
}

class King {
    +getSymbol() char
    +isValidMove(move, board) bool
}

class Move {
    +fromX : int
    +fromY : int
    +toX : int
    +toY : int
    +isPromoted : bool
    +promotionType : PieceType
    +capturedPiece : Piece*
}

class Board {
    -map : Piece*[8][8]
    -moveHistory : vector~Move~
    +setupInitialPosition() void
    +movePiece(move) bool
    +getPiece(x, y) Piece*
    +isPathClear(move) bool
    +isInCheck(color) bool
    +isCheckmate(color) bool
    +isStalemate(color) bool
}

class Game {
    -board : Board
    -currentTurn : Color
    -isRunning : bool
    +run() void
    +processTurn() void
    +switchTurn() void
    +isGameOver() bool
}

Piece <|-- Pawn
Piece <|-- Rook
Piece <|-- Knight
Piece <|-- Bishop
Piece <|-- Queen
Piece <|-- King

Game *-- Board
Board "1" *-- "0..32" Piece
Board "1" *-- "0..*" Move

Piece ..> Move
Piece ..> Board
Piece --> Color
Move --> PieceType