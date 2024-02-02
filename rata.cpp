/*
Program Hitung Rata-Rata
Dzaka Zhilal Haqqa
21.12.2146
*/
#include<iostream>
using namespace std;

int main (){
	int i,N;
	float jumlah,rata;
	i=1;
	jumlah=0;
	cout<<"Masukkan Nilai N = ";
	cin>>N;
	int A[N];
	for(i=1;i<=N;i++){
		cout<<"masukkan nilai ke-"<<i<<" = ";
		cin>>A[i];
		jumlah=jumlah+A[i];
	}
	rata=jumlah/N;
	cout<<"Rata-Rata ="<<rata;
}