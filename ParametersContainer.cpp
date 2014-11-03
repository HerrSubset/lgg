#include "ParametersContainer.h"

ParametersContainer::ParametersContainer(int argc, char **argv){
	int c;
	opterr = 0;
	while ((c = getopt (argc, argv, "gti:")) != -1){
	    switch (c){
	      case 't':
	        inTextMode = true;
	        break;
	      case 'g':
	      	inTextMode = false;
	      	inGtkMode = true;
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

bool ParametersContainer::isInGtkMode(){
	return inGtkMode;
}

string ParametersContainer::getInput(){
	return input;
}