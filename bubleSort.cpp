#include <iostream>
using namespace std;
 
int main() {
  cout << "##  Program C++ Mengurutkan Angka (Bubble Sort) ##" << endl;
  cout << "==================================================" << endl;
  cout << endl;
 
  int i, j, n;
 
  // Baca angka input dari user
  cout << "Input jumlah element array: ";
  cin >> n;
  cout << endl;
 
  int arr[n];
  cout <<  "Input "<< n << " angka (dipisah dengan enter): ";
  cout << endl;
 
  for(i = 0; i < n; i++){
    cout << "Angka ke-" << i+1 <<": ";
    cin >> arr[i];
  }
 
  // Urutkan array dengan algoritma bubble sort
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        // Tukar posisi element jika element sebelumnya lebih besar
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
 
  // Tampilan hasil pengurutan
  cout << endl;
  cout << "Array setelah diurutkan: ";
  for (i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
 
  return 0;
}
