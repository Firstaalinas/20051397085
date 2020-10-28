//Firsta Alina Saputra
// NIM : 20051397085
// MI 2020A

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int a=0, b, c, jumlah=0, i, n;
	
	cout<<"----------------------------------------";
	cout<<"MENGHITUNG JUMLAH DERET BILANGAN";
	cout<<"----------------------------------------";
	cout<<"Masukkan bilangan awal : ";
	cin>>a;
	cout<<"Masukkan selisih angka : ";
	cin>>b;
	cout<<"Masukkan jumlah deret ke-n : ";
	cin>>n;
	
	cout<<"Deret ke-"<<n<<" : ";
	cout<<a<<",";
	jumlah=jumlah+a;
	for(i=0; i<n-1; i++){
			c=a+b;
			a=c;
			cout<<c<<",";
			jumlah=jumlah+c;
	}
	
	cout<<"\nJumlah deret ke-"<<n<<" : ";
	cout<<jumlah;
	
	return 0;
}
