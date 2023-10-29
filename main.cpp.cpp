#include <iostream>

using namespace std;

int main()
{
    // nomor 1
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if(nilai>=90){
        cout << "'Selamat! Anda mendapatkan nilai A." << endl;
    }else if(nilai>=80){
       cout << "'Anda mendapatkan nilai B'" << endl;
    }else if(nilai>=70){
        cout << "'Anda mendpatkan nilai C'" << endl;
    }else if(nilai>=60){
        cout << "'Anda mendapatkan nilai D'" << endl;
    }else if(nilai<60){
        cout << "'Anda mendapatkan nilai E'" << endl;
    }


    // nomor 2
    int a, b, c;
    cout << "[Mencari angka terbesar diantara tiga angka\n\n]";

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << "Masukkan angka ketiga: ";
    cin >> c;

    cout << "Angka terbesarnya adalah: ";
    if (a > b && a > c){
        cout << a << endl;
    }else if(b > a && b > c){
        cout << b << endl;
    }else if(c > b && c > a){
        cout << c << endl;
    }


    // nomor 3
    int pilihan;
    cout << "Program mengihtung luas persegi , persegi panjang, dan segitiga\n\n";

    cout << "silahkan pilih mana yang ingin dihitung lalu masukkan nomornya: " << endl;
    cout << "(1) luas persegi" << endl;
    cout << "(2) luas persegi panjang" << endl;
    cout << "(3) luas segitiga\n\n";

    cout << "masukkan nomor pilihan untuk menghitung luas: ";
    cin >> pilihan;
    switch (pilihan) {

       // persegi
        case 1:{
            double sisi;
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            double luas = sisi * sisi;
            cout << "luas persegi: " << luas << endl;
            break;
        }
        // persegi panjang
        case 2:{
            double panjang, lebar;
            cout << "masukkan panajng persegi panjang: ";
            cin >> panjang;
            cout << "masukkan lebar persegi panjang: ";
            cin >> lebar;
            double luas = panjang * lebar;
            cout << "luas persegi panjang: " << luas << endl;
            break;
        }
        // segitiga
        case 3:{
            double alas, tinggi;
            cout << "masukkan alas segitiga: ";
            cin >> alas;
            cout << "masukkan tingga segitiga: ";
            cin >> tinggi;
            double luas = 0.5 * alas * tinggi;
            cout << "luas segitiga: " << alas << endl;
            break;
        }

        default:
            cout << "pilihan anda tidak valid, ssilahkan pilih angka antara 1, 2, 3, terima kasih!" << endl;;
    }
    return 0;
}
