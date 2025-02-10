#include <iostream>
using namespace std;

int fact(int n, int a)
{
    int ans = 1;
    a = 5; //does not afttect after the function
       cout << a << endl; //only till this function
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
    int a;
    cin >> a;
    int output = fact(a, a);
    // cout << ans << endl; //ans value is not herer we have to return it
    // cout << n << endl; //n is not defined here
    cout << output << endl;
    cout << a;
}
