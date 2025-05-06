#include <iostream>
#include <climits>
using namespace std;

void printArray(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}

void reverse(int input[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int b[10] = {1, 2, 3, 4, 5}; // rest spaces will be 0 not garbage value & b[2]={1,2,3} will give error & b[1] ={1} and b[1] = {1} is same
    reverse(b, 5);
    printArray(b, 5);

}