/*Saya Naufal Nabil Anugrah (2201090) mengerjakan LP4 dalam mata kuliah
DPBO keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

// Memastikan bahwa header ini hanya disertakan sekali dalam satu kompilasi
#pragma once

// Mengimpor library untuk input/output
#include <iostream>

// Mengimpor library untuk tipe data string
#include <string>

// Mengimpor library untuk tipe data vector
#include <vector>

// Mengimpor definisi kelas Vehicle yang diperlukan
#include "Vehicle.cpp"

// Menggunakan namespace standard untuk menghindari penulisan std:: sebelum setiap referensi
using namespace std;

// Deklarasi kelas Garage
class Garage {
private:
    // Properti untuk garasi: nama, daftar kendaraan, dan luas
    string nama;
    vector<Vehicle*> daftarKendaraan; // Menggunakan vector untuk menyimpan pointer kendaraan
    int luas;
    int jmlVehicle;

public:
    // Konstruktor dengan nilai default untuk nama luas dan jumlah kendaraan
    Garage(string nama = "", int luas = 0) :
        nama(nama), luas(luas), jmlVehicle(0) {}

    // Metode set nama garasi
    void setNama(string nama) {
        this->nama = nama;
    }

    // Metode get nama garasi
    string getNama() {
        return nama;
    }

    // Metode untuk menambahkan kendaraan ke daftar kendaraan garasi
    void addDaftarKendaraan(Vehicle* vehicle) {
        daftarKendaraan.push_back(vehicle);
        jmlVehicle++;
    }

    // Metode get luas garasi
    int getLuas() {
        return luas;
    }

    // Metode untuk mendapatkan jumlah kendaraan yang saat ini diparkir
    int getJmlVehicle() {
        return jmlVehicle;
    }

    // Metode untuk mendapatkan daftar kendaraan dalam garasi
    vector<Vehicle*> getDaftarKendaraan() {
        return daftarKendaraan;
    }

    // Method untuk menghapus kendaraan berdasarkan indeks
    void removeVehicle(int index) {
        if (index >= 0 && index < daftarKendaraan.size()) {
            daftarKendaraan.erase(daftarKendaraan.begin() + index);
            jmlVehicle--;
        }
    }

};
