#include <iostream>
#include <iomanip>
using namespace std;

class Matriks {
    friend ostream& operator<<(ostream&, Matriks&);
    friend istream& operator>>(istream&, Matriks&);

public:
    void baca_matriks();
    void matriks_jumlah(const Matriks&, const Matriks&);
    void perkalian_matriks(const Matriks&, const Matriks&);
    void urut_bubble_sort();
    void cetak_matriks();

private:
    int A[3][3];
    int baris = 3, kolom = 3;
};

void Matriks::baca_matriks() {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Data [" << i << "," << j << "] : ";
            cin >> A[i][j];
        }
    }
}

void Matriks::matriks_jumlah(const Matriks& matriks1, const Matriks& matriks2) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            A[i][j] = matriks1.A[i][j] + matriks2.A[i][j];
        }
    }
}

void Matriks::perkalian_matriks(const Matriks& matriks1, const Matriks& matriks2) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            A[i][j] = 0;
            for (int k = 0; k < matriks1.kolom; k++) {
                A[i][j] += matriks1.A[i][k] * matriks2.A[k][j];
            }
        }
    }
}

void Matriks::urut_bubble_sort() {
    // Konversi array 2D ke 1D
    int temp[9];
    int k = 0;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            temp[k++] = A[i][j];
        }
    }

    // Bubble sort
    for (int i = 0; i < 9 - 1; i++) {
        for (int j = 0; j < 9 - i - 1; j++) {
            if (temp[j] > temp[j + 1]) {
                int swap = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = swap;
            }
        }
    }

    // Konversi kembali ke array 2D
    k = 0;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            A[i][j] = temp[k++];
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
    return in;
}

ostream& operator<<(ostream& out, Matriks& M) {
    for (int i = 0; i < M.baris; i++) {
        for (int j = 0; j < M.kolom; j++) {
            out << setw(5) << M.A[i][j] << " ";
        }
        cout << endl;
    }
    return out;
}

int main() {
    Matriks matriks1, matriks2, matriks1_urut, matriks2_urut, hasil_jumlah_urut, hasil_kali_urut;

    cout << "Memasukkan data matriks I\n";
    cin >> matriks1;

    cout << "Memasukkan data matriks II\n";
    cin >> matriks2;

    cout << "\nMatriks yang dibuat adalah : \n";
    cout << "Matriks I:\n";
    matriks1.cetak_matriks();
    cout << "\nMatriks II:\n";
    matriks2.cetak_matriks();

    // Urutkan matriks
    matriks1_urut = matriks1;
    matriks1_urut.urut_bubble_sort();
    matriks2_urut = matriks2;
    matriks2_urut.urut_bubble_sort();

    cout << "\nHasil Pengurutan Matriks I : \n";
    matriks1_urut.cetak_matriks();

    cout << "\nHasil Pengurutan Matriks II : \n";
    matriks2_urut.cetak_matriks();

    cout << "\nHasil Penjumlahan Matriks yang Diurutkan : \n";
    hasil_jumlah_urut.matriks_jumlah(matriks1_urut, matriks2_urut);
    hasil_jumlah_urut.cetak_matriks();

    cout << "\nHasil Perkalian Matriks yang Diurutkan : \n";
    hasil_kali_urut.perkalian_matriks(matriks1_urut, matriks2_urut);
    hasil_kali_urut.cetak_matriks();

    return 0;
}
