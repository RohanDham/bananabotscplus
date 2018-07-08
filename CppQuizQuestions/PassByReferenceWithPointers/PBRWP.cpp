//Program made by TallTurtle65

#include <iostream>
using namespace std;
void passVal(int x);
void passRef(int *x);

int main() {
	int r = 35;
	int d = 63;

	passVal(r);
	passRef(&d);
	
	cout << r << endl;
	cout << d << endl;
	cin.ignore();
}
void passVal(int x) {
	x = 78;
}
void passRef(int *x) {
	*x = 90;
}
