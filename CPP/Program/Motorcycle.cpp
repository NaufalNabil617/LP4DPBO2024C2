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

// Deklarasi kelas Motorcycle yang merupakan turunan dari kelas Vehicle
class Motorcycle : public Vehicle {
private:
    // Properti khusus untuk sepeda motor: jenis dan kapasitas tangki
    string jenis;
    float tangki;

public:
    // Konstruktor dengan nilai default untuk semua properti, termasuk properti turunan dari kelas Vehicle
    Motorcycle(string jenis = "", float tangki = 0, string plat = "", string merk = "", int tahunProduksi = 0, string warna = "", string pemilik = "") :
        Vehicle(plat, merk, tahunProduksi, warna, pemilik), jenis(jenis), tangki(tangki) {}

    // Metode set jenis sepeda motor
    void setJenis(string jenis) {
        this->jenis = jenis;
    }

    // Metode get jenis sepeda motor
    string getJenis() {
        return jenis;
    }

    // Metode set kapasitas tangki sepeda motor
    void setTangki(float tangki) {
        this->tangki = tangki;
    }

    // Metode get kapasitas tangki sepeda motor
    float getTangki() {
        return tangki;
    }
};
