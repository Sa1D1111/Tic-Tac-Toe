// Salvador Delgado
// 12/12/2021
// Final Project: Tic-Tac-Toe
// CIS-5

#include <iostream>
#include <iomanip>
using namespace std;

char board[3][3] = { '1','2','3','4', '5', '6', '7', '8', '9' };
char player = 'X';
char AI = 'O';
int playAgain();
int choice;
int a;
int n = 0;
int compWins = 0;
int compTies = 0;
int userWins = 0;
int playerTwoWins = 0;
int ties = 0;
int play = 1;


void Draw()
{
	system("cls");
	cout << "Tic-Tac-Toe\n" << endl;
	cout << "Player 1 = X \t Player 2 = O\n" << endl;
	cout << "     |     |     \n";
	cout << "  " << board[0][0] << "  | " << board[0][1] << "   |  " << board[0][2] << " \n";
	cout << "_____|_____|_____\n";
	cout << "     |     |     \n";
	cout << "  " << board[1][0] << "  | " << board[1][1] << "   |  " << board[1][2] << " \n";
	cout << "_____|_____|_____\n";
	cout << "     |     |     \n";
	cout << "  " << board[2][0] << "  | " << board[2][1] << "   |  " << board[2][2] << " \n";
	cout << "     |     |     \n";
}

void drawComp()
{
	system("cls");
	cout << "Tic-Tac-Toe\n" << endl;
	cout << "Player 1 = X \t Computer = O\n" << endl;
	cout << "     |     |     \n";
	cout << "  " << board[0][0] << "  | " << board[0][1] << "   |  " << board[0][2] << " \n";
	cout << "_____|_____|_____\n";
	cout << "     |     |     \n";
	cout << "  " << board[1][0] << "  | " << board[1][1] << "   |  " << board[1][2] << " \n";
	cout << "_____|_____|_____\n";
	cout << "     |     |     \n";
	cout << "  " << board[2][0] << "  | " << board[2][1] << "   |  " << board[2][2] << " \n";
	cout << "     |     |     \n";
}

void changePlayer()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}

void twoPlayer()
{
	Draw();

	cout << "It's " << player << " turn. " << "Select an open spot 1 - 9 please ";
	cin >> a;

	if (a == 1)
	{
		if (board[0][0] == '1')
		{
			board[0][0] = player;
		}
		else
		{
			cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
			cin.ignore();
			cin.get();
			twoPlayer();
		}

	}
	else if (a == 2)
	{
		if (board[0][1] == '2')
		{
			board[0][1] = player;
		}
		else
		{
			cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
			cin.ignore();
			cin.get();
			twoPlayer();
		}
	}
	else if (a == 3)
	{
		if (board[0][2] == '3')
		{
			board[0][2] = player;
		}
		else
		{
			cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
			cin.ignore();
			cin.get();
			twoPlayer();
		}
	}
	else if (a == 4)
	{
		if (board[1][0] == '4')
		{
			board[1][0] = player;
		}
		else
		{
			cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
			cin.ignore();
			cin.get();
			twoPlayer();
		}
	}
	else if (a == 5)
	{
		if (board[1][1] == '5')
		{
			board[1][1] = player;
		}
		else
		{
			cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
			cin.ignore();
			cin.get();
			twoPlayer();
		}
	}
	else if (a == 6)
	{
		if (board[1][2] == '6')
		{
			board[1][2] = player;
		}
		else
		{
			cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
			cin.ignore();
			cin.get();
			twoPlayer();
		}
	}
	else if (a == 7)
	{
		if (board[2][0] == '7')
		{
			board[2][0] = player;
		}
		else
		{
			cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
			cin.ignore();
			cin.get();
			twoPlayer();
		}
	}
	else if (a == 8)
	{
		if (board[2][1] == '8')
		{
			board[2][1] = player;
		}
		else
		{
			cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
			cin.ignore();
			cin.get();
			twoPlayer();
		}
	}
	else if (a == 9)
	{
		if (board[2][2] == '9')
		{
			board[2][2] = player;
		}
		else
		{
			cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
			cin.ignore();
			cin.get();
			twoPlayer();
		}
	}
	else if (a != 9)
	{
		cout << " \nChoose a spot 1 - 9 please. Press Enter first, then choose again please" << endl;
		cin.ignore();
		cin.get();
		twoPlayer();
	}

}



