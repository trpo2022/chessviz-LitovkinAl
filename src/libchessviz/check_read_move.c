#include <libchessviz/check_read_move.h>

#include <stdio.h>

int check_read_move(char r_move[10])
{
    if (r_move[0] >= 97 && r_move[0] <= 104)
    {
        if (r_move[3] < 97 || r_move[3] > 104 || r_move[1] < 49 || r_move[1] > 56
            || r_move[4] < 49 || r_move[4] > 56)
        {
            printf("Error: incorrectly entered field.\n");
            return 2;
        }
    }
    else if (r_move[0] == 'K' || r_move[0] == 'Q' || r_move[0] == 'R'
             || r_move[0] == 'N' || r_move[0] == 'B')
    {
        if (r_move[1] < 97 || r_move[1] > 104 || r_move[4] < 97
            || r_move[4] > 104 || r_move[2] < 49 || r_move[2] > 56
            || r_move[5] < 49 || r_move[5] > 56)
        {
            printf("Error: incorrectly entered field.\n");
            return 2;
        }
    }
    else
    {
        printf("Error: incorrectly entered figure.\n");
        return 1;
    }

    return 0;
}

