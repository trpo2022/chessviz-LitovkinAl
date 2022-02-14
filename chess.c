#include <stdio.h>

void printField(char chessField[8][8]);

int main() 
{
    // initializing the chessboard
    char chessField[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
			     {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
			     {32, 32, 32, 32, 32, 32, 32, 32},
			     {32, 32, 32, 32, 32, 32, 32, 32},
			     {32, 32, 32, 32, 32, 32, 32, 32},
			     {32, 32, 32, 32, 32, 32, 32, 32},
			     {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
			     {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
    printField(chessField);

    return 0;
}

void printField(char chessField[8][8]) 
{
    // printing the chessboard
    for (int i = 0; i < 8; i++) 
    {
        printf("%d ", 8 - i);
	for (int j = 0; j < 8; j++) 
	{
	    printf("%c ", chessField[i][j]);
	}
	printf("\n");
    }
    printf("  a b c d e f g h\n");
}
