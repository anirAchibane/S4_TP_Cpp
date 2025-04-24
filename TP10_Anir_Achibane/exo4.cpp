#include <iostream>
#include <array>
using namespace std;

template<typename T, int M1, int N1, int M2, int N2>
class MatrixAdder;

template<typename T,int M,int N>
class Matrix{
    protected:

        array<T, M * N> matrice;
        
    public:
        void set(int i, int j, T value){
            if(i < M && j < N ){
                matrice[M*i + j] = value;
            }
            else{
                cout << "coordonnées non valide!!\n";
            }
        }
        T get(int i, int j) const{
            if(i < M && j < N){
                return matrice[M*i + j];
            }
            else{
                cout << "Invalid non valide!!\n";
                return T{};
            }
        }

        Matrix<T,M,N> add(const Matrix<T,M,N>& other ) const{
            return MatrixAdder<T,M,N,M,N>::add(*this, other);
        }
};

template<typename T, int M1, int N1, int M2, int N2>
class MatrixAdder{
    public:
    static Matrix<T, 0, 0> add(const Matrix<T,M1,N1>& a, const Matrix<T,M2,N2>& b){
        static_assert(M1 == M2 && N1 == N2, "Dimensions incompatibles!!");
        return {};
    }
};

template<typename T, int M, int N>
class MatrixAdder<T,M,N,M,N>{
    public:
    static Matrix<T, M, N> add(const Matrix<T,M,N>& a, const Matrix<T,M,N>& b){
        Matrix<T,M,N> result;
        for(int i = 0; i < M; i++){
            for(int j = 0; j < N; j++){
                result.set(i,j,a.get(i,j) + b.get(i,j));
            }
        }
        return result;
    }
};

int main(){
    Matrix<int, 2, 2> m1;
    m1.set(0, 0, 1); m1.set(0, 1, 2);
    m1.set(1, 0, 3); m1.set(1, 1, 4);

    Matrix<int, 2, 2> m2;
    m2.set(0, 0, 5); m2.set(0, 1, 6);
    m2.set(1, 0, 7); m2.set(1, 1, 8);
    auto m3 = m1.add(m2);

    cout << m3.get(0, 0) << " " << m3.get(0, 1) << endl; // Affiche 6 8   
    cout << m3.get(1, 0) << " " << m3.get(1, 1) << endl; // Affiche 10 12
    Matrix<int, 2, 3> m4; // Incompatible
    // m1.add(m4); // Erreur de compilation (static_assert)
    return 0;
}