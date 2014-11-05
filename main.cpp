#include <iostream>
#include <string>
#include <gtkmm.h>

#include "Generator.h"
#include "ParametersContainer.h"
#include "PPWindow.h"

using namespace std;

void textMode(ParametersContainer pm, Generator gen);
int gtkMode(int argc, char *argv[], ParametersContainer pc, Generator gen);

int main(int argc, char **argv){

	ParametersContainer pc(argc, argv);
	Generator gen(pc.getXChar());

	if(pc.isInTextMode()){
		textMode(pc, gen);
	} if(pc.isInGtkMode()){
		char* emptyArray[] = {"pepekestaal"};
		gtkMode(1, emptyArray, pc, gen);
	}


	return 0;
}



void textMode(ParametersContainer pc, Generator gen){
	string res = gen.getPPConversion(pc.getInput());
	cout << res << endl;
}
int gtkMode(int argc, char *argv[], ParametersContainer pc, Generator gen){
	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "net.herrsubset.ppconverter");

	PPWindow ppw(pc, gen);

	return app->run(ppw);
}