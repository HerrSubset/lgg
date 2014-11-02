#include "ParametersContainer.h"

ParametersContainer::ParametersContainer(int argc, char **argv){
	int c;
	opterr = 0;
	while ((c = getopt (argc, argv, "ti:")) != -1){
	    switch (c){
	      case 't':
	        inTextMode = true;
	        break;
	      case 'i':
	        input = optarg;
	        break;
	      }
	}

}

bool ParametersContainer::isInTextMode(){
	return inTextMode;
}

string ParametersContainer::getInput(){
	return input;
}