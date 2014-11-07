//General includes
#include <iostream>
#include <string>
#include <gtkmm.h>

//Custom includes
#include "Generator.h"
#include "ParametersContainer.h"
#include "PPWindow.h"

using namespace std;


//forward declarations
void textMode(ParametersContainer pm, Generator gen);
int gtkMode(int argc, char *argv[], ParametersContainer pc, Generator gen);


//main loop
int main(int argc, char **argv){

	//make objects that are needed in every mode
	ParametersContainer pc(argc, argv);
	Generator gen(pc.getXChar());

	if(pc.isInTextMode()){
		textMode(pc, gen);
	} if(pc.isInGtkMode()){
		//argc = 1 to prevent gtk errors from custom flags
		gtkMode(1, argv, pc, gen);
	}


	return 0;
}


//Starts the program in text mode, just returns the conversion of the input
void textMode(ParametersContainer pc, Generator gen){
	string res = gen.getPPConversion(pc.getInput());
	cout << res << endl;
}

//starts the program in graphical (gtk) mode
int gtkMode(int argc, char *argv[], ParametersContainer pc, Generator gen){
	//needed for every gtk application
	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "net.herrsubset.ppconverter");

	PPWindow ppw(pc, gen);

	return app->run(ppw);
}
