#include <iostream>
#include <cstdlib>

using namespace std;

int countCharacter(string str);

int main(void) {
	string str = "tooearly";
	cout << countCharacter(str);
}

int countCharacter(string str) {
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++) {
		count++;
	}

	return count;
}

