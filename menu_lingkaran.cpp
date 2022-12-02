#include <iostream>
using namespace std;

float r,d,phi;
void menu_utama();
void hitung_luas();
void hitung_keliling();
void hitung_jarijari();
void hitung_diameter();
void keluar_program();

int main ()
 {
 
 menu_utama();
 return 0;
 }

void menu_utama()
 {
  system("cls");
  int Pilihan;
  cout<<endl;
  cout<<"\t|-----MENU LINGKARAN----|"<<endl;
  cout<<endl;
  cout<<"\tPilihan Menu: "<<endl;
  cout<<"\t1. Hitung luas."<<endl;
  cout<<"\t2. Hitung keliling."<<endl;
  cout<<"\t3. Hitung jari-jari."<<endl;
  cout<<"\t4. Hitung diameter."<<endl;
  cout<<"\t5. Keluar program."<<endl;
  cout<<endl;
  cout<<"\tMasukan nomor pilihan: "; cin>>Pilihan;
  cout<<endl;
  cout<<endl;
  
 switch (Pilihan)
  {
   case 1:
   hitung_luas();
   break;
   case 2:
   hitung_keliling();
   break;
   case 3:
   hitung_jarijari();
   break;
   case 4:
   hitung_diameter();
   break;
   case 5:
   keluar_program();
   break;
   default:
   menu_utama();
  }
 } 
 
void hitung_luas()
 {
  system("cls");
  float hasil_hitung_luas;
  float const phi = 3.14;
  cout<<endl;
  cout<<"\tANDA MEMILIH HITUNG LUAS."<<endl<<endl;
  cout<<endl;
  cout<<"\tMasukan jari-jari   : ";cin>>r;
  hasil_hitung_luas=phi*r*r;
  cout<<"\tLuas lingkaran   : "<<hasil_hitung_luas<<endl;
 }
 
 void hitung_keliling()
 {
  system("cls");
  float hasil_hitung_keliling;
  float const phi = 3.14;
  cout<<endl;
  cout<<"\tANDA MEMILIH HITUNG KELILING."<<endl<<endl;
  cout<<endl;
  cout<<"\tMasukan diameter   : ";cin>>d;
  hasil_hitung_keliling=phi*d;
  cout<<"\tKeliling lingkaran   : "<<hasil_hitung_keliling<<endl;
 }
 
  void hitung_jarijari()
 {
  system("cls");
  float hasil_hitung_jarijari;
  float const phi = 3.14;
  cout<<endl;
  cout<<"\tANDA MEMILIH HITUNG JARI-JARI."<<endl<<endl;
  cout<<endl;
  cout<<"\tMasukan diameter   : ";cin>>d;
  hasil_hitung_jarijari=d/2;
  cout<<"\tJari-jari lingkaran   : "<<hasil_hitung_jarijari<<endl;
 }
 
   void hitung_diameter()
 {
  system("cls");
  float hasil_hitung_diameter;
  float const phi = 3.14;
  cout<<endl;
  cout<<"\tANDA MEMILIH HITUNG DIAMETER."<<endl<<endl;
  cout<<endl;
  cout<<"\tMasukan jari-jari   : ";cin>>r;
  hasil_hitung_diameter=r*2;
  cout<<"\tDiameter lingkaran   : "<<hasil_hitung_diameter<<endl;
 }
 
 void keluar_program()
 {
  system("cls");
  cout<<endl;
  cout<<endl;
  cout<<"\t==============================================="<<endl;
  cout<<endl;
  cout<<"\t\t\tTERIMA KASIH"<<endl;
  cout<<endl;
  cout<<"\t==============================================="<<endl;
  cout<<endl;

 }
 