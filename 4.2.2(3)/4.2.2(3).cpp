#include<iostream>
using namespace std;

void sort(int* a,int b) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < b - 1 ; j++)
			if (a[j] > a[j + 1])
			{
				int c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;
				changed = true;
			}
	} while (changed);

}

int main() {
	int size;
	cin >> size;
	int* ip = new(int[size]);
	for (int i = 0; i < size; i++) {
		cin >> *(ip + i);
	}
	
	sort(ip, size);
	for (int i = 0; i < size; i++) {
		cout  << *(ip + i);
	}
		
	delete[] ip;
}