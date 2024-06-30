Tic-Tac-Toe Game
This is a simple command-line implementation of the classic Tic-Tac-Toe game in C++. Players take turns marking spaces in a 3x3 grid. The game ends when a player wins by filling three consecutive spaces in a row, column, or diagonal, or when all spaces are filled without a winner.


Gameplay:

Players take turns entering their moves using the format row [1-3] col [1-3].
The game board is displayed after each move, showing the current state of the game.
The game ends when a player wins or when it's a draw.

Code Explanation:
Functions
drawBoard(const vector<vector<char>>& board): Draws the current state of the Tic-Tac-Toe board.
isGameOver(const vector<vector<char>>& board, char& winner): Checks if the game is over (win or draw).
makeMove(vector<vector<char>>& board, int row, int col, char player): Makes a move on the board for the current player.

Main Function:
Initializes an empty 3x3 board and starts with player 'X'.
Continues to alternate turns between players until the game is over.
Displays the final board state and announces the winner or declares a draw.

Controls
Players enter moves using the command line. For example, entering row 1 col 1 marks the top-left corner of the board.
Enjoy playing Tic-Tac-Toe.
Feel free to modify the code.
