#include <iostream>
using namespace std;

class InsufficientStockException: public exception{
    public:
        InsufficientStockException() noexcept = default;
        ~InsufficientStockException() = default;

        virtual const char* what() const noexcept{
            return "Insufficent Stock exception";
        }
};

class NegativeQuantityException: public exception{
    public:
        NegativeQuantityException() noexcept = default;
        ~NegativeQuantityException() = default;

        virtual const char* what() const noexcept{
            return "Negative Quantity exception";
        }

};

class Inventory{
    private:
        int quantity;
    public:
        Inventory(int q): quantity(q){
            if (q < 0) throw NegativeQuantityException();
        };

        void add_items(int q){
            if (q < 0) throw NegativeQuantityException();
            else{
                cout << "Quantity " << q << " added to Inventory\n";
                quantity += q;
            }
        }

        void remove_items(int q){
            if (q < 0) throw NegativeQuantityException();
            else if (quantity < q) throw InsufficientStockException();
            else{
                cout << "Quantity " << q << " removed from Inventory\n";
                quantity -= q;
            }
        }

        int get_stock(){
            return quantity;
        }
};

int main(){
    // Test 1: Initialisation et ajout d'articles
    Inventory inv(100); // Initial stock of 100 items
    cout << "Initial stock: " << inv.get_stock() << endl;
    try {
        inv.add_items(50);
        cout << "After adding 50 items: " << inv.get_stock() << endl;
    }
    catch (const NegativeQuantityException& ex) {
        cerr << ex.what() << endl;
    }
    catch (...) {
        cerr << "Unknown error occurred" << endl;
    }
    // Test 2: Tentative de retrait excessif
    try {
        inv.remove_items(160); // Should throw InsufficientStockException
        cout << "After removing 160 items: " << inv.get_stock() << endl;
    }
    catch (const InsufficientStockException& ex) {
        cerr << ex.what() << endl;
    }
    catch (...) {
        cerr << "Unknown error occurred" << endl;
    }
    // Test 3: Tentative d'ajout d'une quantité négative
    try {
        inv.add_items(-10); // Should throw NegativeQuantityException
        cout << "After adding -10 items: " << inv.get_stock() << endl;
    }
    catch (const NegativeQuantityException& ex) {
        cerr << ex.what() << endl;
    }
    catch (...) {
        cerr << "Unknown error occurred" << endl;
    }
    cout << "Program completed" << endl;

    return 0;

}