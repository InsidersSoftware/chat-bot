#include "Voice.h"
#include <Windows.h>

void Voice::say(string phrase) {
	string command = "espeak \"" + phrase + "\"";
	const char* charCommand = command.c_str();
	cout << phrase << endl;
	system(charCommand);
}