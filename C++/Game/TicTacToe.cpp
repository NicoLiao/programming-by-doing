#include <iostream>

using namespace std;

class TTT {
	private:
		char board[3][3];
	public: 
	void initBoard();
	void displayBoard();
	void displayBoard2();
	void playerChoice(char player);
	bool winGame(char player);

};
void TTT::initBoard() {
	for ( int r=0; r<3; r++ )
		for ( int c=0; c<3; c++ )
			board[r][c] = ' ';
}
void TTT::displayBoard() {
	cout << endl;
	cout << "  0  " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
	cout << "    ---+---+---" << endl;
	cout << "  1  " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
	cout << "    ---+---+---" << endl;
	cout << "  2  " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
	cout << "     0   1   2\n" << endl;
}
void TTT::displayBoard2() {
	for ( int r=0; r<3; r++ )
	{
		cout << "\t" << r << " ";
		for ( int c=0; c<3; c++ )
		{
			cout << board[r][c] << " ";;
		}
		cout << endl;
	}
	cout << "\t  0 1 2 " << endl;
}
void TTT::playerChoice( char player) {
	int row, column;
	cout << "'" << player << "', choose your location (row, column): ";
	cin >> row;
	cin >> column;

	board[row][column] = player;
}
bool TTT::winGame( char player) {
	for ( int r = 0; r < 3; r++ )
	{
		if ( player == board[r][0] && board[r][0] == board[r][1] && board[r][1] == board[r][2] )
			return true;
	}
	
	// check vertical
	for ( int c = 0; c < 3; c++ )	
	{
		if ( player == board[0][c] && board[0][c] == board[1][c] && board[1][c] == board[2][c] )
			return true;
	}
	
	// check diagonal
	if ( player == board[0][0] && board[0][0] == board[1][1] && board[1][1] == board[2][2] )
			return true;
	else if ( player == board[0][2] && board[0][2] == board[1][1] && board[1][1] == board[2][0] )
			return true;
	
	
	return false;
}
int main() {
	char player1 = 'X', player2 = 'O';
	TTT game;
	int turn = 1;

	game.initBoard();
	game.displayBoard();

	while ( true )
	{
		cout << "Turn " << turn << "..." <<endl;
		if ( turn % 2 != 0 )
		{
			game.playerChoice(player1);
			turn++;
		}
		else 
		{
			game.playerChoice(player2);
			turn++;
		}
		game.displayBoard();
		
		// check for game end
		if ( game.winGame(player1) )
		{
			cout << "'" << player1 << "' wins the game!" << endl;
			break;
		}
		else if ( game.winGame(player2) )
		{
			cout << "'" << player2 << "' wins the game!" << endl;
			break;
		}
		else if ( turn > 9 )
		{
			cout << "This game is a tie." << endl;
			break;
		}
		
	}
	return 0;
}