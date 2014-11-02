#include <iostream>
#include <string>

#include "Generator.h"
#include "ParametersContainer.h"

using namespace std;

void textMode(ParametersContainer pm, Generator gen);

int main(int argc, char **argv){

	Generator gen;
	ParametersContainer pc(argc, argv);

	if(pc.isInTextMode()){
		textMode(pc, gen);
	}


	return 0;
}



void textMode(ParametersContainer pc, Generator gen){
	string res = gen.getPPConversion(pc.getInput());
	cout << res << endl;
}