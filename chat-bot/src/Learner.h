#ifndef _LEARNER_H
#define _LEARNER_H

#include <iostream>
#include <fstream>
#include "Voice.h"

using namespace std;

class Learner {
public:
	void respond(string phrase); //Used To Get, or teach a response.
	void say(string phrase); //Used To Textually and audibly communicate a phrase.

	Voice voice; //the learner Voice
};


#endif