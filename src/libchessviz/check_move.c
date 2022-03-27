#include "check_move.h"

#include <stdio.h>

int check_move(char tmp, char figure)
{    
    switch (figure)
    {
	case 'P':
	    if (tmp != 'P' && tmp != 'p')
            {
                printf("Error: it's not a pawn!\n");
                return 1;
            }
	    break;
	case 'R':
	    if (tmp != 'R' && tmp != 'r')
            {
                printf("Error: it's not a rook!\n");
                return 1;
            }
            break;
	case 'N':
            if (tmp != 'N' && tmp != 'n')
            {
                printf("Error: it's not a knight!\n");
                return 1;
            }
            break;
	case 'B':
            if (tmp != 'B' && tmp != 'b')
            {
                printf("Error: it's not a bishop!\n");
                return 1;
            }
            break;
	case 'Q':
            if (tmp != 'Q' && tmp != 'q')
            {
                printf("Error: it's not a queen!\n");
                return 1;
            }
            break;
	case 'K':
            if (tmp != 'K' && tmp != 'k')
            {
                printf("Error: it's not a king!\n");
                return 1;
            }
            break;
    }
   
    return 0;
}
