#include<iostream>
using namespace std;
int factorial(int n) {
	if (n > 1)
		return n * factorial(n - 1);
	return 1;
}
int main() {
	int m = 5;
	cout << factorial(m);
	return -1;
}
