#include <iostream>
#include <conio.h>
#include <Vector>
#include <string>

using namespace std;

vector<string> numbers (9, " ");

// Function for printing Square Numbers
void print_box_numbers()
{
	cout << "-------\n";
	cout << "|1|2|3|\n";
	cout << "-------\n";
	cout << "|4|5|6|\n";
	cout << "-------\n";
	cout << "|7|8|9|\n";
	cout << "-------\n";
}

// Function to ask player 1 to choose a number
void ask_player_1(){

	int player1;

	cout << "Player 1: \nEnter the number you wish to choose: \n";
	cin >> player1;

	if(numbers[player1 - 1] == " "){
		numbers[player1 - 1] = "X";
	} else {
		ask_player_1();
	}
}

// Function to ask player 2 to choose a number
void ask_player_2(){

	int player2;

	cout << "Player 2: \nEnter the number you wish to choose: \n";
	cin >> player2;

	if(numbers[player2 - 1] == " "){
		numbers[player2 - 1] = "O";
	} else {
		ask_player_2();
	}
}

// Function to print Updated Square
void print_updated_square(){

	cout << "-------\n";
	cout << "|" << numbers[0] << "|" << numbers[1] << "|" << numbers[2] << "|\n";
	cout << "-------\n";
	cout << "|" << numbers[3] << "|" << numbers[4] << "|" << numbers[5] << "|\n";
	cout << "-------\n";
	cout << "|" << numbers[6] << "|" << numbers[7] << "|" << numbers[8] << "|\n";
	cout << "-------\n";
}


// Function to find winner
int isFinished(){

	int finish = 0;

	for(int i = 0; i < numbers.size() - 3; i++){

		if(numbers[i] == "X" & numbers[i + 1] == "X" & numbers[i + 2] == "X"){

			finish = 1;
		}
	}

	for(int i = 0; i < 3; i++){

		if(numbers[i] == "X" & numbers[i + 3] == "X" & numbers[i + 6] == "X"){
			finish = 1;
		}
	}

	if(numbers[0] == "X" & numbers[4] == "X" & numbers[8] == "X"){
		finish = 1;
	}

	if(numbers[2] == "X" & numbers[4] == "X" & numbers[6] == "X"){
		finish = 1;
	}

	for(int i = 0; i < numbers.size() - 3; i++){

		if(numbers[i] == "O" & numbers[i + 1] == "O" & numbers[i + 2] == "O"){

			finish = 2;
		}
	}

	for(int i = 0; i < 3; i++){

		if(numbers[i] == "O" & numbers[i + 3] == "O" & numbers[i + 6] == "O"){
			finish = 2;
		}
	}

	if(numbers[0] == "O" & numbers[4] == "O" & numbers[8] == "O"){
		finish = 2;
	}

	if(numbers[2] == "O" & numbers[4] == "O" & numbers[6] == "O"){
		finish = 2;
	}
	
	return finish;
}

void main()
{
	do
	{
		print_box_numbers();

		ask_player_1();
		print_updated_square();

		if(isFinished() != 0){
			break;
		}

		print_box_numbers();

		ask_player_2();
		print_updated_square();

		if(isFinished() != 0){
			break;
		}

	} while (isFinished() == 0);

	cout << "Player " << isFinished() << " wins!";
	_getch();
}
