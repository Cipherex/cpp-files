#include<iostream>
using namespace std;
#include <climits>


int main(){
    int n,max =  INT_MIN,max2  = INT_MIN;
    int p;
    cin >>n;
    if (n==0 || n ==1){
        cout << INT_MIN;
        return 0;
    }
    for (int k =0; k<n;k++){
        cin >> p;
        if (p==max){
            continue; //we need 2nd laregest number not the same number again 
        }
         if (p>max2){
             if (p>max){
                 max2 = max;
                 max = p;
             }
             else{
                 max2 =p;
             }
         }
    }
    cout <<max2;
}


