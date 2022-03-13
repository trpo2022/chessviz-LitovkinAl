#include "read_move.h"
#include <libchessviz/print_field.h>

int main()
{
    // initializing the chessboard
    char chess_field[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                             {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                             {32, 32, 32, 32, 32, 32, 32, 32},
                             {32, 32, 32, 32, 32, 32, 32, 32},
                             {32, 32, 32, 32, 32, 32, 32, 32},
                             {32, 32, 32, 32, 32, 32, 32, 32},
                             {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                             {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
    print_field(chess_field);

    read_move(chess_field);

    return 0;
}

