#include <iostream>
#include <climits>
using namespace std;


void increment(int a, int b[], int n)
{
    a++;  //this is a new variable and will not effect the a in main
    b[0]++; //this will effect the b[0] in main as it is passed by reference (means we pass pointer not the copy of value)
}


int main(){
    int a = 10;
    int b[10] = {1, 2, 3, 4, 5}; 
    increment(a, b, 10);

    cout << "a : " << a << endl; // a is 10 as it is passed by value
    cout << "b[0] : " << b[0] << endl; // b[0] is 2 as it is passed by reference
}