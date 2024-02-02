/*
Program Cari Elemen Maksimum
Dzaka Zhilal Haqqa
21.12.2146
*/
#include<iostream>
using namespace std;

int main(){
	int i,N,maks;
	maks=1;
	cout<<"MAsukkan panjang array = ";
	cin>>N;
	int A[N];
	for(i=1;i<=N;i++) {
		cout<<"masukkan nilai ke-"<<i<<" = ";
		cin>>A[i];
		if (A[i]>maks){
			maks=A[i];
		}
	}
	cout<<"nilai maksimum ="<<maks;
}
 