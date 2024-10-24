/*
Micah Lee
Lab 8-1
Oct 24. 2024
*/

#include <iostream>
#include <string>

using namespace std;

// function prototype
int countVowel(string str);

// main function, takes input string and calls countVowel function
int main(void) {
	string input;

	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);

		if (input == "Q") { break; }

		cout << "Vowel count: " << countVowel(input) << endl;
	}
}
 // takes string and counts upercase and lowercase vowels, return count
int countVowel(string str) {
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			count++;
		}
		else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
			count++;
		}
		else {}
	}

	return count;
}

