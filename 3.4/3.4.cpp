#include<iostream>
#include"3.4.h"
using namespace std;

int main() {
	double side1, side2, side3;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3)) cout << area(side1, side2, side3);
	else cout << "´íÎó";
}