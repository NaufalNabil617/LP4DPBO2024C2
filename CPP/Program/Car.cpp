/*Saya Naufal Nabil Anugrah (2201090) mengerjakan LP4 dalam mata kuliah
DPBO keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

// Memastikan bahwa header ini hanya disertakan sekali dalam satu kompilasi
#pragma once

// Mengimpor library untuk input/output
#include <iostream>

// Mengimpor library untuk tipe data string
#include <string>

// Mengimpor definisi kelas Vehicle yang diperlukan
#include "Vehicle.cpp"

// Menggunakan namespace standard untuk menghindari penulisan std:: sebelum setiap referensi
using namespace std;

// Deklarasi kelas Car yang merupakan turunan dari kelas Vehicle
class Car : public Vehicle {
private:
    // Properti khusus untuk mobil: jumlah kursi dan jumlah pintu
    int jmlKursi;
    int jmlPintu;

public:
    // Konstruktor dengan nilai default untuk semua properti, termasuk properti turunan dari kelas Vehicle
    Car(int jmlKursi = 0, int jmlPintu = 0, string plat = "", string merk = "", int tahunProduksi = 0, string warna = "", string pemilik = "") :
        Vehicle(plat, merk, tahunProduksi, warna, pemilik), jmlKursi(jmlKursi), jmlPintu(jmlPintu) {}

    // Metode untuk mengatur nilai jumlah kursi mobil
    void setJmlKursi(int jmlKursi) {
        this->jmlKursi = jmlKursi;
    }

    // Metode untuk mendapatkan nilai jumlah kursi mobil
    int getJmlKursi() {
        return jmlKursi;
    }

    // Metode untuk mengatur nilai jumlah pintu mobil
    void setJmlPintu(int jmlPintu) {
        this->jmlPintu = jmlPintu;
    }

    // Metode untuk mendapatkan nilai jumlah pintu mobil
    int getJmlPintu() {
        return jmlPintu;
    }
};
