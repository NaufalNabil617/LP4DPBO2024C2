/*Saya Naufal Nabil Anugrah (2201090) mengerjakan LP4 dalam mata kuliah
DPBO keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

// Memastikan bahwa header ini hanya disertakan sekali dalam satu kompilasi
#pragma once

// Mengimpor library untuk input/output
#include <iostream>

// Mengimpor library untuk tipe data string
#include <string>

// Menggunakan namespace standard untuk menghindari penulisan std:: sebelum setiap referensi
using namespace std;

// Deklarasi kelas Vehicle
class Vehicle {
private:
    // Properti kendaraan: plat nomor, merk, tahun produksi, warna, dan pemilik
    string plat;
    string merk;
    int tahunProduksi;
    string warna;
    string pemilik;

public:
    // Konstruktor dengan nilai default untuk semua properti
    Vehicle(string plat = "", string merk = "", int tahunProduksi = 0, string warna = "", string pemilik = "") :
        plat(plat), merk(merk), tahunProduksi(tahunProduksi), warna(warna), pemilik(pemilik) {}

    // Metode set plat nomor
    void setPlat(string plat) {
        this->plat = plat;
    }

    // Metode get plat nomor 
    string getPlat() {
        return plat;
    }

    // Metode set merk
    void setMerk(string merk) {
        this->merk = merk;
    }

    // Metode get merk
    string getMerk() {
        return merk;
    }

    // Metode set tahun produksi
    void setTahunProduksi(int tahunProduksi) {
        this->tahunProduksi = tahunProduksi;
    }

    // Metode g tahun produksi
    int getTahunProduksi() {
        return tahunProduksi;
    }

    // Metode set warna
    void setWarna(string warna) {
        this->warna = warna;
    }

    // Metode get warna
    string getWarna() {
        return warna;
    }

    // Metode set pemilik
    void setPemilik(string pemilik) {
        this->pemilik = pemilik;
    }

    // Metode get pemilik
    string getPemilik() {
        return pemilik;
    }
    
    // Destruktor virtual untuk kelas Vehicle
    virtual ~Vehicle() {}
};
