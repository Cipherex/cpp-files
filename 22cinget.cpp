#include <iostream>
using namespace std;

int main()
{
	char c;
	c = cin.get(); // count new line, space tab alll while cin dont
	int count = 0;
	while (c != '$')
	{
		count++;
		c = cin.get();
	}
	cout << count << endl;
}
