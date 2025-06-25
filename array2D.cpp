#include <iostream>
#include <iomanip>
using namespace std;

class Matriks {
    friend ostream& operator<<(ostream&, Matriks&);
    friend istream& operator>>(istream&, Matriks&);

public:
    void baca_matriks();
    void urut_bubble_sort();
    void cetak_matriks();

private:
    int A[3][3]; // Array 2 dimensi 3x3
    int baris = 3, kolom = 3; // Ukuran tetap 3x3
};

void Matriks::baca_matriks() {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Data [" << i << "," << j << "] : ";
            cin >> A[i][j];
        }
    }
}

void Matriks::urut_bubble_sort() {
    int B[9]; // Array 1 dimensi untuk konversi
    int k, i, j, temp;

    // Langkah 1: Konversi array 2 dimensi ke array 1 dimensi
    k = 0;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            B[k] = A[i][j];
            k++;
        }
    }

    // Langkah 2: Urutkan array 1 dimensi menggunakan bubble sort
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (B[j] > B[j + 1]) {
                // Lakukan pertukaran
                temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }

    // Langkah 3: Konversi kembali array 1 dimensi ke array 2 dimensi
    k = 0;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            A[i][j] = B[k];
            k++;
        }
    }
}

void Matriks::cetak_matriks() {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << setw(5) << A[i][j] << " ";
        }
        cout << endl;
    }
}

istream& operator>>(istream& in, Matriks& M) {
    cout << "Masukkan data matriks 3x3\n";
    M.baca_matriks();
    cout << "Matriks yang dibuat adalah:\n";
    M.cetak_matriks();
    return in;
}

ostream& operator<<(ostream& out, Matriks& M) {
    for (int i = 0; i < M.baris; i++) {
        for (int j = 0; j < M.kolom; j++) {
            out << setw(5) << M.A[i][j] << " ";
        }
        out << endl;
    }
    return out;
}

int main() {
    Matriks matriks;

    cout << "Memasukkan data matriks:\n";
    cin >> matriks;

    cout << "\nMengurutkan matriks menggunakan bubble sort...\n";
    matriks.urut_bubble_sort();

    cout << "\nHasil pengurutan matriks:\n";
    cout << matriks;

    return 0;
}
