#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;


int tebakkata (char, string, string&);
void tebakkan();
int pemenang();
void game();
char pola[10] = {'0','1','2','3','4','5','6','7','8','9'};
void resetpola();
void tictactoe();


int main() {
int pilihan;
bool jalan=1;
do {
    system("cls");
    cout <<"silahkan pilih game yang mau di mainkan : "<<endl;
    cout <<"1. tictactoe"<<endl;
    cout <<"2. tebak kata"<<endl;
    cout <<"3. exit"<<endl;
    cout <<"masukkan pilihan = ";
    cin >>pilihan;

    if (pilihan==1){
        tictactoe();
        resetpola();
    } else if (pilihan==2){
        tebakkan();
    } else if (pilihan==3){
        jalan=0;
    } else {
    cout<<"pilihan salah"<<endl;
    }
} while (jalan);

return 0;
}

void tebakkan(){
system("cls");
const int btstebakan=6;


    string name;
	char huruf;
	int tebakkansalah=0;
	string kata;
	string tebakan[] =
	{
		"array",
		"function",
		"void",
		"operation",
		"flowchart",
		"pseudocode",
		"while",
		"for",
		"if",
		"main",
		"int",
		"char",
		"string",
		"bool",
		"algoritma",
		"logika",
		"modular",
		"sorting"
	};

	
	srand(time(NULL));
	int n=rand()% 10;
	kata=tebakan[n];

	
	string pass(kata.length(),'*');

    cout << " Sebelum Bermain Perhatikan Peraturan nya ya"<<endl;
	cout << " Game Tebak Kata ..... kalian harus menebak kata-kata"<<endl;
	cout << " kata-kata yang di tebak berhubungan dengan matakuliah logika dan algoritma"<<endl;
	cout << " silahkan klik huruf bebas untuk membuka kata-kata yang akan di tebak"<<endl;
	cout << " kamu memiliki " << btstebakan << " kesempatan untuk menebak kata-kata tersebut"<<endl;
	cout << " Good luck ya :) "<<endl;

	
	while (tebakkansalah < btstebakan)
	{
		cout << " " << pass<<endl;
		cout << "Tebak huruf nya : "<<endl;
		cin >> huruf;
		
		if (tebakkata(huruf, kata, pass)==0)
		{
			cout << endl << " Tebak lagi! huruf yang anda masukkan tidak ada di kata-katanya ...... " << endl;
			tebakkansalah++;
		}
		else
		{
			cout << endl << " Selamat anda menemukan salah satu hurufnya! lanjutkkan menebak untuk membuka huruf yang lainnya" << endl;
		}

		cout << " Kamu memiliki " << btstebakan - tebakkansalah;;
		cout << " kesempatan." << endl;
        
		if (kata==pass)
		{
			cout << kata << endl;
			cout << " selamat! Anda berhasil menebak kata-katanya";
			break;
		}

	}
	if(tebakkansalah == btstebakan)
	{
		cout << " Maaf, semua tebakan anda salah" << endl;
		cout << " Kata-kata nya adalah : " << kata << endl;
	}
	cin.ignore();
	cin.get();
}

void tictactoe(){


int pemain= 1,i,pilih;
 char ekse;
do {
    game();
    pemain=(pemain%2)?
    1:2;

    cout<< "Pemain " <<pemain<<" , masukkan nomor : ";
    cin >> pilih;

    ekse=(pemain==1)?
    'X':'O';
    if(pilih==1&&pola[1]=='1')
    {
        pola[1]=ekse;
    } else if(pilih==2&&pola[2]=='2')
    {
        pola[2]=ekse;
    }else if(pilih==3&&pola[3]=='3')
    {
        pola[3]=ekse;
    }else if(pilih==4&&pola[4]=='4')
    {
        pola[4]=ekse;
    }else if(pilih==5&&pola[5]=='5')
    {
        pola[5]=ekse;
    }else if(pilih==6&&pola[6]=='6')
    {
        pola[6]=ekse;
    }else if(pilih==7&&pola[7]=='7')
    {
        pola[7]=ekse;
    }else if(pilih==8&&pola[8]=='8')
    {
        pola[8]=ekse;
    }else if(pilih==9&&pola[9]=='9')
    {
        pola[9]=ekse;
    }
    else {
        cout<<"Anda salah dalam memilih langkah";
        pemain--;
        cin.ignore();
        cin.get();
    }
    i=pemenang();
    pemain++;
    } while (i==-1);{
    game();
    if(i==1){
        cout<<"Pemain "<<--pemain<<"Menang";
    } else {
        cout<<"Game seri";
    }

    }
    cin.ignore();
    cin.get();
}

int pemenang()
    /*jika 'return 1' game selesai dengan hasil permainan berhenti, jika 'return -1' maka game sedang dalam proses permainan
      jika 'return 0' maka game selesai dengan hasil yang tidak ada
    */
    {
        if (pola[1]==pola[2]&&pola[2]==pola[3])
        {
            return 1;
        } else if (pola[4]==pola[5]&&pola[5]==pola[6])
        {
            return 1;
        } else if (pola[7]==pola[8]&&pola[8]==pola[9])
        {
            return 1;
        } else if (pola[1]==pola[4]&&pola[4]==pola[7])
        {
            return 1;
        } else if (pola[2]==pola[5]&&pola[5]==pola[8])
        {
            return 1;
        } else if (pola[3]==pola[6]&&pola[6]==pola[9])
        {
            return 1;
        } else if (pola[1]==pola[5]&&pola[5]==pola[9])
        {
            return 1;
        } else if (pola[3]==pola[5]&&pola[5]==pola[7])
        {
            return 1;
        } else if (pola[1]!='1'&&pola[2]!='2'&&pola[3]!='3'&&pola[4]!='4'&&pola[5]!='5'&&pola[6]!='6'&&pola[7]!='7'&&pola[8]!='8'&&pola[9]!='9'){return 0;}
        else {return -1;}
    }

    void game ()
    {
        system("cls");
        cout<<"Game Tic tac toe \n\n";
        cout<<"Pemain 1 (x) dan Pemain 2 (o)"<<endl;

        cout << "     |     |     " << endl;
        cout << "  " << pola[1] << "  |  " << pola[2] << "  |  " << pola[3] << endl;

        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;

        cout << "  " << pola[4] << "  |  " << pola[5] << "  |  " << pola[6] << endl;

        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;

        cout << "  " << pola[7] << "  |  " << pola[8] << "  |  " << pola[9] << endl;

        cout << "     |     |     " << endl << endl;

    }

    int tebakkata (char tebak, string katarahasia, string &tebakkankata)
{
	int i;
	int cocok=0;
	int pjg=katarahasia.length();
	for (i = 0; i< pjg; i++)
	{

		if (tebak == tebakkankata[i])
			return 0;
		if (tebak == katarahasia[i])
		{
			tebakkankata[i] = tebak;
			cocok++;
		}
	}
	return cocok;
}

void resetpola(){
    for (int i = 0; i < 10; i++) {
        pola[i] = '0'+i;
    }
}
