/*
Christine Pavlik
December 6
CIS 1202 501
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
///////////////////////////////////////////
class invalidCharacterException {

};
class invalidRangeException {

};
char character(char start, int offset) {
	if (start >= 'a' && start <= 'z') {
		int both = static_cast<int>(start) + offset;
		if (both >= 97  && both <= 122) {
			char it = static_cast<char>(both);
			return it;
		}
		else {
			throw invalidRangeException();
		}
	}
	else if (start >= 'A' && start <= 'Z'){
		int both = static_cast<int>(start) + offset;
		if (both >= 65 && both <= 90) {
			char it = static_cast<char>(both);
			return it;
		}
		else {
			throw invalidRangeException();
		}
	}
	else {
		throw invalidCharacterException();
	}
}
int main() {
	try {
		cout << character('B', -1);
	}
	catch (invalidCharacterException) {
		cout << "The start is not a character";
	}
	catch (invalidRangeException) {
		cout << "The target is not a letter";
	}
	return 0;
}