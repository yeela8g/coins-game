//Ye'ela Granot		209133107		group number- 11

#include <iostream>
#include "coins.h"
using namespace std;

void coinsGame() {
	printWelcomeMessage();
	int board[MAX_BOARD_SIZE];
	int boardSize;
	getNumOfCells(boardSize);
	initBoard(board, boardSize);
	placeCoins(board, boardSize);
	printLine(boardSize);
	printBoard(board, boardSize);
	printLine(boardSize);
	int moveNumber = 0;
	while (!isGameOver(board, boardSize)) {//no winner yet
		int playerNum = (moveNumber % NUM_OF_PLAYERS);//which turn
		++moveNumber;//next turn
		makeMove(board, boardSize, playerNum);
		printLine(boardSize);//re-print
		printBoard(board, boardSize);
		printLine(boardSize);
		if (isGameOver(board, boardSize)){
			printGameSummary(board, boardSize, playerNum);
		}
	}
}










