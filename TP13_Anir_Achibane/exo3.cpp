#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> test = {10,12,15,17};

    cout << "array before transform: ";
    for(auto i : test){
        cout << i << " ";
    }

    transform(test.begin(),test.end(),test.begin(),
        [](int x) {return x + 5;}
    );
    
    cout << "\narray after transform: ";
    for(auto i : test){
        cout << i << " ";
    }

}