void aiPlay()
{

	int seed = time(0);
	srand(seed);
	int randNum = 1 + rand() % 9;

	drawComp();
	//cout << "It's " << player << " turn. " << "Select the number for the spot you would like to choose! ";
	//cin >> a;

	cout << "Comps choice" << endl;
	randNum;

	if (randNum == 1)
	{
		if (board[0][0] == '1')
		{
			board[0][0] = player;

		}
		else
		{
			aiPlay();
		}

	}
	else if (randNum == 2)
	{
		if (board[0][1] == '2')
		{
			board[0][1] = player;
		}
		else
		{
			aiPlay();
		}
	}
	else if (randNum == 3)
	{
		if (board[0][2] == '3')
		{
			board[0][2] = player;
		}
		else
		{
			aiPlay();
		}
	}
	else if (randNum == 4)
	{
		if (board[1][0] == '4')
		{
			board[1][0] = player;
		}
		else
		{
			aiPlay();
		}
	}
	else if (randNum == 5)
	{
		if (board[1][1] == '5')
		{
			board[1][1] = player;
		}
		else
		{
			aiPlay();
		}
	}
	else if (randNum == 6)
	{
		if (board[1][2] == '6')
		{
			board[1][2] = player;
		}
		else
		{
			aiPlay();
		}
	}
	else if (randNum == 7)
	{
		if (board[2][0] == '7')
		{
			board[2][0] = player;
		}
		else
		{
			aiPlay();
		}
	}
	else if (randNum == 8)
	{
		if (board[2][1] == '8')
		{
			board[2][1] = player;
		}
		else
		{
			aiPlay();
		}
	}
	else if (randNum == 9)
	{
		if (board[2][2] == '9')
		{
			board[2][2] = player;
		}
		else
		{
			aiPlay();
		}
	}

}

void showStats()
{
	system("cls");
	cout << "Match Points\n";

	cout << "Player 1 Wins: " << userWins << endl;
	cout << "2 Player Ties: " << ties << endl;
	cout << "Player 2 Wins: " << playerTwoWins << endl;
	cout << "\nComputer Wins: " << compWins << endl;
	cout << "Ties with Computer: " << compTies << "\n" << endl;
	playAgain();

	cin.get();
}


void clearBoard()
{
	char boardTwo[] = { '1','2','3','4','5','6','7','8','9' };
	int i = 0;
	for (int row = 0; row < 3; row++)
		for (int col = 0; col < 3; col++)
		{
			board[row][col] = boardTwo[i];
			i++;
		}
}


char playerWins()
{
	// Each pair will allow a user to return a win.
	// First Player \\--
	if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
		return 'X';
	if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
		return 'X';
	if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
		return 'X';
	if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
		return 'X';
	if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
		return 'X';
	if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
		return 'X';
	if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
		return 'X';
	if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X')
		return 'X';
	// Each array combo will return a winner
	// Second Player \\--
	if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
		return 'O';
	if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
		return 'O';
	if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
		return 'O';
	if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
		return 'O';
	if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
		return 'O';
	if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
		return 'O';
	if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
		return 'O';
	if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O')
		return 'O';

	return '/';
}

void displayMenu()
{
	system("cls");
	cout << setfill('*') << setw(119) << "*\n";
	cout <<"\t\t\t\t|Welcome to Tic-Tac-Toe!|\n\n";
	cout << "\t\t\t\t--Select From the Menu Below--\n";
	cout << "\t\t\t\tPress 1 : Play 2 Players\n";
	cout << "\t\t\t\tPress 2 : Play Against The Computer\n";
	cout << "\t\t\t\tPress 3 : Show Stats\n";
	cout << "\t\t\t\tPress 4 : Quit. \n";
	cout << setfill('*') << setw(119) << "*\n";
	cin >> choice;
	while (choice < 1 || choice > 4) {
		cout << "The valid choices are 1, 2, 3, " << " and 4. Please choose again, silly~! \n";
		cin >> choice;
	}
}

