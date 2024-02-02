#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

 int Phari, Pbln, Pthn,Khari, Kbln, Kthn,jenis,sewa,hrg,lamasewa,lambat,sewavar=0; 
string nama, noang, hp, kodebuku, judul, pengarang, penerbit;
char ulang;
main(){ 
	int byk;
	do{
	cout<<"\n SELAMAT DATANG DI RENTAL BUKU 2DFH"; 
	cout<<"\n ==================================";  
	cout<<"\n       PROGRAM PENYEWAAN BUKU"; 
	cout<<"\n ==================================";
	cout<<"\n\n Nama       :+"; cin.ignore(); getline(cin,nama);
	cout<<" No Anggota : "; cin>>noang;
	cout<<" No HP      : "; cin>>hp;
	
	cout<<"\n           Daftar Buku             ";
	cout<<"\n===================================";
	cout<<"\n||NO|| Jenis Buku || Sewa Pokok  ||"; 
	cout<<"\n===================================";
	cout<<"\n||1.|| Komik      ||     5000    ||";  
	cout<<"\n||2.|| Novel      ||    10000    ||";  
	cout<<"\n||3.|| Majalah    ||     7000    ||";
	cout<<"\n==================================="<<endl;
	cout<<"\nKETERANGAN TAMBAHAN  :";
	cout<<"\nHARGA SEWA POKOK ADALAH UNTUK 1 HARI PERTAMA";
	cout<<"\nHARGA SEWA VARIABEL ADALAH RP 100 PER HARI SETELAH HARI PERTAMA"<<endl;
	
	cout<<"\n===================================";
	cout<<"\nBanyak buku yg disewa : ";cin>>byk; 
	for(int i=1;i<=byk;i++){
	  cout<<"===================================";
		cout<<"\nJenis buku\t: ";cin>>jenis;   
			if(jenis==1){
				hrg=5000; 
			}         
			else if(jenis==2){
				hrg=10000; 
			}         
			else if(jenis==3){
				hrg=7000; 
			}         
			else{
				hrg=0 ;
			}         
		cout<<"Harga sewa\t: "<<hrg;   
		cout<<"\nKode Buku\t: "; 
		cin.ignore(); 
		getline(cin,kodebuku);
		cout<<"Judul Buku\t: "; 
		cin.ignore(); 
		getline(cin,judul);
		cout<<"Pengarang\t: "; 
		cin.ignore(); 
		getline(cin,pengarang);
		cout<<"Penerbit\t: "; 
		cin.ignore(); 
		getline(cin,penerbit);
		sewa=sewa+hrg;
   }


	  //input tanggal sewa 
	cout<<"\n Tanggal Sewa: \n";  
	while(1){
		cout<<" Tanggal [1 - 30]\t: "; 
		cin>>Phari;    
		if(Phari<=0||Phari>30){      
			cout<<" ERROR...!\n";    
		}
		else{
			break;
		}  
	}  
	while(1){    
		cout<<" Bulan [1 - 12]\t\t: "; 
		cin>>Pbln;    
			if(Pbln<=0||Pbln>12){      
			cout<<" ERROR...!\n";    
			}
			else{
				break;
			}  
	}  
	while(1){    
		cout<<" Tahun [yyyy]\t\t: "; 
		cin>>Pthn;    
			if(Pthn<=0){
				cout<<" ERROR...!\n";    
			}
			else{
				break;
			}  
	}
	
	
	  //input tanggal pengembalian
	cout<<"\n\n Tanggal Kembali: \n";  
	while(1){
	cout<<" Tanggal [1 - 30]\t: "; 
	cin>>Khari;    
		if(Khari<=0||Khari>30){
			cout<<" ERROR...!\n";    
		}
		else{
			break;
		}  
	}  
	while(1){    
		cout<<" Bulan [1 - 12]\t\t: "; 
		cin>>Kbln;    
		if(Kbln<=0||Kbln>12){      
			cout<<" ERROR...!\n";    
		}
		else{
			break;
		}  
	}  
	while(1){    
		cout<<" Tahun [yyyy]\t\t: "; 
			cin>>Kthn;    
		if(Kthn<=0){
			cout<<" ERROR...!\n";    
		}
		else{
			break;
		}  
	}
	
	
	  //proses perhitungan  
	lamasewa = (Khari-Phari)+((Kbln-Pbln)*30)+((Kthn-Pthn)*360); 
	if(lamasewa>byk){
		lambat=lamasewa-byk; 
	} 
	lamasewa - 7;  
	sewavar = lambat *100*byk; 
	cout<<"\nHarga Sewa Pokok \t: "<<sewa;
	cout<<"\nHarga Sewa Variabel \t: "<<sewavar;
	cout<<"\nHarga Sewa Total \t: "<<sewa+sewavar;
	cout<<"\n========================================================";
	cout<<"\nTERIMA KASIH "<<nama<<" TELAH MEMINJAM BUKU DI RENTAL BUKU 2DFH";
	cout<<endl;
	
	
	cout<<"\nApakah anda ingin kembali ke menu utama?(Y/N)";
	cin>>ulang;
	system("cls");
	
	}while(ulang=='y' || ulang=='Y');

  getch();
  }
