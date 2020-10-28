//Firsta Alina Saputra
// Nim : 20051397085
// MI 2020A

#include<iostream> 
#include<conio.h> 
#include<iomanip> 
using namespace std; 
main() 
{
int n; 
cout<<"Bintang Segitiga \n\n"; 
cout<<"Masukkan tinggi segitiga: "; 
cin>>n; cout<<"\n"; 
for (int i=1; i<=n;i++) 
{ 
for (int j=1; j<=i;j++) 
{ 
cout<<setw(3)<<j; 
} 
cout<<" \n"; 
} 
for (int i=n-1;i>=1;i--) 
{ 
for (int j=1;j<=i;j++) 
{ 
cout<<setw(3)<<j; 
} 
cout<<" \n"; 
} 
getch(); 
}
