#include "PPWindow.h"

PPWindow::PPWindow(ParametersContainer pc, Generator g):
	outputLabel(g.getPPConversion(pc.getInput())),
	translateButton("Translate")
{
	gen = g;

	set_title("PP-Converter");
	set_border_width(5);

	add(v_box);

	v_box.pack_start(entryField);
	v_box.pack_start(translateButton);
	v_box.pack_start(outputLabel);

	translateButton.signal_clicked().connect(sigc::mem_fun(*this,
              &PPWindow::on_button_clicked));


	show_all_children();
}

PPWindow::~PPWindow(){

}

void PPWindow::on_button_clicked(){
	outputLabel.set_text(gen.getPPConversion(entryField.get_text()));
}