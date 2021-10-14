#include <iostream>

using namespace std;

int main() {

	// Declare variables
	string name;
	string input;


	cout << "Hi there, I'm chatbot v1, what's your name?" << endl;
	cin >> name;
	cout << "It's nice to meet your " << name << " is your day going well today? (please answer in y or n)" << endl;
	cin >> input;

	while (input.length() >= 1) {
		if (input == "y") {
			cout << endl << "That's great to hear, I'm glad you're having a great day" << endl;
			return 0;

		}
		else if (input == "Y") {
			cout << endl << "That's great to hear, I'm glad you're having a great day" << endl;
			return 0;
		}
		else if (input == "n") {
			cout << endl << "I'm sorry to hear that, I hope your day gets better soon." << endl;
			return 0;
		}
		else if (input == "N") {
			cout << endl << "I'm sorry to hear that, I hope your day gets better soon." << endl;
			return 0;
		}
		else {
			cout << endl << "Error, please user the suggested format above." << endl;
			cout << "It's nice to meet you " << name << " is your day going well today? (Answer with y or n)" << endl;
			break;
		}
	}

	
	return 0;
}