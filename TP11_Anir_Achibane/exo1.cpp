#include <iostream>
using namespace std;

class InvalidOperationException : public exception{
    public:
        InvalidOperationException() noexcept = default;
        ~InvalidOperationException() = default;

        virtual const char* what() const noexcept{
            return "Invalid Operator exception";
        }
};

class DivideByZeroException : public exception{
    public:
        DivideByZeroException() noexcept = default;
        ~DivideByZeroException() = default;

        virtual const char* what() const noexcept{
            return "Division By Zero exception";
        }
};

int calculate(int n1, int n2, char op){
    if (op == '+'){
        return n1 + n2;
    }
    else if (op == '-'){
        return n1 - n2;
    }
    else if (op == '*'){
        return n1 * n2;
    }
    else if (op == '/'){
        if (n2 == 0){
            throw DivideByZeroException();
        }
        else{
            return n1 / n2;
        }
    }
    else{
        throw InvalidOperationException();
    }
}

int main(){
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    try {
        double result = calculate(num1, num2, operation);
        cout << "Result: " << result << std::endl;
    }

    catch (const DivideByZeroException& ex) {
        cerr << ex.what() << std::endl;
    }
    catch (const InvalidOperationException& ex) {
        cerr << ex.what() << std::endl;
    }
    catch (...) {
        cerr << "Unknown error occurred" << std::endl;
    }

    cout << "Program completed" << std::endl;
    return 0;

}