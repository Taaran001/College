#include <iostream>
using namespace std;

char board[8][8];

bool isSafe(int row, int col)
{
    int i, j;

    // Check the same row on the left
    j = col - 1;

    while (j >= 0)
    {
        if (board[row][j] == 'Q')
            return false;

        j--;
    }

    // Check upper-left diagonal
    i = row - 1;
    j = col - 1;

    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 'Q')
            return false;

        i--;
        j--;
    }

    // Check lower-left diagonal
    i = row + 1;
    j = col - 1;

    while (i < 8 && j >= 0)
    {
        if (board[i][j] == 'Q')
            return false;

        i++;
        j--;
    }

    return true;
}

bool solveNQueens(int col)
{
    if (col >= 8)
        return true;

    for (int row = 0; row < 8; row++)
    {
        if (isSafe(row, col))
        {
            board[row][col] = 'Q';

            if (solveNQueens(col + 1))
                return true;

            // Backtracking
            board[row][col] = '-';
        }
    }

    return false;
}

int main()
{
    cout << "Name: Tanisha\n";
    cout << "Roll No: 27482\n\n";

    // Initialize the board with empty cells
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            board[i][j] = '-';
    }

    if (solveNQueens(0))
    {
        cout << "Solution for 8-Queens Problem:\n";

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
                cout << board[i][j] << " ";

            cout << endl;
        }
    }
    else
    {
        cout << "No solution exists.";
    }

    return 0;
}
