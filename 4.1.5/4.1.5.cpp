#include<iostream>
using namespace std;

bool j(int i, int a,const char s1[], const char s2[]) {
	if (a = strlen(s1) + 1) {
		if (s1[a] == s2[i + a]) return 1;
	}

	return 1 || j(i, a + 1, s1, s2);
}

int indexOf(const char s1[], const char s2[]) {
	int out = -1;
	for (int i = 0; i < strlen(s2) + 1; i++) {
		if (s1[0] == s2[i]) {
			if (j(i,1,s1,s2)) out = i;
		}
	}
	return out;
}

int main() {
	char s1[]="welcome", s2[]="We invite you!";
	cout << indexOf(s1, s2);
}

