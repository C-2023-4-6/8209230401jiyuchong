#include<iostream>
using namespace std;

int counts[26] = {0};

void count(const char s[], int counts[]) {
	for (int i = 0; i < strlen(s) + 1; i++) {
		for (int j = 0; j < 26; j++) {
			if (s[i] == 'a' + j || s[i] == 'A' + j) {
				counts[j]++;
			}
		}
	}

	for(int i = 0; i < 26; i++) {
		if (counts[i] != 0) {
			cout << char('a' + i) << ":" << counts[i] << endl;
		}
	}
}

int main() {
	char s[100] = "Welcome to New York!";
	count(s, counts);
}