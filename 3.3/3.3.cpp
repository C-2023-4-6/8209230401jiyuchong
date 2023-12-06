#include<iostream>
#include<iomanip>
#include"3.3.h"
using namespace std;

int main() {
	cout << "Celsius" << '\t' << "Fahrenheit" << '\t' 
		 << "|" << '\t' 
		 << "Fahrenheit" << '\t' << "Celsius";
	cout << endl;
	for (int i = 40; i > 30; i--) {
		 cout << fixed << setprecision(1) << (double)i << '\t' 
			  << fixed << setprecision(2) << celsius_to_fah((double)i) << '\t' <<'\t'
			  << "|" << '\t'
			  << fixed << setprecision(1) << (double)(120 - 10 * (40 - i)) << '\t'
			  << fixed << setprecision(2) << fahrenheit_to_cels((double)(120 - 10 * (40 - i)));
		cout << endl;
	}
}