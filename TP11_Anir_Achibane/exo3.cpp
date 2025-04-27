#include <iostream>
#include <vector>
using namespace std;

/* Définition des classes d'exceptions */
class StackFullException: public exception{
    public:
        StackFullException() noexcept = default;
        ~StackFullException() = default;

        virtual const char* what() const noexcept{
            return "Stack Full exception";
        }
};

class StackEmptyException: public exception{
    public:
        StackEmptyException() noexcept = default;
        ~StackEmptyException() = default;

        virtual const char* what() const noexcept{
            return "Stack Empty exception";
        }

};

//Déclaration anticipée de la classe Stack
class Stack;

/* Définition de série de fonctions func_a, func_b et func_c */
void func_c(Stack& s){
    cout << "start c: " << endl;
    throw StackFullException();
    cout << "end c:" << endl;
}

void func_b(Stack& s){
    cout << "start b: " << endl;
    func_c(s);
    cout << "end b:" << endl;
}

void func_a(Stack& s){
    cout << "start a: " << endl;
    func_b(s);
    cout << "end a:" << endl;
}

/* Définition de la classe Stack*/
class Stack{
    private:
        int max_capacity;
        vector<int> data;

    public:
        Stack(int maxi, vector<int> data = {}): max_capacity(maxi){};

        void push(int ele){
            if (data.size() == max_capacity) func_a(*this);

            else{
                cout << "element " << ele << " pushed to stack\n";
                data.push_back(ele);
            }
        }

        void pop(){
            if (!(data.size())) throw StackEmptyException(); // appel à la chaine de fonctions
            else{
                cout << "popped element from stack\n";
                data.pop_back();
            }
        }

        int size(){
            return data.size();
        }
};


int main() {
    // Test 1: Démontrer StackFullException via func_a
    try {
        Stack stack(2); // Stack with capacity of 2
        stack.push(1);
        stack.push(2);
        std::cout << "Stack size: " << stack.size() << std::endl;
        func_a(stack); // Will throw StackFullException
    }
    catch (const StackFullException& ex) {
    std::cerr << "Caught in main: " << ex.what() << std::endl;
    }
    catch (...) {
    std::cerr << "Unknown error occurred" << std::endl;
    }
    // Test 2: Démontrer StackEmptyException avec pop
    try {
    Stack stack(2); // Nouvelle pile vide
    std::cout << "Stack size: " << stack.size() << std::endl;
    stack.pop(); // Will throw StackEmptyException
    }
    catch (const StackEmptyException& ex) {
    std::cerr << "Caught in main: " << ex.what() << std::endl;
    }
    catch (...) {
    std::cerr << "Unknown error occurred" << std::endl;
    }
    std::cout << "Program completed" << std::endl;
    return 0;
}
