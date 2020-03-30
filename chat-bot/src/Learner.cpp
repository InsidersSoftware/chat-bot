#include "Learner.h"

void Learner::respond(string phrase)
{
	fstream memory;
	memory.open("memory/memory.txt", ios::in); //Open The Memory File Fo Input.

	//Search through the file until the end is reached.
	while (!memory.eof()) {
		string identifier;
		getline(memory, identifier);

		if (identifier == phrase) {
			string response;
			getline(memory, respond);
			voice.say(response);
			return;
		}
	}

	memory.close();
	memory.open("memory/memory.txt", ios::out || ios::app);
	memory << phrase << endl;

	voice.say(phrase);
	string userResponse;
	cout << "You: ";
	getline(cin, userResponse);
	memory << userResponse << endl;
	memory.close();
}

void Learner::say(string phrase) {
	this->voice.say(phrase);
}