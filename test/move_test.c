#include <ctest.h>
#include <libchessviz/check_move.h>

char chess_field[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                          {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                          {32, 32, 32, 32, 32, 32, 32, 32},
                          {32, 32, 32, 32, 32, 32, 32, 32},
                          {32, 32, 32, 32, 32, 32, 32, 32},
                          {32, 32, 32, 32, 32, 32, 32, 32},
                          {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                          {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

//Pawns
CTEST (check_move_pawns, black_pawn)
{
    ASSERT_EQUAL(0, check_move(chess_field[1][4], 'P'));
}

CTEST (check_move_pawns, white_pawn)
{
    ASSERT_EQUAL(0, check_move(chess_field[6][6], 'P'));
}

CTEST (check_move_pawns, not_pawn)
{
    ASSERT_EQUAL(1, check_move(chess_field[3][2], 'P'));
}

//Rooks
CTEST (check_move_rooks, black_rook)
{
    ASSERT_EQUAL(0, check_move(chess_field[0][0], 'R')); 
}

CTEST (check_move_rooks, white_rook)
{
    ASSERT_EQUAL(0, check_move(chess_field[7][7], 'R'));
}

CTEST (check_move_rooks, not_rook)
{
    ASSERT_EQUAL(1, check_move(chess_field[5][4], 'R'));
}

//Knights
CTEST (check_move_knights, black_knight)
{
    ASSERT_EQUAL(0, check_move(chess_field[0][6], 'N'));
}

CTEST (check_move_knights, white_knight)
{
    ASSERT_EQUAL(0, check_move(chess_field[7][1], 'N'));
}

CTEST (check_move_rooks, not_knight)
{
    ASSERT_EQUAL(1, check_move(chess_field[5][4], 'N'));
}

//Bishops
CTEST (check_move_bishops, black_bishop)
{
    ASSERT_EQUAL(0, check_move(chess_field[0][2], 'B'));
}

CTEST (check_move_bishops, white_bishop)
{
    ASSERT_EQUAL(0, check_move(chess_field[0][5], 'B'));
}

CTEST (check_move_bishops, not_bishop)
{
    ASSERT_EQUAL(1, check_move(chess_field[5][4], 'B'));
}

//Queens
CTEST (check_move_queens, black_queen)
{
    ASSERT_EQUAL(0, check_move(chess_field[0][3], 'Q'));
}

CTEST (check_move_queens, white_queen)
{
    ASSERT_EQUAL(0, check_move(chess_field[7][3], 'Q'));
}

CTEST (check_move_queens, not_queen)
{
    ASSERT_EQUAL(1, check_move(chess_field[5][4], 'Q'));
}

//Kings
CTEST (check_move_kings, black_king)
{
    ASSERT_EQUAL(0, check_move(chess_field[0][4], 'K'));
}

CTEST (check_move_kings, white_king)
{
    ASSERT_EQUAL(0, check_move(chess_field[7][4], 'K'));
}

CTEST (check_move_kings, not_king)
{
    ASSERT_EQUAL(1, check_move(chess_field[5][4], 'K'));
}

