#include <iostream>
#include <string>

using namespace std;

bool isKlinker(char a);

int main(){

	string input;
	string output = "";

	cout << "Schrijf een woord: ";
	cin >> input;

	for(int i = 0; i< input.length(); i++){
		if(isKlinker(input[i])){
			output += input[i];
			output += 'p';
		}
		output += input[i];
	}

	cout << "'" << input << "' " 
		<< "in pepekestaal is: '" << output << "'" <<endl;

	return 0;
}



bool isKlinker(const char a){
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