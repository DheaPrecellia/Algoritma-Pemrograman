#include <iostream>
using namespace std;

void IteratifKanan(int arr[], int n){
	if(n <= 1) return;
	int temp = arr[n-1];
	for(int i=n-1; i>0; i--){
		arr[i]= arr[n-1];
	}
	arr[0]=temp;
}

void rekursif(int arr[], int i){
	if{i == 0) return;
	int temp = arr[n-1];
		arr[i]= arr[i-1];
	IteratifKanan(int arr, i-1);
	}

voidRekursifUtama(int arr[], int n){
	if(n <= 1) return;
	int temp = arr[n-1];
		rekursif(int arr, n-1)
	arr[0]=temp;
	}

int main(){
	int n;
	int pilihan;
	
	cout<<"Masukkan jumlah elemen array : ";
	cin>>n;
	
	int arr[n];
	cout<<"Masukkan elemen array : "<<endl;
		for(int i=0; i<n; i++){
			cout<<"arr["<<i<<"]=";
			cin>>arr[i];	
		}
	
	cout<<endl;
	cout<<"Pilih Metode : "<<endl;
	cout<<"1.Iteratif "<<endl;
	cout<<"2.Rekursif "<<endl;
	cout<<"Pilihan : ";
	cin>>pilihan;
	
	cout<<endl;
	cout<<"Pilih Arah Geser : "<<endl;
	cout<<"1.Geser ke kiri "<<endl;
	cout<<"2.Geser Ke Kanan "<<endl;
	cout<<"Pilihan : ";
	cin>>pilihan;
	
	cout<<"Array sebelum digeser: "<<endl;
	IteratifKanan(int arr, n)
		for(int i=0; i<n; i++){
			cout<<arr[i]<<" ";
	}
	cout<<endl;
		for(int i=0; i<n; i++){
			cin>>arr[i];
	
	cout<<"Array setelah digeser : "<<endl;
	for(int i=0; i<n; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}
