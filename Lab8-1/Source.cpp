#include <iostream>
#include <string>

using namespace std;

int countVowel(string str);

int main(void) {
	string str = "tOOearly";
	cout << countVowel(str);
}

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

