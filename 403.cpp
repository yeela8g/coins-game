//Ye'ela Granot		209133107		group number- 11

#include <iostream>
using namespace std;
#include "coins.h"

int main()
{
	char answer = '1';
	do{//check if to startover
		coinsGame();//play
		cout << "\nPlay again? (0-No/1-Yes):\n" << endl;
		cin >> answer;
	} while (answer == '1');//valid answer for start-over
	cout << "Thanks for playing!" << endl;
}
