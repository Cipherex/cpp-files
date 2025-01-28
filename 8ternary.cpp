#include<iostream>

using namespace std;

int main(){
        int a,b,c;
        cin >>a>>b>>c;
        /*(a==b)?cout<<"Yes"<<endl:cout<<"no"<<endl;

        bool c = (a==b)?true:false;
        cout << c<<endl*/
        int max = (a>b && a>c)?a:(b>c && b>a)?b:c;
        cout << max<<endl;
}   