#include <iostream>
using namespace std;

int main()
{
    unsigned i;
    cout << "Enter the binary number";

    cin >> i;
    // binary to decimal

    int p = 0;
    int l = 0;
    while (i != 0)
    {
        p = p + (i % 10) * (1 << l);
        i /= 10;
        l++;
    }
    cout << "decimal number is " << p << endl;

    // decimal to binary
    cout << "Enter the decimal number";
    cin >> p;

    long s = 0;
    long k = 1;
    while (p != 0)
    {
        s = s + (p % 2) * k;
        p /= 2;
        k *= 10;
    }
    cout << "binary from is " << s << endl;
}