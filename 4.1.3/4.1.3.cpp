#include<iostream>
using namespace std;

bool guizi[100];

int main() {
	for (int i = 1; i < 101; i++) {
		int fir = i - 1;
		while (fir < 100) {
			guizi[fir] = !guizi[fir];
			fir += i;
		}
	}

	for (int i = 0; i < 101; i++) {
		if (guizi[i])cout << 'L' << i + 1 << ' ';
	}
}