#ifndef PARAMETERSCONTAINER_H
#define PARAMETERSCONTAINER_H

#include <string>
#include <unistd.h>

using namespace std;

class ParametersContainer{
	private:
		bool inTextMode = true;
		string input;

	public:
		ParametersContainer(int argc, char **argv);
		bool isInTextMode();
		string getInput();

};

#endif