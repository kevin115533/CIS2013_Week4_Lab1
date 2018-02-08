#include <iostream>
using namespace std;

char stay;

void(int);
void printStuff(int,int);
int largeNumber = 0;

int main() {
	for (int i = 0; i < 10; i++) {
		largeNumber = largeNumber + i;
		printStuff(i, largeNumber);
		cout << "Printing with one arguement" << endl;
		printStuff(i);
	}

	cin >> stay;
	return 0;
}

void printStuff(int num) {
	cout << "Printing x 5 " << (num * 5) << " and total no total was given" << total << endl;

void printStuff(int num, int total) {
	cout << "Printing x 5 " << (num * 5) << " and total " << total << endl;
}

