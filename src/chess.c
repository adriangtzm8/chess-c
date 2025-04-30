#include <stdio.h>
#include "chess.h"

void initBoard(Board* board) {
    Piece layout[8][8] = {
        {br, bh, bb, bq, bk, bb, bh, br},
        {bp, bp, bp, bp, bp, bp, bp, bp},
        {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
        {wp, wp, wp, wp, wp, wp, wp, wp},
        {wr, wh, wb, wq, wk, wb, wh, wr}
    };

    for (int i = 0; i < 8; ++i)
        for (int j = 0; j < 8; ++j)
            board->board[i][j] = layout[i][j];

    board->state = 0;
    board->turn = 0;
}

void printPiece(Piece piece) {
    switch (piece) {
        case br: printf("br"); break;
        case bh: printf("bh"); break;
        case bb: printf("bb"); break;
        case bq: printf("bq"); break;
        case bk: printf("bk"); break;
        case bp: printf("bp"); break;
        case wr: printf("wr"); break;
        case wh: printf("wh"); break;
        case wb: printf("wb"); break;
        case wq: printf("wq"); break;
        case wk: printf("wk"); break;
        case wp: printf("wp"); break;
        default: printf("  "); break;
    }
}
void printBoard(Board* board) {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            printPiece(board->board[i][j]);
            printf(" ");
        }
        printf("\n");
    }
}
