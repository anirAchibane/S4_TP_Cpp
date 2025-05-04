#include <iostream>
#include <vector>
#include <functional>
using namespace std;


vector<int> filter(vector<int> vec, function<bool(int)> predicat){
    vector<int> filteredVec = vec;
    int i = 0;
    while(filteredVec.size() >= 0 && i < filteredVec.size()){
        if(!predicat(filteredVec[i])){
            filteredVec.erase(filteredVec.begin() + i); 
        }
        else{
            i += 1;
        }
    }

    return filteredVec;
}

int main(){
    auto predicat1 = [] (int x) -> bool {return x > 20;};
    auto predicat2 = [] (int x) -> bool {return x % 2 == 0;};

    vector<int> test = {10,15,20,25,30,50,75};
    vector<int> result1 = filter(test, predicat1);
    vector<int> result2 = filter(test, predicat2);

    cout << "predicat: 'x > 20': ";
    for(auto i : result1){
        cout << i << " ";
    }
    cout << "\npredicat: 'x % 2 == 0': ";
    for(auto i : result2){
        cout << i << " ";
    }
}