int playAgain()
{
	char choice;
	cout << "Would you like to return to the main menu? <y/n>" << endl;
	cin >> choice;
	if (choice == 'y' || choice == 'Y')
	{
		clearBoard();
		displayMenu();
		player = 'X';
		n = 0;
	}
	else
	{
		cout << "\nGoodbye! Thank you for playing! :)\n" << endl;
		system("pause");
		exit(0);
	}
}


int main()
{
	displayMenu();
	do
	{
		switch (choice)
		{
		case 1:
			n++;
			twoPlayer();
			if (playerWins() == 'X')
			{
				cout << "\n\nX Wins!" << endl;
				userWins++;
				playAgain();
				break;
			}
			else if (playerWins() == 'O')
			{
				cout << "\n\nO Wins!" << endl;
				playerTwoWins++;
				playAgain();

				break;
			}
			else if (playerWins() == '/' && n == 9)
			{
				cout << "\n\nIt's a Draw!" << endl;
				ties++;
				playAgain();
				break;
			}
			changePlayer();
			break;

		case 2:
			n++;
			aiPlay();
			if (playerWins() == 'X')
			{
				cout << "\n\nX Wins!" << endl;
				userWins++;
				playAgain();
				break;
			}
			else if (playerWins() == 'O')
			{
				cout << "\n\nO Wins!" << endl;
				compWins++;
				playAgain();
				break;
			}
			else if (playerWins() == '/' && n == 9)
			{
				cout << "\n\nIt's a Draw!" << endl;
				compTies++;
				playAgain();
				break;
			}
			changePlayer();
			break;

		case 3:
			showStats();
			break;

		case 4:
			cout << "I guess we're done here... Goodbye!" << endl;
			system("pause");
			return 0;

		}


	} while (play != 0);


	cin.get();
	return 0;
}


