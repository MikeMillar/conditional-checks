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

	/*cout << "1.\tAdd new record." << endl;
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
	}*/

	/*
	== equality test
	!= not equal
	< less than
	> greater than
	<= less than or equal
	>= greater than or equal
	&& and operator
	|| or operator
	*/

	/*int value1 = 7;
	int value2 = 4;

	if (value1 < 8) {
		cout << "Condition 1: true" << endl;
	}
	else {
		cout << "Condition 1: false" << endl;
	}

	if (value1 == 7 && value2 == 4) {
		cout << "Condition 2: true" << endl;
	}
	else {
		cout << "Condition 2: false" << endl;
	}

	if (value1 == 7 || value2 == 4) {
		cout << "Condition 3: true" << endl;
	}
	else {
		cout << "Condition 3: false" << endl;
	}*/

	/*int i = 0;

	while (i < 5) {
		cout << "Hello!" << endl;
		i++;
	}

	for (int j = 0; j < 5; j++) {
		cout << "i is: " << j << endl;
		if (j == 3) {
			continue;
		}
		cout << "Looping ... " << endl;
	} */

	/*const string password = "hello";
	string input;

	do {
		cout << "Enter your password > " << flush;
		cin >> input;
		if (input == password) {
			break;
		}
		else {
			cout << "Access denied." << endl;
		}
	} while (input != password);

	cout << "Access granted." << endl;*/

	int value = 5;

	switch (value)
	{
	case 4:
		cout << "Value is 4." << endl;
		break;
	case 5:
		cout << "Value is 5." << endl;
		break;
	case 6:
		cout << "Value is 6." << endl;
		break;
	default:
		cout << "Unrecognized Value." << endl;
		break;
	}


	cout << "Program quitting ..." << endl;

	return 0;
}