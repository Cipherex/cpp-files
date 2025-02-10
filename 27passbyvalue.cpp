#include <iostream>
using namespace std;

void increment(int a)
{
	a = a + 1; // a new storage locally and only value
}

int main()
{
	int a = 10;
	increment(a);
	cout << a << endl; //will give 10 as variable is passed by value
}
