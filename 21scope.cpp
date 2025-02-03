#include <iostream>
using namespace std;
int main(){

    int i = 10; //scope works by only initialisation
    
    cout << i<<endl; //10
   // int i = 3; not work can only be decleard once

    if (true){ //can be while or any scope
        int i; //is initialised in local thats why again work
        i = 42; //will only work till local scope as int i is decalrred in local
        int j=6; //till locak
        cout << i<<endl; //42
        cout << j<<endl;//6
        bool a = true;
        while (a){
            cout <<j<<endl; //6 will work cause decalred in parent scope
            a = false;
        }
    }
    cout << i<<endl; //will give 10 as 46 is for decalaretion in local
    //cout << j<<endl; error as j is initiliased in a local scope

    if (true){
        i = 72;
    }
    cout <<i<<endl; //will give 72 as this time not declared just changed

    for (int x = 0; x<1; x++){
    
    }
     //cout << x<<endl; will give error as x in local for for loop

     int a = 0;
     for (;a<4;a++){
     }
     cout <<a<<endl; //4 this time will work
}       