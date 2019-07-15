#include <iostream>

using namespace std;

int main() {
	/*string password = "hello";
	cout << "Enter your password > " << flush;

	string input;
	cin >> input;

	cout << "'" << input << "'" <<endl;

	if (input == password) {
		cout << "Password accepted." << endl;
	}
	if (input != password) {
		cout << "Access denied." << endl;
	}*/

	cout << "1.\tAdd new record." << endl;
	cout << "2.\tDelete record." << endl;
	cout << "3.\tView record." << endl;
	cout << "4.\tSearch record." << endl;
	cout << "5.\tQuit." << endl;

	cout << "Enter your Selection > " << flush;
	int value;
	cin >> value;

	if (value == 1) {
		cout << "Adding new record ..." << endl;
	}
	else if (value == 2) {
		cout << "Deleting record ..." << endl;
	}
	else if (value == 3) {
		cout << "Viewing record ..." << endl;
	}
	else if (value == 4) {
		cout << "Searching for record ..." << endl;
	}
	else if (value == 5) {
		cout << "Program quitting ..." << endl;
	}
	else {
		cout << "Invalid selection.";
	}

	return 0;
}