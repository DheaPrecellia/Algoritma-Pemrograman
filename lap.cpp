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
    void cetak_matriks();   
	  
private: 
    int A[10][10]; 
    int baris, kolom;
};

void Matriks::baca_matriks () {    
	for (int i=0; i<baris; i++) {
	for (int j=0; j<kolom; j++) {              
		cout << "Data [" << i << "," << j<< "] :"; 
		cin >> A[i][j]; 
		}           
	} 
}

void Matriks::matriks_jumlah(const Matriks& matriks1, const Matriks& matriks2) {
	baris = matriks1.baris; 
	kolom = matriks1.kolom; 
	for (int i=0; i<baris; i++) 
		for (int j=0; j<kolom; j++) 
		A[i][j]=matriks1.A[i][j]+matriks2.A[i][j];      
}
void Matriks::perkalian_matriks(const Matriks& matriks1, const Matriks& matriks2) {            
	baris = matriks1.baris; 
	kolom = matriks2.kolom; 
	int barkol = matriks1.kolom; 
	for (int i=0; i<baris; i++) {
		for (int j=0; j<kolom; j++) { 
			A[i][j] = 0; 
			for (int k=0; k<barkol; k++) {
				A[i][j] += matriks1.A[i][k] * matriks2.A[k][j];  
 			}
		} 
	} 
}

void Matriks::cetak_matriks () {
	for (int i=0; i<baris; i++) {
		for (int j=0; j<kolom; j++) {
			cout << setw(5) << A[i][j] << " "; 
		} 
		cout << endl; 
	}
}

istream& operator>>(istream& in, Matriks& M) { 
	cout << "Banyak baris : ";  
	in >> M.baris; 
	cout << "Banyak kolom : ";  
	in >> M.kolom; 
	cout << "Masukkan data matriks\n"; 
	M.baca_matriks(); 
	cout << "Matriks yang dibuat adalah : \n"; 
	M.cetak_matriks(); 
	return in;     
}

ostream& operator<<(ostream& out, Matriks& M) { 
	for (int i=0; i<M.baris; i++) {   
		for (int j=0; j<M.kolom; j++) {
			out << setw(5) << M	.A[i][j] << " "; 
		}
		cout << endl; 
	}  
	return out; 
}   

int main(){
	Matriks matriks1, matriks2, hasil; 

	cout << "Memasukkan data matriks I \n"; 
	cin >> matriks1; 
	
	cout << "Memasukkan data matriks II\n"; 
	cin >> matriks2;
	
	cout << "\nHasil Penjumlahan : \n"; 
	hasil.matriks_jumlah(matriks1, matriks2);
	hasil.cetak_matriks();
	
	cout << "\nHasil Perkalian : \n"; 
	hasil.perkalian_matriks(matriks1, matriks2);
	hasil.cetak_matriks();
		
}
 
