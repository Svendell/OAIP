#include <iostream>
#include <windows.h>
#include <cstring>

char function1(char string[250]) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "RUS");
	using namespace std;
	int i, chek = 0;

	SetConsoleTextAttribute(hConsole, 20);
	for (i = strlen(string); i >= 0; i--) {
		cout << string[i];
		if (string[i] == '0') {
			break;
		}
	}
	SetConsoleTextAttribute(hConsole, 15);
	cout << " " << endl;

	for (i = strlen(string); i >= 0; i--) {
		if (string[i] == ' ') {
			chek += 1;
		}
		if (chek % 2 != 0 && chek != 0) {
			string[i] = ' ';
		}
		if (string[i] == '0') {
			break;
		}
	}

	SetConsoleTextAttribute(hConsole, 10);
	for (i = strlen(string); i >= 0; i--) {
		cout << string[i];
		if (string[i] == '0') {
			break;
		}
	}
	SetConsoleTextAttribute(hConsole, 15);

	return string[250];
}

int main() {
	char string[250] = "qq ww ee rr";
	char* p = string;
	char (*functOne)(char stringu[250]);
	functOne = function1;
	functOne(p);
	return 0;
}
