#include<iostream>
using namespace std;

int multiplier(int a, int b) {
	if (a == 0) {
		return 0;
	}
	else {
		return b + multiplier(a - 1, b);
	}
}

int main() {
	int a,b,result;
	cout << "Application multiplliant un entier a par un entier b (a X b). Choisir a :" << endl;
	cin >> a;
	cout << "Choisir b" << endl;
	cin >> b;
	result = multiplier(a, b);
	cout << a << " X " << b << " = " << result << endl;
	return 0;
}