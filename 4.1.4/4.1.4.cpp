#include<iostream>
using namespace std;

int listt[160];

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	
	for (int i = 0; i < size1; i++) {
		listt[i] = list1[i];
	}
	for (int i = 0; i < size2; i++) {
		listt[size1+i] = list2[i];
	}
	
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < size1 + size2 - 1; j++)
			if (listt[j] > listt[j + 1])
			{
				int a = listt[j + 1];
				listt[j + 1] = listt[j];
				listt[j] = a;
				changed = true;
			}
	} while (changed);

	for (int i = 0; i < size1 + size2; i++) {
		cout << listt[i] << ' ';
	}
}

int main() {
	int list1[6],list2[5];
	for (int i = 0; i < 6; i++) {
		cin >> list1[i];
	}
	for (int i = 0; i < 5; i++) {
		cin >> list2[i];
	}

	merge(list1, 6, list2, 5, listt);
}