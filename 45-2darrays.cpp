#include <iostream>
using namespace std;

void printArray(int a[][5], int m, int n) { //nessary to pass the column size as it is not known to the function for the formula
	for(int i = 0; i < m; i++) {
		for(int j = 0;  j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;	
	}
}

int main() {

	int a[5][5] = {{1, 2}, {3, 4}};  //stored as 1d with element as (one row size *row + col)
	printArray(a, 5, 5);
}

//cant use a[][] = {{1, 2}, {3, 4}}; as it is not possible to assign 2d array like this
// a[][2] = {{1, 2}, {3, 4}};
//a[][5] = {{1, 2,0..}, {3, 4,0..}}; rest will be 0
//a[5][5] = {{1, 2}, {3, 4}}; //all rest wil be 0