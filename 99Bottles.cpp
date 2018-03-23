#include <iostream>
#include <string>
using namespace std;

int main() {

	for (int i = 0; i < 100; i++)
	{
			cout << "There are " << i << " bottles of beer" << endl;
	}

	string y;
	getline(cin, y);
	return 0;
}
