#include <iostream>
#include "Learner.h"

using namespace std;

main() {
	Learner AI;

	for (;;) {
		cout << "\n You:";
		string phrase;
		getline(cin, phrase);

		cout << "Computer: ";
		AI.respond(phrase);
	}
}