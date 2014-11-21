#ifndef GENERATOR_H
#define GENERATOR_H

#include <string>

using namespace std;


//Class responsible for converting strings according to a given language game
class Generator {
	private:
		//variables
		string s;
		string xChar;
		//private functions
		bool isKlinker(const char a);
	public:
		//constructors
		Generator();
		Generator(string xChar);
		//setters
		void setString(string str);
		void setXChar(string xchar);
		//other
		string getPPConversion();
		string getPPConversion(string str);
		string getPPConversion(string str, string xChar);
};

#endif
