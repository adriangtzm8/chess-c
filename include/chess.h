#ifndef CHESS_H
#define CHESS_H

typedef enum {
    wp, wh, wb, wr, wq, wk,

    bp, bh, bb, br, bq, bk,

    EMPTY = -1
} Piece;

typedef struct {
    Piece board[8][8];
    int state;
    int turn;
} Board;

typedef struct {
    int x;
    int y;
} BoardPos;

void initBoard(Board* board);
void printPiece(Piece piece);
void printBoard(Board* board);
void movePiece(Board* board, BoardPos start, BoardPos end);

#endif // CHESS_H
