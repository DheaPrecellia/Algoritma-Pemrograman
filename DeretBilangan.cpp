#include <iostream>
using namespace std;

void cetak_data(const int array[], int n){
    int i;
    for(i=0;i<8;i++){
        cout<<array[i]<<" ";
    }
}

void tukar(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void buble(int x[],int n){
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        if (x[i]>x[j]) tukar(&x[i],&x[j]);
      
}

int main(){
    int data[8]={9,2,1,4,11,10,18,6},n=8;
    cetak_data(data,n);
    buble(data,n);
    cout<<endl<<endl;
    cetak_data(data,n);
}

