#include <iostream>
using namespace std;

template <typename T>
auto maximum(T x, T y){
    if (x >= y){
        return x;
    }
    return y;
}

string maximum(string x, string y){
    if (x >= y){
        return x;
    }
    return y;
}

int main(){
    cout << maximum(5,10) << endl;
    cout << maximum(3.14, 2.71) << endl;
    cout << maximum(string("chat"), string("chien")) << endl;

    return 0;
}

