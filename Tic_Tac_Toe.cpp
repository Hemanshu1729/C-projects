#include <iostream>
#include <vector>

using namespace std;

// Function to draw the tic-tac-toe board
void drawBoard(const vector<vector<char>>& board) {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "| ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "-------------" << endl;
    }
}

// Function to check if the game is over (win or draw)
bool isGameOver(const vector<vector<char>>& board, char& winner) {
    // Check rows
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            winner = board[i][0];
            return true;
        }
    }
    // Check columns
    for (int j = 0; j < 3; ++j) {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ') {
            winner = board[0][j];
            return true;
        }
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        winner = board[0][0];
        return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        winner = board[0][2];
        return true;
    }
    // Check for draw
    bool draw = true;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                draw = false;
                break;
            }
        }
        if (!draw) break;
    }
    if (draw) {
        winner = ' '; // No winner in case of a draw
        return true;
    }
    return false;
}

// Function to make a move on the board
void makeMove(vector<vector<char>>& board, int row, int col, char player) {
    board[row][col] = player;
}

int main() {
    // Initialize an empty 3x3 board
    vector<vector<char>> board(3, vector<char>(3, ' ')); 
    char currentPlayer = 'X';
    char winner = ' ';
    int row, col;

    cout << "Welcome to Tic-Tac-Toe!" << endl;

    while (!isGameOver(board, winner)) {
        drawBoard(board);

        // Input validation loop
        do {
            cout << "Player " << currentPlayer << ", enter your move (row [1-3] col [1-3]): ";
            cin >> row >> col;
            row--; // Convert to zero-indexed
            col--; // Convert to zero-indexed
        } while (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ');

        makeMove(board, row, col, currentPlayer);

        // Switch player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    // Game over
    drawBoard(board);
    if (winner != ' ') {
        cout << "Player " << winner << " wins! Congratulations!" << endl;
    } else {
        cout << "It's a draw!" << endl;
    }

    return 0;
}
