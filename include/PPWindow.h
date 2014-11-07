#ifndef PPWINDOW_H
#define PPWINDOW_H

//general includes
#include <gtkmm.h>

//custom includes
#include "Generator.h"
#include "ParametersContainer.h"


//class representing the graphical window
class PPWindow: public Gtk::Window{
	private:
		Generator gen;
	public:
		PPWindow(ParametersContainer pc, Generator gen);
		virtual ~PPWindow();

	protected:
		Gtk::Label outputLabel;
		Gtk::VBox v_box;
  		Gtk::Button translateButton;
  		Gtk::Entry entryField;

  		virtual void on_button_clicked();
};

#endif