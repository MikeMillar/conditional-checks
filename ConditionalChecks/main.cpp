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

	if (value < 3) {
		cout << "Insufficient privileges to use this menu option." << endl;
	}
	else {
		cout << "Privilege level sufficient." << endl;
	}

	return 0;
}