#include <iostream>
#include <vector>
#include <string>

using namespace std;


void displayBoard(vector<vector<char> > &board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}


bool checkWin(vector<vector<char> > &board, char player) {
   
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }

   
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}


bool checkDraw(vector<vector<char> > &board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == '-')
                return false;
        }
    }
    return true;
}

int main() {
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        vector<vector<char> > board(3, vector<char>(3, '-'));

        char currentPlayer = 'X';
        bool gameEnd = false;

        while (!gameEnd) {
            displayBoard(board);
            cout << "Player " << currentPlayer << ", enter your move (row and column): ";
            int row, col;
            cin >> row >> col;

            if (row < 0 || row > 2 || col < 0 || col > 2) {
                cout << "Invalid move. Try again!" << endl;
                continue;
            }

            if (board[row][col] == '-') {
                board[row][col] = currentPlayer;

                if (checkWin(board, currentPlayer)) {
                    displayBoard(board);
                    cout << "Player " << currentPlayer << " wins!" << endl;
                    gameEnd = true;
                } else if (checkDraw(board)) {
                    displayBoard(board);
                    cout << "It's a draw!" << endl;
                    gameEnd = true;
                } else {
                    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
                }
            } else {
                cout << "Cell already occupied. Try again!" << endl;
            }
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    }

    return 0;
}

