#include "Generator.h"

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

string Generator::getPPConversion(){
	string res = "";

	for(int i = 0; i< s.length(); i++){
		if(isKlinker(s[i])){
			res += s[i];
			res += 'p';
		}
		res += s[i];
	}

	return res;
}

string Generator::getPPConversion(string str){
	setString(str);
	return getPPConversion();
}