#include<iostream>
using namespace std;
int main()
{

while (true){
    int a;
    cin >>a;
    if (a>0){
        cout <<a ;
    } else if (a == 50) {
        cout << a;
        break;
    } else if (a == 15) {
        continue;
    }
}
}   