#include <iostream>
#include <vector>

using namespace std;

int main()
{

    string word;
    cin >> word;
    cout << word.at(4); // instead of word[4] we can use word.at(4) becuase it will give garbage if we try to access out of bound index

    // for(int i=0; i<word.size(); i++){ //sizeof will give size of sting in object so we use size() function
    //    cout<<word[i]<<" ";
    // }

    for (char ele : word)
    { // enchanced for loop, only go forward
        cout << ele << " ";
    }
}