#Language Game Generator

Converts text to a [language game](https://en.wikipedia.org/wiki/Language_game),
 currently only x-language is supported, where 'x' can be replaced dynamically

##Building the project
To build this project you will need [make](https://www.gnu.org/software/make/) 
and an installation of [gtkmm 3.0](https://developer.gnome.org/gtkmm-tutorial/stable/chapter-installation.html.en). 
This means that building the project should be rather straightforward for linux 
and OSX users, simply fork/clone the project, navigate to the root of the 
project and type `make`.

##Using lgg
The program has a graphical and text-only mode available. Following options exist:
 * __-i [text]__ [text] is what you would like to be converted to a specific language game.
 * __-g__ triggers graphical mode.
 * __-x [char]__ gives the character that is to be used in x-language.
 * __-t__ text mode (default behavior).