#include "playground.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void reverseStringHelper(string s, int startIndex, vector<char>& reversed) {
	if (startIndex == s.length() / 2) {
		if(s.length() % 2 == 1) {
			reversed[startIndex] = s[startIndex];
		}
		return;
	}
	int endIndex = s.length() - 1 - startIndex;
	reversed[startIndex] = s[endIndex];
	reversed[endIndex] = s[startIndex];
	reverseStringHelper(s, startIndex + 1, reversed);
}

string reverseString(string s) {
	vector<char> reversed(s.length(), '\0');
	reverseStringHelper(s, 0, reversed);
	string reversedString = "";
	for(char c : reversed) {
		reversedString += c;
	}
	return reversedString;
}

int main()
{
	// reverse string without loops
	
	// test cases
	// abc
	// abcd
	// <empty>
	cout << reverseString("abcde") << endl;
}
