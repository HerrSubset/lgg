#ifndef GENERATOR_H
#define GENERATOR_H

#include <string>

using namespace std;

class Generator {
	private:
		string s;
		bool isKlinker(const char a);
	public:
		void setString(string str);
		string getPPConversion();
		string getPPConversion(string str);
};

#endif