#ifndef PPWINDOW_H
#define PPWINDOW_H

#include <gtkmm.h>

#include "Generator.h"
#include "ParametersContainer.h"

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