#include <iostream>
using namespace std;
void printBoard(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << "|";
        }
        cout << endl
             << "----------" << endl;
    }
}
bool check(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return true;
        }
    }
    for (int j = 0; j < 3; j++)
    {
        if (board[0][j] != ' ' && board[0][j] == board[1][j] && board[1][j] == board[2][j])
        {
            return true;
        }
    }
    if (
        (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]))
    {
        return true;
    }

    return false;
}
void play(char board[3][3])
{
    int turn = 1;
    /**
     * 1(0,0) |2(0,1) |3(0,2)
     * -------
     * 4(1,0) |5(1,1) |6(1,2)
     * -------
     * 7(2,0) |8(2,1) |9(2,2)
     */
    int pos;
    while (turn < 10)
    {
        cout << endl
             << "Player " << ((turn % 2 == 0) ? 'X' : 'O') << "Enter position:";
        cin >> pos;

        int r = (pos - 1) / 3;
        int c = (pos - 1) % 3;

        if (board[r][c] != 'O' && board[r][c] != 'X')
        {
            if (turn % 2 == 0)
            {
                board[r][c] = 'X';
            }
            else
            {
                board[r][c] = 'O';
            }
            printBoard(board);
            if (check(board))
            {
                cout << endl
                     << "Player " << ((turn % 2 == 0) ? 'X' : 'O') << " win!!!";
                return;
            }
            turn++;
        }
        else
        {
            cout << endl
                 << "Enter other location as this is occupied" << endl;
        }
    }
    cout << endl
         << "Oops match draw";
}
int main()
{
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}};
    printBoard(board);
    play(board);
    return 0;
}
