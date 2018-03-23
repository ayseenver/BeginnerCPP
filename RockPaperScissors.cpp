#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

void play() {
	srand(time(NULL));

	string userInput;
	int userChoice;

	cout << "Choose from rock, paper or scissors: ";
	cin >> userInput;


	if (userInput == "rock") {
		userChoice = 0;
	}
	else if (userInput == "paper") {
		userChoice = 1;
	}
	else if (userInput == "scissors") {
		userChoice = 2;
	}
	else {
		userChoice = -1;
	}


	int i = (rand() % 10 + 2); //random number from 0 to 11
	int cpuChoice;


	if (i >= 0 && i <= 3) {
		cout << "Cpu chose rock!" << endl;
		cpuChoice = 0; //rock
	}
	else if (i >= 4 && i <= 7) {
		cout << "Cpu chose paper!" << endl;
		cpuChoice = 1; //paper
	}
	else {
		cout << "Cpu chose scissors!" << endl;
		cpuChoice = 2; //scissors
	}


	if (userChoice == cpuChoice) {
		cout << "Tie!" << endl;
	}
	else if (userChoice == 0 && cpuChoice == 2) {
		cout << "Player win!" << endl;
	}
	else if (userChoice == 1 && cpuChoice == 0) {
		cout << "Player win!" << endl;
	}
	else if (userChoice == 2 && cpuChoice == 1) {
		cout << "Player win!" << endl;
	}
	else if (userChoice == -1) {
		cout << "User choice invalid!" << endl;
	}
	else {
		cout << "Cpu win!" << endl;
	}


	char playAgain;
	cout << "Play again? (y/n)" << endl;
	cin >> playAgain;

	if (playAgain == 'y' || playAgain == 'Y') {
		play();
	}
}


int main() {
	play();


	string y;
	getline(cin, y);
	return 0;
}
