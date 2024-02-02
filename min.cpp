/*
Program Cari Elemen Minimum
Dzaka Zhilal Haqqa
21.12.2146
*/
#include<iostream>
using namespace std;

int main(){
	int i,N,min;
	min=9999;
	cout<<"MAsukkan panjang array = ";
	cin>>N;
	int A[N];
	for(i=1;i<=N;i++) {
		cout<<"masukkan nilai ke-"<<i<<" = ";
		cin>>A[i];
		if (A[i]<min){
			min=A[i];
		}
	}
	cout<<"nilai minimum ="<<min;
}
 