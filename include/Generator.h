#ifndef GENERATOR_H
#define GENERATOR_H

#include <string>

using namespace std;

class Generator {
	private:
		string s;
		string xChar;
		bool isKlinker(const char a);
	public:
		Generator();
		Generator(string xChar);
		void setString(string str);
		void setXChar(string xchar);
		string getPPConversion();
		string getPPConversion(string str);
		string getPPConversion(string str, string xChar);
};

#endif