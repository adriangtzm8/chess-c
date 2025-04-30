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

void initBoard(Board* board);
void printPiece(Piece piece);
void printBoard(Board* board);

#endif // CHESS_H
