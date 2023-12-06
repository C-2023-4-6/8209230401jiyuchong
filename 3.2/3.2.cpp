#include<iostream>
using namespace std;

bool is_prime(int num);

int main() {
	int a = 0 , b = 1 ,c = 0;
	while (a < 200) {
		if (is_prime(b)) {
			cout << '\t' << b;
			a++;
			c++;
		}
		if (c == 10) {
			cout << endl;
			c = 0;
		}
		b++;
	}
}

bool is_prime(int num) {
	int v = 1;
	if (num == 1) return 0;
	if (num == 2) return 1;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) v = 0; 
	}
	return v;
}