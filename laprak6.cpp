#include <iostream>
#include <iomanip>
using namespace std;

class Vektor {
    friend ostream& operator<<(ostream&, Vektor&);
    friend istream& operator>>(istream&, Vektor&);
public:
	Vektor();
  	void penjumlahan_vektor(const Vektor&, const Vektor&);
  	void perkalian_vektor(float, const Vektor&);
  	void beri_nilaiBanyak(int);
private:
 	int elemen[100];
	int banyak;
};

// konstruktor
Vektor::Vektor() {
  banyak = 3;
  for (int i=0; i<banyak; i++)
  	elemen[i] = 0;
}
void Vektor::beri_nilaiBanyak(int i) {
  banyak = i;
}
istream& operator>>(istream& in, Vektor& A) {
   cout << "\nBanyak elemen : ";
    in >> A.banyak;
   cout << "Masukkan data vektor\n";
	for (int i=0; i<A.banyak; i++) {
  	cout << "Data [" << i+1 << "] : ";
  	in >> A.elemen[i];
	}
	return in;
}

ostream& operator<<(ostream& out, Vektor& A) {
   out << endl;
   for (int i=0; i<A.banyak; i++)
		out << "s[" << i+1 << "] = " << setw(5) << A.elemen[i] << "\n";
return out;
}

void Vektor::penjumlahan_vektor(const Vektor& A, const Vektor& B) {
   if (A.banyak > B.banyak) 
   	banyak = A.banyak;
     else 
	 banyak = B.banyak;
	 
   for (int i=0; i<banyak; i++)
     elemen[i] = A.elemen[i] + B.elemen[i];
}

void Vektor::perkalian_vektor(float k, const Vektor& A) {
  banyak = A.banyak;
  for (int i=0; i<banyak; i++)
  elemen[i] = k*A.elemen[i];
}

int main() {
	Vektor X, Y, Z;
  	cin >> X;
  	cout << X;
  	cin >> Y;
  	cout << Y;
  	
  	Z.penjumlahan_vektor(X,Y);
  	cout << "\nHasil penjumlahan 2 vektor\n" << Z;
  	
  	Z.perkalian_vektor(3,X);
  	cout << "\nHasil perkalian skalar dengan vektor\n" << Z;

	return 0;
}
