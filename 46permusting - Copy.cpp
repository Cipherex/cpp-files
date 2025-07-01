#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    if (strlen(input1) != strlen(input2)) {
        return false;
    }
    int i = 0;
    while (input1[i]!='\0'){
        int j = 0;
        bool ins = false;
        while (input2[j]!='\0'){
            if (input1[i]==input2[j]){
                cout <<i<<j<<endl;
                cout <<endl;
                ins = true;
                break;

            }
            j++;
        }
        if (!ins){
            return false;
        }
        i++;
    }
    return true;
}

int main() {
    int size = 10;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}