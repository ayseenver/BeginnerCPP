#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void play() {
	string question;

	cout << "Ask me a question: ";
	cin >> question;

	cout << "Thinking..." << endl;

	srand(time(NULL));
	int i = (rand() % 10) + 11; //random number from 0 to 20
	
	cout << "i is: " + std::to_string(i) << endl;

	switch (i) {
	case 0:
		cout << "It is certain." << endl;
		break;
	case 1:
		cout << "It is decidedly so." << endl;
		break;
	case 2:
		cout << "Without a doubt." << endl;
		break;
	case 3:
		cout << "Yes definitely." << endl;
		break;
	case 4:
		cout << "You may rely on it." << endl;
		break;
	case 5:
		cout << "As I see it, yes." << endl;
		break;
	case 6:
		cout << "Most likely." << endl;
		break;
	case 7:
		cout << "Outlook good." << endl;
		break;
	case 8:
		cout << "Yes." << endl;
		break;
	case 9:
		cout << "Signs point to yes." << endl;
		break;
	case 10:
		cout << "Reply hazy try again." << endl;
		break;
	case 11:
		cout << "Ask again later." << endl;
		break;
	case 12:
		cout << "Better not tell you now." << endl;
		break;
	case 13:
		cout << "Cannot predict now." << endl;
		break;
	case 14:
		cout << "Concentrate and ask again." << endl;
		break;
	case 15:
		cout << "Don't count on it." << endl;
		break;
	case 16:
		cout << "My reply is no." << endl;
		break;
	case 17:
		cout << "My sources say no." << endl;
		break;
	case 18:
		cout << "Outlook not so good." << endl;
		break;
	case 19:
		cout << "Very doubtful." << endl;
		break;
	case 20:
		cout << "Probably not." << endl;
		break;
	}
}


void end() {
	char playAgain;
	cout << "Play again? (y/n)" << endl;
	cin >> playAgain;

	if (playAgain == 'y' || playAgain == 'Y') {
		play();
		end();
	}
}


int main() {

	play();

	end();

	string y;
	getline(cin, y);
	return 0;
}
