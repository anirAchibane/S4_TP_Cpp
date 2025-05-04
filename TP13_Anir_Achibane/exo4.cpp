#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


class Livre{
    private:
        string title;
        int nb_pages;

    public:
        Livre(string titre, int pages): title(titre), nb_pages(pages){};

        string const get_title(){ return title; };
        int const get_pages(){ return nb_pages; }
};

ostream& operator<<(ostream& cout, Livre livre){
    cout << livre.get_title() << " - " << livre.get_pages() << "pages.";
    return cout;
}

int main(){
    vector<Livre> library;
    Livre bouquin2 = Livre("Algorithmique", 450);
    Livre bouquin3 = Livre("Apprendre python", 500);
    Livre bouquin1 = Livre("C++ Modrne", 350);
    Livre bouquin4 = Livre("Data Management 1", 750);

    library.push_back(bouquin1);
    library.push_back(bouquin2);
    library.push_back(bouquin3);
    library.push_back(bouquin4);

    sort(library.begin(), library.end(), 
        [](Livre a, Livre b) {return a.get_title() < b.get_title();} );

    cout << "Tri par titre:\n";
    for(Livre l : library){
        cout << l << endl;
    }

    sort(library.begin(), library.end(), 
        [](Livre a, Livre b) {return a.get_pages() > b.get_pages();} );

    cout << "\nTri par pages decroissant:\n";
    for(Livre l : library){
        cout << l << endl;
    }

}