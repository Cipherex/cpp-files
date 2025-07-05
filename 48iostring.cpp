#include<iostream>
#include<vector>

using namespace std;

int main(){
    string line1, line2;
    int n;

    cin>>n;

    cin.ignore(1); //necessary as cin leaves a newline character in the buffer which getline reads as an empty line
    getline(cin, line1);

    cout<<n<<endl<<line1<<endl;
    getline(cin, line2);

    if (line1>line2){ //will match each char from left
        cout<<"First line is greater than second line";
    }
        else if (line1<line2){
            cout<<"First line is less than second line";
        }
            else{
                cout<<"Both lines are equal";
            }
        }
