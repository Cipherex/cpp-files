#include <iostream>
#include <climits>
using namespace std;
void printd(int a[], int n) //(int a) is not valid as it revices int, we have to use this
{
    cout << *a << endl;        // a stores the address of the first element of the array
    cout << a[0] << endl;      // a stores the address of the first element of the array
    cout << a[20] << endl;     // will give garbage value as we came out of the array
    cout << *(a + 2) << endl;  // a stores the address of the third  element of the array
    cout << *a + 2 << endl;    // a stores the address of the first  element of the array and add 2 to it
    cout << sizeof(a) << endl; // will give size of pointer is 8 bytes
    cout << n << endl;         // there is no other way to get size inside a fucntio
}
int main()
{
    int a[5] = {1, 43, 83, 54, 65};   // a stores the adress of first element of the array
    cout << sizeof(a) << endl;        // will give size of array is 20 bytes
    int n = sizeof(a) / sizeof(a[0]); // will give size of array is 5
    printd(a, n);                     // arr[] is not valid, arr[4] will pass an integer only
}