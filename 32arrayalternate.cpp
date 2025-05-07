#include <iostream>
using namespace std;

void arrange(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    int k = 1;
    while (i <= j)
    {
        if (k % 2 == 0)
        {
            arr[j] = k;
            j--;
            k++;
        }
        else
        {
            arr[i] = k;
            i++;
            k++;
        }
    }
}

int main()
{

    int n;
    cin >> n;

    int arr[n];
    arrange(arr, n);
    for (int i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}
cout << endl;
    cout << endl;
}
