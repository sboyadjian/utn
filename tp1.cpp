#include <iostream>

using namespace std;

void mostrarvec(int vec[], int dim)
{
	for (int i = 0; i < dim; ++i)
		cout << vec[i] << '\t';
    cout << endl;
}

void mostrarmat(int m[][5], int dfil)
{
        const int dcol = 5; // solo por prolijidad

        for (int i = 0; i < dfil; ++i) {
                for (int j = 0; j < dcol; ++j)
                        cout << m[i][j] << '\t';
                cout << endl;
        }

}

int revertir(int mat[], int dim){
    int j=0, aux;

    for (int i = dim-1; (j!=i && j<i); i--)
    {
        aux=mat[i];
        mat[i]=mat[j];
        mat[j]=aux;
        j++;
    }
    
    return 0;
}


int transpuesta(int matrix[][5], int dimen){
    int aux;
    for (int i = 0; i < dimen; i++)
    {
        for (int j = 0; j < dimen; j++)
        {
            cout << matrix[j][i] << '\t';
        }
        cout << endl;
    }
    

return 0;
}

int main()
{
    const int dim5 {5};
    const int dim10 {10};

    int vec5[dim5] {4, 11, 19, 8, 3};
    int vec10[dim10] {23, 15, 1, 7, 6, 27, 2, 14, 12, 9};

    int matriz[dim5][dim5] {36, 7, 19, 28, 45,
                            17, 33, 42, 3, 25,
                            22, 41, 32, 11, 9,
                            39, 47, 14, 4, 23,
                            16, 38, 8, 27, 44};
    

    cout << "Vector de 5 elementos:" << endl;
    mostrarvec(vec5,dim5);
    cout << "reverso" << endl;
    revertir(vec5, dim5);
    mostrarvec(vec5,dim5);
    cout << "-------------------------" << endl;
    cout << "Vector de 10 elementos:" << endl;
    mostrarvec(vec10,dim10);
    cout << "reverso" << endl;
    revertir(vec10, dim10);
    mostrarvec(vec10,dim10);
    cout << "-------------------------" << endl;
    cout << "Matriz:" << endl;
    mostrarmat(matriz,dim5);
    cout << "Transpuesta" << endl;
    transpuesta(matriz, dim5);
    
    cin.ignore();
    cin.get();
    return 0;
}