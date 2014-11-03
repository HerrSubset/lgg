#include "PPWindow.h"

PPWindow::PPWindow(ParametersContainer pc, Generator gen):
	outputLabel(gen.getPPConversion(pc.getInput()))	
{
	//outputLabel(gen.getPPConversion(pc.getInput()));

	set_title("PP-Converter");
	set_border_width(5);

	add(outputLabel);

	show_all_children();
}

PPWindow::~PPWindow(){

}