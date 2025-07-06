#include<iostream>
#include<vector>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    

    string a = "abc";
    string b = "012345";
    string c = "helloToWorld";

    // character addition

    // a.push_back('$'); //for one character at end
    // b.insert(3, a);  //fron index 3 string a will be inserted between in b

    // cout<<b;

    // character renoval
    //a.pop_back();

    // c.erase(5, 2);

    // cout<<c;
    
    // concatenation & append
    a.append ("def");
    cout<<a<<" , "<<b;

}