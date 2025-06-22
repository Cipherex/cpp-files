#include <iostream>
using namespace std;

int length(char input[]) {
	int count = 0;
	for(int i = 0; input[i] != '\0'; i++) {
		count++;
	}
	return count;
}

void reverseString(char input[]) {
	int len = length(input);
	int i = 0, j = len - 1;
	while(i < j) {
		char temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		i++;
		j--;
	}
}

int main() {
	char input[10];
	//cin >> input; //only takes input till space
	cin.getline(input, 10/*,delimter(\n)*/); //takes input till enter (will take 9 char as last is space)
	
	reverseString(input);
	cout << input << endl;
}