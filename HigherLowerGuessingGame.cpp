#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void play(int i) {
	int rand = i;
	int guess;

	cout << "Please enter an int between 0 and 10: ";
	cin >> guess;

	if (guess < rand) {
		cout << "Too low!" << endl;
		play(rand);
	}
	else if (guess == rand) {
		cout << "Correct!" << endl;
	}
	else {
		cout << "Too low!" << endl;
		play(rand);
	}
}


void end() {
	char playAgain;
	cout << "Play again? (y/n)" << endl;
	cin >> playAgain;

	if (playAgain == 'y' || playAgain == 'Y') {
		srand(time(NULL));
		int i = (rand() % 10) + 1; //random number from 0 to 10
		cout << (i) << endl;

		play(i);
		end();
	}
}


int main() {
	srand(time(NULL));
	int i = (rand() % 10) + 1; //random number from 0 to 10
	cout << (i) << endl;

	play(i);
	
	end();

	string y;
	getline(cin, y);
	return 0;
}
