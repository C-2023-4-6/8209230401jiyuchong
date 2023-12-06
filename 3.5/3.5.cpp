#include<iostream>
using namespace std;

int monkeyEat(int d);

int main() {
	cout << monkeyEat(10);
}

int monkeyEat(int d) {
	if (d == 1) return 1;
	return  2 * (monkeyEat(d - 1)+1);
}