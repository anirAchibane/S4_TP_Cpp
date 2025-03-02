#include <iostream>
using namespace std;

int** transpose(int** mx, int n, int m){ //Fonction pour obtenir la matrice transposée
    int** transposed = new int*[m];

    for(int i = 0; i < m; i++){
        transposed[i] = new int[n];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            transposed[j][i] = mx[i][j];  //On met l'élement (i,j) dans la position (j,i) de notre nouvelle matrice
        }
    }

    return transposed;
}

int main(){

    int n,m;
    int **matrix;

    cout << "nombre de lignes: ";
    cin >> n;
    cout << "nombre de colonnes: ";
    cin >> m;

    matrix = new int*[n];

    for(int i = 0; i < n; i++){
        matrix[i] = new int[m];
    }

    int count = 1;
    for(int i = 0;  i < n; i++){
        for(int j = 0; j < m; j++){
            matrix[i][j] = count;
            count++;
        }
    }

    //Affichage de matrixe originale: 
    cout << "Matrice originale:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    

    //Transposition: 
    int** Tmatrix = transpose(matrix,n,m);

    //affichage de matrice transposée:
    cout << "Matrice transposee:\n";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << Tmatrix[i][j] << " ";
        }
        cout << "\n";
    }
    
    //Deallocation:

    for (int i = 0; i  < n; i++){
        delete[] matrix[i];
    }
    delete[] matrix;
    for (int i = 0; i < n; i++){
        delete[] Tmatrix[i];
    }
    delete[] Tmatrix;
}
