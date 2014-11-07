#include "ParametersContainer.h"

ParametersContainer::ParametersContainer(int argc, char **argv){
	int c;
	opterr = 0;
	while ((c = getopt (argc, argv, "gti:x:")) != -1){
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
	      case 'x':
	      	xChar = optarg;
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

string ParametersContainer::getXChar(){
	return xChar;
}