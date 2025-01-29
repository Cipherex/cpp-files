#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter n" << endl;
	cin >> n;
    int i = 2;
    bool a = true;
    while (i<n){
        if (n%i==0){
        a = false;
        break;}
        i++;
    }
    (a)?cout<<" Prime":cout<<"Not prime";
}   