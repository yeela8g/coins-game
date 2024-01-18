//Ye'ela Granot		209133107		group number- 11

#include <iostream>
#include <stdlib.h>
using namespace std;
#include "coins.h"

void printWelcomeMessage() {//start
	cout << "***********************************************\n";
	cout << "* THE COINS GAME *\n";
	cout << "***********************************************\n";
	return;
}
void getNumOfCells(int& numOfCells) {//size of board
	bool flag = 1;
	while (flag) {
		cout << "Please enter the size of the board (10-25):\n";
		cin >> numOfCells;
		if (numOfCells >= MIN_BOARD_SIZE && numOfCells <= MAX_BOARD_SIZE) {
			flag=0;
		}
	}
	return;
}
void initBoard(int board[], unsigned int boardSize) {//initial the board
	for (int i = 0; i < boardSize; i++)
	{
		board[i] = 0;
	}
	return;
}
void placeCoins(int board[], unsigned int boardSize) {//place coins randomly
	int index;
	for (int i = 0; i < NUM_OF_COINS; i++) {
		do {
			index = rand() % boardSize;
		} while (board[index] == 1);
		board[index] = 1;
	}
	return;
}

	void printLine(unsigned int boardSize) {//printing the lines
		for (int i = 0; i < (3 * boardSize); ++i) {
			cout << "-";
		}
		cout << endl;
		return;
	}

	void printBoard(int board[], unsigned int boardSize) {//printing the inside places
		for (int i = 0; i < boardSize; i++){
			cout << "|";
			if (board[i]){
				cout << "**";
			}
			else { cout << "  "; }
		}
		cout << "|" << endl;
		return;
	}
	void makeMove(int board[], unsigned int boardSize, int playerNum) {//making one move
		int place;
		int destination;
		bool pass=0;
		do{//choosePlace
			cout << "\nPlayer " << playerNum + 1 << ", please choose the coin to move:\n";
			cin >> place;
			if (place<=0 || place >boardSize) { cout << "Invalid location of coins.\n"; }//validRange
			if (board[place - 1]==0) { cout << "Error: no coin in this location.\n"; }//validInput
		} while (board[place - 1] == 0 || place<=0 || place> boardSize);
		do{//chooseDestination
			cout << "Please choose the new location of this coin:\n";
			cin >> destination;
			if (board[destination - 1]) { cout << "Error: this location is already used.\n\n"; }//validInput
			if (destination >= place) { cout << "Error: Only left moves are allowed.\n"; }//validDirection
			for (int i = destination; i < place-1; i++) {//check no passing:
				if (board[i] == 1) {
					cout << "Error : Passing over another coin is not allowed.\n";
					pass = 1;
					break;
				}
			}
		} while (board[destination - 1] || destination >= place || pass);
		board[place-1] = 0;//switch
		board[destination-1] = 1;//switch
		return;
	}

	bool isGameOver(int board[], unsigned int boardSize) {//extra moves possible?
		for (int i = 0; i < NUM_OF_COINS; ++i) {
			if (board[i] == 0) {
				return false;
			}
		}
		return true;
	}
	
	void printGameSummary(int board[], unsigned int boardSize, int playerNum) {//winning announcement
		cout << "\n*** WINNER: PLAYER "<< playerNum +1 << " ***\n";
		return;
	}
	