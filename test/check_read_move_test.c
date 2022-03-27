#include <libchessviz/check_read_move.h>

#include <ctest.h>

CTEST(read_figures, pawns)
{
    ASSERT_EQUAL(0, check_read_move("e2-e4"));
}

CTEST(read_figures, not_pawns)
{
    ASSERT_EQUAL(1, check_read_move("k2-e4"));
}

CTEST(read_figures, rooks)
{
    ASSERT_EQUAL(0, check_read_move("Ra1-a4"));
}

CTEST(read_figures, knights)
{
    ASSERT_EQUAL(0, check_read_move("Nb1-a4"));
}

CTEST(read_figures, bishops)
{
    ASSERT_EQUAL(0, check_read_move("Bc1-a4"));
}

CTEST(read_figures, queens)
{
    ASSERT_EQUAL(0, check_read_move("Qd1-a4"));
}

CTEST(read_figures, kings)
{
    ASSERT_EQUAL(0, check_read_move("Ke1-a4"));
}

CTEST(read_figures, not_figure1)
{
    ASSERT_EQUAL(1, check_read_move("Lb1-a4"));
}

//Field
CTEST(read_field, row)
{
    ASSERT_EQUAL(0, check_read_move("Ra1-a4"));
}

CTEST(read_field, not_row1)
{
    ASSERT_EQUAL(2, check_read_move("Ra9-a4"));
}

CTEST(read_field, not_row2)
{
    ASSERT_EQUAL(2, check_read_move("Ra1-a9"));
}

CTEST(read_field, column)
{
    ASSERT_EQUAL(0, check_read_move("Ra1-a4"));
}

CTEST(read_field, not_column1)
{
    ASSERT_EQUAL(2, check_read_move("Rl1-a4"));
}

CTEST(read_field, not_column2)
{
    ASSERT_EQUAL(2, check_read_move("Ra1-l4"));
}

