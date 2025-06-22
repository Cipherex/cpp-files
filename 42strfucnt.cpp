#include <iostream>
using namespace std;
#include <cstring>


void printAllPrefixes(char input[]) {
	// i represents end index of my prefix
	for(int i = 0; input[i] != '\0'; i++) {
			// j represents start index of my prefix
		for(int j = 0; j <= i; j++) {
			cout << input[j];
		}
		cout << endl;
	}
}

int main() {
	char input1[100] = "abcd";
	printAllPrefixes(input1);



	
	/*
	char input2[100] = "xy"; //if sting is less than copy limit it will add null to rest here 2 times so it will only give xy for StRNCPY
	
	cout << "Before copying : ";
	cout << "Input 1 : " << input1 << endl;
	cout << "Input 2 : " << input2 << endl;
	//strcpy(input1, "hello"); //2nd to 1st
	
	strncpy(input1, input2, 4); //this does not add null ch so atfer 4 char its the old string
	
	cout << "After copying : ";
	cout << "Input 1 : " << input1 << endl;
	cout << "Input 2 : " << input2 << endl;
	*/




	//cin >> input1;
	//cin >> input2;


	/*
	if(strcmp(input1, input2) == 0) { //strcmp gives 0 or any integer cause it give subrtraction of both
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	*/




	/*
	int len = strlen(input);
	cout << "Length : " << len << endl;
	*/


}
