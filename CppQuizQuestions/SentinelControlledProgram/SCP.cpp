//Sentinel Controlled Program by TallTurtle65
//Grade Averager

#include <iostream>
#include <string>

using namespace std;

int main() {

	double grade;
	double total = 0;
	int scoenter = 0;

	cout << "Enter in your grades(%) and then I will give you your average. enter in -1000 to stop" << endl;
	cin >> grade;

	while (grade != -1000) {
		total = total + grade;
		scoenter++;
		cout << "Next grade, or -1000 to stop adding grades" << endl;
		cin >> grade;

		cin.ignore();
	}

	cout << "Your average grade is " << total / scoenter << endl;

	cin.ignore();
}