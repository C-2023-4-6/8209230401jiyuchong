#include<iostream>
using namespace std;

int findMax1(int a, int b);
int findMax2(int& a, int& b);
int findMinn(int& a, int& b);

int main() {
	int m, n;
	cin >> m >> n;
	cout << findMax1(m, n) << endl
		<< findMax2(m, n) << endl
		<< findMinn(m, n) << endl;
}

int findMax1(int a, int b) {
	int maxx = 0;
	for (int i = 1; i <= ((a < b) ? a : b); i++) {
		if (a % i == 0 && b % i == 0) {
			maxx = (maxx > i) ? maxx : i;
		}
	}
	return maxx;
}

int findMax2(int& a, int& b) {
	int maxx = 0;
	for (int i = 1; i <= ((a < b) ? a : b); i++) {
		if (a % i == 0 && b % i == 0) {
			maxx = (maxx > i) ? maxx : i;
		}
	}
	return maxx;
}

int findMinn(int& a, int& b) {
	int minn = a * b;
	for (int i = a * b; i > 0; i--) {
		if (i % a == 0 && i % b == 0) {
			minn = (minn > i) ? i : minn;
		}
	}
	return minn;
}