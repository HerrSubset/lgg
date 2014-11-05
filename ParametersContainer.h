#ifndef PARAMETERSCONTAINER_H
#define PARAMETERSCONTAINER_H

#include <string>
#include <unistd.h>

using namespace std;

class ParametersContainer{
	private:
		bool inTextMode = true;
		bool inGtkMode = false;
		string input;
		string xChar = "p";

	public:
		ParametersContainer(int argc, char **argv);
		bool isInTextMode();
		bool isInGtkMode();
		string getInput();
		string getXChar();

};

#endif
