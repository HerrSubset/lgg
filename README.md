#Language Game Generator

Converts text to a [language game](https://en.wikipedia.org/wiki/Language_game),
 currently only x-language is supported, where 'x' can be replaced dynamically

##Building the project
To build this project you will need [make](https://www.gnu.org/software/make/),
 an installation of [gtkmm 3.0](https://developer.gnome.org/gtkmm-tutorial/stable/chapter-installation.html.en) 
 and the [gcc compiler](https://gcc.gnu.org/) (more specifically g++).
This means that building the project should be rather straightforward for linux 
and OSX users, simply fork/clone the project, navigate to the root of the 
project and type `make`.

##Supported language games
 * __X-language__: General form of p-language in Dutch and Danish, or b-language
 	in German.

##Using lgg
The program has a graphical and text-only mode available. Following options exist:
 * __-i [text]__: the given text is what you would like to be converted to a specific language game.
 * __-g__: triggers graphical mode.
 * __-x [char]__: gives the character that is to be used in x-language. Default = p
 * __-t__: text mode (default behavior).