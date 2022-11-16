#include <stdio.h>
char board[3][3];
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void player2Move();
char checkWinner();
void printWinner(char);

int main()
{
    char winner = ' ';
    printf("Welcome to Tic-Tac-Toe Game! It will be fun, so let's begin.\n");
    resetBoard();
    while (winner == ' ' && checkFreeSpaces() != 0)
    {
        printBoard();
        playerMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }
        player2Move();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }
    }
    printWinner(winner);
    return 0;
}
void resetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}
void printBoard()
{
    printf("|%c|%c|%c|\n", board[0][0], board[0][1], board[0][2]);
    printf("-------\n");
    printf("|%c|%c|%c|\n", board[1][0], board[1][1], board[1][2]);
    printf("-------\n");
    printf("|%c|%c|%c|\n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}
int checkFreeSpaces()
{
    int freeSpaces = 9;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}
void playerMove()
{
    int x, i = 0;
    int y, slot_num;

    do
    {
        printf("Player-1 please enter");
        if (i == 1)
        {
            printf(" a valid ");
        }
        printf("slot number (0-8) >> ");
        scanf("%d", &slot_num);
        if (slot_num == 0)
        {
            x = 1, y = 1;
            x--;
            y--;
        }
        else if (slot_num == 1)
        {
            x = 1, y = 2;
            x--;
            y--;
        }
        else if (slot_num == 2)
        {
            x = 1, y = 3;
            x--;
            y--;
        }
        else if (slot_num == 3)
        {
            x = 2, y = 1;
            x--;
            y--;
        }
        else if (slot_num == 4)
        {
            x = 2, y = 2;
            x--;
            y--;
        }
        else if (slot_num == 5)
        {
            x = 2, y = 3;
            x--;
            y--;
        }
        else if (slot_num == 6)
        {
            x = 3, y = 1;
            x--;
            y--;
        }
        else if (slot_num == 7)
        {
            x = 3, y = 2;
            x--;
            y--;
        }
        else if (slot_num == 8)
        {
            x = 3, y = 3;
            x--;
            y--;
        }

        if (board[x][y] != ' ')
        {
            i++;
            printf("You have entered an invalid move.\n");
            printf("Slot %d is already occupied! Please Try Again!\n", slot_num);
            continue;
        }
        else
        {
            board[x][y] = PLAYER1;
            break;
        }
    } while (board[x][y] != ' ');
    printBoard();
}
void player2Move()
{
    int x, i = 0;
    int y, slot_num;
    if (checkFreeSpaces() > 0)
    {
        {
            do
            {
                printf("Player-2 please enter");
                if (i == 1)
                {
                    printf(" a valid ");
                }
                printf("slot number (0-8) >> ");
                scanf("%d", &slot_num);
                if (slot_num == 0)
                {
                    x = 1, y = 1;
                    x--;
                    y--;
                }
                else if (slot_num == 1)
                {
                    x = 1, y = 2;
                    x--;
                    y--;
                }
                else if (slot_num == 2)
                {
                    x = 1, y = 3;
                    x--;
                    y--;
                }
                else if (slot_num == 3)
                {
                    x = 2, y = 1;
                    x--;
                    y--;
                }
                else if (slot_num == 4)
                {
                    x = 2, y = 2;
                    x--;
                    y--;
                }
                else if (slot_num == 5)
                {
                    x = 2, y = 3;
                    x--;
                    y--;
                }
                else if (slot_num == 6)
                {
                    x = 3, y = 1;
                    x--;
                    y--;
                }
                else if (slot_num == 7)
                {
                    x = 3, y = 2;
                    x--;
                    y--;
                }
                else if (slot_num == 8)
                {
                    x = 3, y = 3;
                    x--;
                    y--;
                }
                if (board[x][y] != ' ')
                {
                    i++;
                    printf("You have entered an invalid move.\n");
                    printf("Slot %d is already occupied! Please Try Again!\n", slot_num);
                    continue;
                }
                else
                {
                    board[x][y] = PLAYER2;
                    break;
                }
            } while (board[x][y] != ' ');
        }
        board[x][y] = PLAYER2;
    }
    else
    {
        printWinner(' ');
    }
}
char checkWinner()
{
    // check rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
        {
            return board[i][0];
        }
    }
    // check columns
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
        {
            return board[0][i];
        }
    }
    // check diagonals
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        return board[0][2];
    }

    return ' ';
}
void printWinner(char winner)
{
    if (winner == PLAYER1)
    {
        printf("Player-1 won the game!");
    }
    else if (winner == PLAYER2)
    {
        printf("Player-2 won the game!");
    }
    else
    {
        printf("Match has been Tied!");
    }
}
// End Of Program