// I could not figure out the proper way to format for the AI to work.
/*void compPlay()
{
	int playy = 1;
	int players = 1;
	int seed = time(0);
	srand(seed);
	int randNum = (rand() % 9);
	int position = 0;

	do
	{
		drawComp();

		if (players == 1)
			players = 2;
		else
			players = 1;

		while (position == 0)
		{
			if (players == 1)
			{

				cout << "It's " << player << " turn. " << "Select the number for the spot you would like to choose! ";
				cin >> a;

				if (a == 1)
				{
					if (board[0][0] == '1')
					{
						board[0][0] = player;
					}
					else
					{
						cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
						cin.ignore();
						cin.get();
						compPlay();
					}

				}

			}
			else if (a == 2)
			{
				if (board[0][1] == '2')
				{
					board[0][1] = player;
				}
				else
				{
					cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
					cin.ignore();
					cin.get();
					compPlay();

				}
			}
			else if (a == 3)
			{
				if (board[0][2] == '3')
				{
					board[0][2] = player;
				}
				else
				{
					cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
					cin.ignore();
					cin.get();
					compPlay();

				}
			}
			else if (a == 4)
			{
				if (board[1][0] == '4')
				{
					board[1][0] = player;
				}
				else
				{
					cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
					cin.ignore();
					cin.get();
					compPlay();

				}
			}
			else if (a == 5)
			{
				if (board[1][1] == '5')
				{
					board[1][1] = player;
				}
				else
				{
					cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
					cin.ignore();
					cin.get();
					compPlay();

				}
			}
			else if (a == 6)
			{
				if (board[1][2] == '6')
				{
					board[1][2] = player;
				}
				else
				{
					cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
					cin.ignore();
					cin.get();
					compPlay();

				}
			}
			else if (a == 7)
			{
				if (board[2][0] == '7')
				{
					board[2][0] = player;
				}
				else
				{
					cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
					cin.ignore();
					cin.get();
					compPlay();

				}
			}
			else if (a == 8)
			{
				if (board[2][1] == '8')
				{
					board[2][1] = player;
				}
				else
				{
					cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
					cin.ignore();
					cin.get();
					compPlay();

				}
			}
			else if (a == 9)
			{
				if (board[2][2] == '9')
				{
					board[2][2] = player;
				}
				else
				{
					cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
					cin.ignore();
					cin.get();
					compPlay();

				}
				play--;

			}

		}

		else if (players == 2)
		{

		if (randNum == 1)
		{
			if (board[0][0] == '1')
			{
				board[0][0] = AI;
				position = 1;
			}
			else
			{
				compPlay();
			}

		}
		else if (randNum == 2)
		{
			if (board[0][1] == '2')
			{
				board[0][1] = AI;
				position = 1;
			}
			else
			{
				compPlay();

			}
		}
		else if (randNum == 3)
		{
			if (board[0][2] == '3')
			{
				board[0][2] = AI;
				position = 1;
			}
			else
			{
				compPlay();

			}
		}
		else if (randNum == 4)
		{
			if (board[1][0] == '4')
			{
				board[1][0] = AI;
				position = 1;
			}
			else
			{
				compPlay();

			}
		}
		else if (randNum == 5)
		{
			if (board[1][1] == '5')
			{
				board[1][1] = AI;
				position = 1;
			}
			else
			{
				compPlay();

			}
		}
		else if (randNum == 6)
		{
			if (board[1][2] == '6')
			{
				board[1][2] = AI;
				position = 1;
			}
			else
			{
				compPlay();

			}
		}
		else if (randNum == 7)
		{
			if (board[2][0] == '7')
			{
				board[2][0] = AI;
				position = 1;
			}
			else
			{
				compPlay();

			}
		}
		else if (randNum == 8)
		{
			if (board[2][1] == '8')
			{
				board[2][1] = AI;
				position = 1;
			}
			else
			{
				compPlay();

			}
		}
		else if (randNum == 9)
		{
			if (board[2][2] == '9')
			{
				board[2][2] = AI;
				position = 1;
			}
			else
			{
				randNum = rand() % 9;
			}
		}
		playy++;
		//system("pause");

		}
	} while (a == -1);

	system("pause");

}


/*if (player == 1)
{

	cout << "It's " << player << " turn. " << "Select the number for the spot you would like to choose! ";
	cin >> a;

	if (a == 1)
	{
		if (board[0][0] == '1')
		{
			board[0][0] = player;
		}
		else
		{
			cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
			cin.ignore();
			cin.get();
			compPlay();
		}

	}

}
else if (a == 2)
{
	if (board[0][1] == '2')
	{
		board[0][1] = player;
	}
	else
	{
		cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
		cin.ignore();
		cin.get();
		compPlay();
	}
}
else if (a == 3)
{
	if (board[0][2] == '3')
	{
		board[0][2] = player;
	}
	else
	{
		cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
		cin.ignore();
		cin.get();
		compPlay();
	}
}
else if (a == 4)
{
	if (board[1][0] == '4')
	{
		board[1][0] = player;
	}
	else
	{
		cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
		cin.ignore();
		cin.get();
		compPlay();
	}
}
else if (a == 5)
{
	if (board[1][1] == '5')
	{
		board[1][1] = player;
	}
	else
	{
		cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
		cin.ignore();
		cin.get();
		compPlay();
	}
}
else if (a == 6)
{
	if (board[1][2] == '6')
	{
		board[1][2] = player;
	}
	else
	{
		cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
		cin.ignore();
		cin.get();
		compPlay();
	}
}
else if (a == 7)
{
	if (board[2][0] == '7')
	{
		board[2][0] = player;
	}
	else
	{
		cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
		cin.ignore();
		cin.get();
		compPlay();
	}
}
else if (a == 8)
{
	if (board[2][1] == '8')
	{
		board[2][1] = player;
	}
	else
	{
		cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
		cin.ignore();
		cin.get();
		compPlay();
	}
}
else if (a == 9)
{
	if (board[2][2] == '9')
	{
		board[2][2] = player;
	}
	else
	{
		cout << " \nSpot is already taken. Press Enter first, then choose again please" << endl;
		cin.ignore();
		cin.get();
		compPlay();
	}

}*/



