#include <iostream>
#include <string>

#include "Generator.h"

using namespace std;

int main(){

	string input;
	Generator gen;

	cout << "Schrijf een woord: ";
	cin >> input;
	gen.setString(input);

	cout << "'" << input << "' " << "in pepekestaal is: '" 
		<< gen.getPPConversion() << "'" <<endl;

	return 0;
}