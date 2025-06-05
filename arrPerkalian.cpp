#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Masukkan jumlah elemen array : ";
	cin>>n;
	
	int arr1[n];
	cout<<"Masukkan elemen array pertama : "<<endl;
		for(int i=0; i<n; i++){
			cout<<"arr1["<<i<<"]=";
			cin>>arr1[i];	
		}
		
	cout<<endl;
	int arr2[n];
	cout<<"Masukkan elemen array Kedua : "<<endl;
		for(int j=0; j<n; j++){
			cout<<"arr2["<<j<<"]=";
			cin>>arr2[j];	
		}
	
	cout<<endl;
	int hasil[n];
	cout<<"Hasil Perkalian Elemen Dua Array : "<<endl;
	for(int i=0; i<n; i++){
		hasil[i]=arr1[i]*arr2[i];
	}
	
	for(int j=0; j<n; j++){
		cout<<hasil[j]<<" ";
	}
	
}
