#ifndef PARAMETERSCONTAINER_H
#define PARAMETERSCONTAINER_H

#include <string>
#include <unistd.h>

using namespace std;


//class representing the state of the command line options
class ParametersContainer{
	private:
		//variables
		bool inTextMode = true;
		bool inGtkMode = false;
		string input;
		string xChar = "p";

	public:
		//constructor
		ParametersContainer(int argc, char **argv);
		//getters
		bool isInTextMode();
		bool isInGtkMode();
		string getInput();
		string getXChar();

};

#endif
