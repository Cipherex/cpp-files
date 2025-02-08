#include <iostream>
using namespace std;

int fact(int n){ //easy readiabily, debugging,less bulky
    int c = 1;
    for (int i =1; i<=n;i++){
        c = c*i;
    }
    return c; 
} 
int main(){
    int n,r;
    cin >>n>>r;
    int p = fact(n)/(fact(n-r)*fact(r));
    cout << p << endl;
}