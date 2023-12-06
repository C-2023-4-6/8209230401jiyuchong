#include<iostream>
using namespace std;

int in[10];
int out[10];
bool ss(int i);

int main() {
	int a = 1;
	for (int i = 0; i < 10; i++) {
		cin >> in[i];
	}
	cout << in[0] << ' ';
	out[0] = in[0];
	for (int i = 1; i < 10; i++) {
		if (ss(i)) {
			cout << in[i] << ' ';
			out[a] = in[i];
			a++;
		}
	}
}

bool ss(int i) {
	int a = 1;
	for (int j = 0; j < 10; j++) {
		if (in[i] == out[j]) a = 0;
	}
	return a;
}