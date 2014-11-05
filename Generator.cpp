#include "Generator.h"

Generator::Generator(){

}

Generator::Generator(string xChar){
	setXChar(xChar);
}

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

void Generator::setString(string str){
	s = str;
}

void Generator::setXChar(string xc){
	xChar = xc;
}

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

string Generator::getPPConversion(string str){
	setString(str);
	return getPPConversion();
}

string Generator::getPPConversion(string str, string xChar){
	setString(str);
	setXChar(xChar);
	return getPPConversion();
}