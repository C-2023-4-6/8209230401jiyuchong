#include<iostream>
using namespace std;

int wei10(int a) {
	int r = 1;
	for (int i = 1; i < a; i++) {
		r *= 16;
	}
	return r;
}

int parseHex(const char* const hexString) {
	int sum = 0;
	for (int i = 0; i < strlen(hexString) + 1; i++) {
		for (int j = 0; j < 6; j++) {
			if (hexString[i] == 'a' + j || hexString[i] == 'A' + j) {
				sum += wei10(strlen(hexString) - i) * (10 + j);
			}
		}
		for (int j = 0; j < 10; j++) {
			if (hexString[i] == '0' + j) {
				sum += wei10(strlen(hexString) - i) * (j);
			}
		}
	}
	return sum;
}

int main() {
	cout << parseHex("A5");
}