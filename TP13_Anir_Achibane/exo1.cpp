#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> test = {6,7,8,9,10};

    int valeur = 5;

    for_each(test.begin(), test.end(), 
            [valeur](int x){ cout << (x + valeur) << " "; 
    });

    return 0;
}