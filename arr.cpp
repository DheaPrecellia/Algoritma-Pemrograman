#include <iostream>
using namespace std;

int main(){
	int arr1[3]={6,7,8};
	int arr2[3]={1,2,5};
	int hasil[3];
	
	cout<<"Array 1 : \n";
	for(int i=0; i<3; i++){
		cout<<arr1[i]<<" ";
	}
	
	cout<<endl;
	cout<<"Array 2 : \n";
	for(int i=0; i<3; i++){
		cout<<arr2[i]<<" ";
	}
	
	cout<<endl;
	cout<<"Penjumlahan 2 array Hasilnya adalah : "<<endl;
	for(int i=0; i<3; i++){
		hasil[i]=arr1[i]+arr2[i];
	}
	
	for(int j=0; j<3; j++){
		cout<<hasil[j]<<" ";
	}

}
