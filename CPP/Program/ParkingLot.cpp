/*Saya Naufal Nabil Anugrah (2201090) mengerjakan LP4 dalam mata kuliah
DPBO keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

// Memastikan bahwa header ini hanya disertakan sekali dalam satu kompilasi
#pragma once

// Mengimpor definisi kelas Vehicle yang diperlukan
#include "Vehicle.cpp"

// Mengimpor library untuk input/output
#include <iostream>

// Mengimpor library untuk tipe data vector
#include <vector>

// Mengimpor library untuk tipe data string
#include <string>

// Deklarasi kelas ParkingLot
class ParkingLot {
private:
    // Properti untuk tempat parkir: nama, daftar kendaraan, kapasitas, dan jumlah kendaraan
    std::string nama;
    std::vector<Vehicle*> daftarKendaraan; // Menggunakan vector untuk menyimpan pointer kendaraan
    int kapasitas;
    int jmlVehicle;

public:
    // Konstruktor dengan nilai default untuk nama dan kapasitas
    ParkingLot(std::string nama = "", int kapasitas = 0) :
        nama(nama), kapasitas(kapasitas), jmlVehicle(0) {}

    // Metode set nama tempat parkir
    void setNama(std::string nama) {
        this->nama = nama;
    }

    // Metode get nama tempat parkir
    std::string getNama() {
        return nama;
    }

    // Metode untuk menambahkan kendaraan ke daftar kendaraan tempat parkir
    void addDaftarKendaraan(Vehicle* vehicle) {
        daftarKendaraan.push_back(vehicle);
        jmlVehicle++;
    }

    // Metode set kapasitas tempat parkir
    void setKapasitas(int kapasitas) {
        this->kapasitas = kapasitas;
    }

    // Metode get kapasitas tempat parkir
    int getKapasitas() {
        return kapasitas;
    }

    // Metode untuk mendapatkan jumlah kendaraan yang saat ini diparkir
    int getJmlVehicle() {
        return jmlVehicle;
    }

    // Metode untuk mendapatkan daftar kendaraan yang diparkir di tempat parkir
    std::vector<Vehicle*> getDaftarKendaraan() {
        return daftarKendaraan;
    }
};
