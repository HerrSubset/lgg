#include "Generator.h"

//-----------------------------------------------------------------------------
//Constructors
//-----------------------------------------------------------------------------
Generator::Generator(){

}

Generator::Generator(string xChar){
	setXChar(xChar);
}

//-----------------------------------------------------------------------------
//Private helper functions
//-----------------------------------------------------------------------------

//Tells wheter a given character is a vowel
bool Generator::isKlinker(const char a){
	bool res = false;

	if(a == 'a'){
		res = true;
	} else if(a == 'e'){
		res = true;
	} else if(a == 'i'){
		res = true;
	} else if(a == 'o'){
		res = true;
	} else if(a == 'u'){
		res = true;
	}

	return res;
}


//-----------------------------------------------------------------------------
//Setters
//-----------------------------------------------------------------------------
void Generator::setString(string str){
	s = str;
}

void Generator::setXChar(string xc){
	xChar = xc;
}


//-----------------------------------------------------------------------------
//Other functions
//-----------------------------------------------------------------------------

//converts the input variable and returns the conversion
string Generator::getPPConversion(){
	string res = "";

	for(int i = 0; i< s.length(); i++){
		if(isKlinker(s[i])){
			res += s[i];
			res += xChar;
		}
		res += s[i];
	}

	return res;
}

//sets the input variable, converts it and returns the conversion
string Generator::getPPConversion(string str){
	setString(str);
	return getPPConversion();
}

//sets the input variable, the character for x-language, converst the input
//variable and returns the conversion
string Generator::getPPConversion(string str, string xChar){
	setString(str);
	setXChar(xChar);
	return getPPConversion();
}