#include <iostream>
using namespace std;

int length(char input[]) {
	int count = 0;
	for(int i = 0; input[i] != '\0'; i++) {
		count++;
	}
	return count;
}

int main() {
    // int a[5];
     // cin >> a; will not work
	char name[100];
	cout << "Enter your name : "; 
	cin >> name; //abc
	/*
	name[4] = 'x'; //wil not prin if after nulll char
	name[3] = 'd'; //if no null char all will be printed
	name[1] = '\0';	//if null char at 1st position only 1st char will be printed
	*/
	cout << "Name : " << name << endl;

	cout << "Length : " << length(name) << endl;


}
