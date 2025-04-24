#include <iostream>
#include <vector>
#include <memory>
#include <type_traits>
using namespace std;

class PairBase{
public: 
    virtual void display() const = 0;
    virtual ~PairBase() = default;
};

template <typename T, typename U>
class Pair: public PairBase{
    protected:
        T first;
        U second;

    public:
        Pair(T f, U s): first(f), second(s){};

        void display() const override{
            cout << "( ";

            if constexpr(std::is_same_v<T,bool>){
                cout << (first ? "true" : "false") << " , ";
            }
            else{
                cout << first << " , ";
            }
            if constexpr(std::is_same_v<U, bool>){
                cout << (second ? "true" : "false") <<  " )" << endl;
            }
            else {
                cout << second << " )" << endl;
            }
        }
};

template <typename T>
class Pair<T, int>: public PairBase{
    protected:
        T first;
        int second;

    public:
        Pair(T f, int s): first(f), second(s){}

        void display() const override{
            cout << "( ";

            if constexpr(std::is_same_v<T, bool>){
                cout << (first ? "true" : "false") << " , ";
            } 
            else {
                cout << first << " , ";
            }
            cout << " integer: " << second << " )" << endl;
        }
};

int main(){


    std::vector<std::unique_ptr<PairBase>> paires;
    paires.push_back(std::make_unique<Pair<double, int>>(3.14, 42));
    paires.push_back(std::make_unique<Pair<int, bool>>(10, true));
    paires.push_back(std::make_unique<Pair<std::string, double>>("Test", 2.71));
    
    for (const auto& p : paires) {
        p->display();
    }
return 0;
}


