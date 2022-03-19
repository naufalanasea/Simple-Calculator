#include <iostream>
#include <math.h>
 
using namespace std;
 
void Jumlah();
void Kurang();
void Kali();
void Bagi();
void Pangkat();
void Akar();
void Mod();
 
int main(){
     
    int opr;
    char u;
     
    cout << " ===== Kalkulator Sederhana =====" << endl << endl;
q:  cout << " Pilih Operasi Aritmatika\n" << endl;
    cout << " 1. Penjumlahan" << endl;
    cout << " 2. Pengurangan" << endl;
    cout << " 3. Perkalian" << endl;
    cout << " 4. Pembagian" << endl;
    cout << " 5. Perpangkatan" << endl;
    cout << " 6. Akar Pangkat" << endl;
    cout << " 7. Modulus" << endl;
    cout << "\n Pilihan Anda : ";
    cin >> opr;
    cout << " ==================================================" << endl;
    switch(opr){
        case 1 :
            Jumlah();
            break;
        case 2 :
            Kurang();
            break;
        case 3 :
            Kali();
            break;
        case 4 :
            Bagi();
            break;
        case 5 :
            Pangkat();
            break;
        case 6 :
            Akar();
            break;
        case 7 :
            Mod();
            break;
        default :
            system("cls");
            cout << " Pilihan Anda Tidak Ada Dalam Menu. \n Silahkan Input Ulang \n" << endl;
            goto q;
            break;
    }
    cout << endl;
    cout << " ==================================================" << endl;
    cout << " Apakah Anda Ingin Menginput Ulang ? [Y/T] ? ";
    cin >> u;
    if(u == 'Y' || u == 'y'){
        system("cls");
        goto q;
    } else {
        exit(0);
    }
    return 0;
}
void Jumlah(){
    float a, b;
    float hasil;
    cout << " Penjumlahan\n\n";
    cout << " Masukkan Bilangan Pertama : "; cin >> a;
    cout << " Masukkan Bilangan Kedua : "; cin >> b;
    hasil = a+b;
    cout << " Hasil Penghitungan : " << hasil;
}
 
void Kurang(){
    float a, b;
    float hasil;
    cout << " Pengurangan\n\n";
    cout << " Masukkan Bilangan Pertama : "; cin >> a;
    cout << " Masukkan Bilangan Kedua : "; cin >> b;
    hasil = a-b;
    cout << " Hasil Penghitungan : " << hasil;
}
 
void Kali(){
    float a, b;
    float hasil;
    cout << " Perkalian\n\n";
    cout << " Masukkan Bilangan Pertama : "; cin >> a;
    cout << " Masukkan Bilangan Kedua : "; cin >> b;
    hasil = a*b;
    cout << " Hasil Penghitungan : " << hasil;
}
 
void Bagi(){
    float a, b;
    float hasil;
    cout << " Pembagian\n\n";
    cout << " Masukkan Bilangan Pertama : "; cin >> a;
    cout << " Masukkan Bilangan Kedua : "; cin >> b;
    hasil = a/b;
    cout << " Hasil Penghitungan : " << hasil;
}
 
void Pangkat(){
    int bil;
    int pangkat;
    float hasil = 0;
    cout << " Perpangkatan\n\n";
    cout << " Masukkan Bilangan : "; cin >> bil;
    cout << " Masukkan Pangkat : "; cin >> pangkat;
    hasil = pow(bil,pangkat);
    cout << " Hasil Penghitungan : " << hasil;
}
 
void Akar(){
    float bil;
    float hasil = 0;
    cout << " Akar Pangkat\n\n";
    cout << " Masukkan Bilangan : ";
    cin >> bil;
    hasil = sqrt(bil);
    cout << " Hasil Penghitungan : " << hasil;
}
 
void Mod(){
    int a, b;
    float hasil = 0;
    cout << " Modulus\n\n";
    cout << " Masukkan Bilangan : ";
    cin >> a;
    cout << " Masukkan Bilangan Pembagi : ";
    cin >> b;
    hasil = a%b;
    cout << " Hasil Penghitungan : " << hasil;
}