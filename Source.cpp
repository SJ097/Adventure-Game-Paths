/* Adventure game. Created by Sathya Jayakumar.
   This was programmed as C++ practice.
   This program has a header file (Header.h) containing crucial functions and variables. */

using namespace std;

// Library and header declaration
#include <iostream>
#include "Header.h"

// The program is very straightforward and explanitory, the only important thing having to make decisions on what to do
int main() {

	cout << "What is your name? (Maximum 10 characters) ";

	cin >> name;

	while (strlen(name) > 10) {
		cout << "\n\nName is too long. Try again: ";
		cin >> name;
	}

	cin.get();

	cout << "\n\nHello, " << name << "! Welcome to the world of Canadaland!\n";

	cin.get();

	cout << "\nAfter saving the capital from a mass attack, your world's princess has invited you over for lunch.\n\n";
	cout << "\nWhat an honor! Not many people have met Her Higness in person! You are so ecstatic!\n";

	cin.get();

	cout << "\nAll of a sudden, you hear screams...\n";

	cin.get();

	cout << "\n'He- help me!!!'\n'Keep it down, will ya princess? You're comin' with me and returning you will make me filthy rich!'\n";

	cin.get();

	cout << "\nThat sounds like the princess! You have to hurry to the castle and save her!\n";

	cin.get();

	cout << "\nSuddenly, enemies attack! There aren't many so you can easily escape them.\n";

	cin.get();

	int first;

	cout << "\nWill you\n1. Defeat them\n2. Run away\n\n";
	cin >> first;

	cin.get();

	if (first == 1)
		cout << "\nYou defeated the enemies with ease!\n";

	else cout << "\nYou ran away from the enemies who fell flat on their faces!\n";

	cin.get();

	cout << "\nYou hurry to the castle but suddenly run into a fork in the road!\nThey both lead to the castle, so left or right?\n1. Left\n2. Right\n\n";
	cin >> fork;

	while (fork != 1 && fork != 2) {
		cout << "\nThere's no time to waste! Left or right?\n\n";
		cin >> fork;
	}

	if (fork == 1)
		left();

	else if (fork == 2)
		right();

	cout << "\nThank you for playing!\n";

	cin.get();

	return 0;
}