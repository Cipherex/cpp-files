#include <iostream>
using namespace std;

int main() {
	int m,n;
	cout << "Enter m & n" << endl;
	cin >> m >> n;

	for(;m <= n; m++) {
		cout << m << endl;
	}

    for(int i =0, k =10;i<k && i+k<50;i+=2,k++){
        cout<<i<<" "<<k<<endl;
    }
}

