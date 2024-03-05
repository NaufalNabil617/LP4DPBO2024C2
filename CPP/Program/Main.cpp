/*Saya Naufal Nabil Anugrah (2201090) mengerjakan LP4 dalam mata kuliah
DPBO keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

// Memastikan bahwa header ini hanya disertakan sekali dalam satu kompilasi
#pragma once

// Mengimpor definisi kelas Vehicle yang diperlukan
#include "Vehicle.cpp"

// Mengimpor file-file header yang diperlukan
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "ParkingLot.cpp"
#include "Garage.cpp"

// Menggunakan namespace standard untuk menghindari penulisan std:: sebelum setiap referensi
using namespace std;

// Fungsi utama program
int main() {
    // Inisialisasi beberapa kendaraan
    Motorcycle motorIqbal("Vespa", 5.5, "B3804EBG", "Honda", 2013, "Merah", "Iqbal");
    Motorcycle motorShidiq("Trail", 3.0, "B3241BCA", "Yamaha", 2009, "Hitam", "Shidiq");
    Motorcycle motorDaoa("Moge", 7.0, "X6574DDD", "Ninja", 2015, "Hijau", "Daoa");
    Motorcycle motorNaufal("Gigi", 8.0, "X1674CCD", "Jupiter", 2016, "Pink", "Naufal");

    Car mobilAdrian(4, 4, "D1234ABC", "Bugatti", 2019, "Putih", "Adrian");
    Car mobilAbdul(2, 2, "D5632GCC", "Minicopper", 1995, "Kuning", "Abdul");
    Car mobilNaufal(2, 4, "D8232748", "Porsche", 2005, "Hitam", "Naufal");

    // Mendefinisikan daftar kendaraan untuk setiap tempat parkir
    vector<Vehicle*> listKendaraan1 = {&motorIqbal, &motorShidiq, &mobilAbdul};
    vector<Vehicle*> listKendaraan2 = {&mobilAdrian, &motorDaoa};
    vector<Vehicle*> listKendaraan3 = {&motorNaufal, &mobilNaufal};

    // Membuat objek tempat parkir dan garasi
    ParkingLot parkiranUPI("Parkiran UPI", 500);
    ParkingLot parkiranPujasera("Parkiran Pujasera", 2);
    Garage garasiNaufal("Garasi Naufal", 15);

    // Menambahkan kendaraan ke tempat parkir dan garasi
    for (auto vehicle : listKendaraan1) {
        parkiranUPI.addDaftarKendaraan(vehicle);
    }
    for (auto vehicle : listKendaraan2) {
        parkiranPujasera.addDaftarKendaraan(vehicle);
    }
    for (auto vehicle : listKendaraan3) {
        garasiNaufal.addDaftarKendaraan(vehicle);
    }

    // Membuat daftar tempat parkir dan garasi
    vector<ParkingLot> listParkiran = {parkiranUPI, parkiranPujasera};
    vector<Garage> listGarasi = {garasiNaufal};

    // Menu utama program
    int choice = 0;
    while(true){
        cout << "Bantu Rifky Mencari Parkiran" << endl;
        cout << "1. Lihat informasi parkiran" << endl;
        cout << "2. Lihat informasi garasi" << endl;
        cout << "3. Keluar" << endl;
        cin >> choice;

        switch (choice) {
            // Kasus untuk menampilkan informasi parkiran
            case 1: {
                // Looping melalui daftar parkiran
                int i = 1;
                for (auto parkiran : listParkiran) {
                    cout << "Parkiran ke-" << i << endl;
                    cout << "Data " << parkiran.getNama() << endl;
                    cout << "Jumlah kendaraan terparkir   : " << parkiran.getJmlVehicle() << " kendaraan" << endl;
                    cout << "Kapasitas total              : " << parkiran.getKapasitas() << " kendaraan" << endl;
                    cout << "Daftar kendaraan yang terparkir:" << endl << endl;

                    // Looping melalui daftar kendaraan di parkiran
                    int j = 1;
                    for (auto vehicle : parkiran.getDaftarKendaraan()) {
                        cout << " Kendaraan ke-" << j << endl;
                        cout << " Nama pemilik    : " << vehicle->getPemilik() << endl;
                        cout << " Jenis kendaraan : ";

                        // Memeriksa jenis kendaraan
                        if (dynamic_cast<Car*>(vehicle)) {
                            cout << "Mobil" << endl;
                            cout << " Jumlah kursi    : " << dynamic_cast<Car*>(vehicle)->getJmlKursi() << endl;
                            cout << " Jumlah pintu    : " << dynamic_cast<Car*>(vehicle)->getJmlPintu() << endl;
                        } else {
                            cout << "Sepeda motor" << endl;
                            cout << " Jenis motor     : " << dynamic_cast<Motorcycle*>(vehicle)->getJenis() << endl;
                            cout << " Kapasitas tangki: " << dynamic_cast<Motorcycle*>(vehicle)->getTangki() << " liter" << endl;
                        }

                        cout << " Nomor plat      : " << vehicle->getPlat() << endl;
                        cout << " Merk            : " << vehicle->getMerk() << endl;
                        cout << " Tahun Produksi  : " << vehicle->getTahunProduksi() << endl;
                        cout << " Warna           : " << vehicle->getWarna() << endl << endl;
                        j++;
                    }
                    i++;
                }
                // Menambahkan kendaraan ke tempat parkir yang kosong
                Motorcycle motorRifky("Gigi", 10.0, "X17544CBD", "Supra", 2024, "Kunig", "Rifky");
                parkiranUPI.addDaftarKendaraan(&motorRifky);
                cout << "Pujasera penuh silahkan parkir di UPI" << endl << endl;
                // Menampilkan informasi parkiran setelah penambahan kendaraan
                cout << "Data " << parkiranUPI.getNama() << endl;
                cout << "Jumlah kendaraan terparkir   : " << parkiranUPI.getJmlVehicle() << " kendaraan" << endl;
                cout << "Kapasitas total              : " << parkiranUPI.getKapasitas() << " kendaraan" << endl;
                cout << "List kendaraan yang terparkir:" << endl << endl;

                // Looping melalui daftar kendaraan di parkiran setelah penambahan kendaraan
                int j = 1;
                for (auto vehicle : parkiranUPI.getDaftarKendaraan()) {
                    cout << " Kendaraan ke-" << j << endl;
                    cout << " Nama pemilik    : " << vehicle->getPemilik() << endl;
                    cout << " Jenis kendaraan : ";
                    if (dynamic_cast<Car*>(vehicle)) {
                        cout << "Mobil" << endl;
                        cout << " Jumlah kursi    : " << dynamic_cast<Car*>(vehicle)->getJmlKursi() << endl;
                        cout << " Jumlah pintu    : " << dynamic_cast<Car*>(vehicle)->getJmlPintu() << endl;
                    } else {
                        cout << "Sepeda motor" << endl;
                        cout << " Jenis motor     : " << dynamic_cast<Motorcycle*>(vehicle)->getJenis() << endl;
                        cout << " Kapasitas tangki: " << dynamic_cast<Motorcycle*>(vehicle)->getTangki() << " liter" << endl;
                    }
                    cout << " Nomor plat      : " << vehicle->getPlat() << endl;
                    cout << " Merk            : " << vehicle->getMerk() << endl;
                    cout << " Tahun Produksi  : " << vehicle->getTahunProduksi() << endl;
                    cout << " Warna           : " << vehicle->getWarna() << endl << endl;
                    j++;
                }
                break;
            }
            // Kasus untuk menampilkan informasi garasi
            case 2: {
                // Looping melalui daftar garasi
                int i = 1;
                for (auto garasi : listGarasi) {
                    cout << "Data " << garasi.getNama() << endl;
                    cout << "Jumlah kendaraan terparkir   : " << garasiNaufal.getJmlVehicle() << " kendaraan" << endl;
                    cout << "Luas garasi                : " << garasi.getLuas() << " m^2" << endl;
                    cout << "Daftar kendaraan yang terparkir:" << endl << endl;

                    // Looping melalui daftar kendaraan di garasi
                    int j = 1;
                    for (auto vehicle : garasi.getDaftarKendaraan()) {
                        cout << " Kendaraan ke-" << j << endl;
                        cout << " Nama pemilik    : " << vehicle->getPemilik() << endl;
                        cout << " Jenis kendaraan : ";

                        // Memeriksa jenis kendaraan
                        if (dynamic_cast<Car*>(vehicle)) {
                            cout << "Mobil" << endl;
                            cout << " Jumlah kursi    : " << dynamic_cast<Car*>(vehicle)->getJmlKursi() << endl;
                            cout << " Jumlah pintu    : " << dynamic_cast<Car*>(vehicle)->getJmlPintu() << endl;
                        } else {
                            cout << "Sepeda motor" << endl;
                            cout << " Jenis motor     : " << dynamic_cast<Motorcycle*>(vehicle)->getJenis() << endl;
                            cout << " Kapasitas tangki: " << dynamic_cast<Motorcycle*>(vehicle)->getTangki() << " liter" << endl;
                        }

                        cout << " Nomor plat      : " << vehicle->getPlat() << endl;
                        cout << " Merk            : " << vehicle->getMerk() << endl;
                        cout << " Tahun Produksi  : " << vehicle->getTahunProduksi() << endl;
                        cout << " Warna           : " << vehicle->getWarna() << endl << endl;
                        j++;
                    }
                    i++;
                }
                // Temukan indeks kendaraan yang ingin dihapus dari objek garasiNaufal
                int index = -1;
                for (int i = 0; i < garasiNaufal.getDaftarKendaraan().size(); ++i) {
                    if (garasiNaufal.getDaftarKendaraan()[i] == &motorNaufal) {
                        index = i;
                        break;
                    }
                }

                // Periksa apakah kendaraan ditemukan dalam vektor
                if (index != -1) {
                    // Hapus kendaraan dari objek garasiNaufal
                    garasiNaufal.removeVehicle(index);


                }
                cout << "Naufal Mengeluarkan Motornya Kebetulan Melihat Iky Ingin Parkir" << endl << endl;
                // Menampilkan informasi garasi setelah penambahan kendaraan
                cout << "Data " << garasiNaufal.getNama() << endl;
                cout << "Jumlah kendaraan terparkir   : " << garasiNaufal.getJmlVehicle() << " kendaraan" << endl;
                cout << "Luas garasi                  : " << garasiNaufal.getLuas() << " m^2" << endl;
                cout << "List kendaraan yang terparkir:" << endl << endl;

                // Looping melalui daftar kendaraan di garasi setelah penambahan kendaraan
                int j = 1;
                for (auto vehicle : garasiNaufal.getDaftarKendaraan()) {
                    cout << " Kendaraan ke-" << j << endl;
                    cout << " Nama pemilik    : " << vehicle->getPemilik() << endl;
                    cout << " Jenis kendaraan : ";
                    if (dynamic_cast<Car*>(vehicle)) {
                        cout << "Mobil" << endl;
                        cout << " Jumlah kursi    : " << dynamic_cast<Car*>(vehicle)->getJmlKursi() << endl;
                        cout << " Jumlah pintu    : " << dynamic_cast<Car*>(vehicle)->getJmlPintu() << endl;
                    } else {
                        cout << "Sepeda motor" << endl;
                        cout << " Jenis motor     : " << dynamic_cast<Motorcycle*>(vehicle)->getJenis() << endl;
                        cout << " Kapasitas tangki: " << dynamic_cast<Motorcycle*>(vehicle)->getTangki() << " liter" << endl;
                    }
                    cout << " Nomor plat      : " << vehicle->getPlat() << endl;
                    cout << " Merk            : " << vehicle->getMerk() << endl;
                    cout << " Tahun Produksi  : " << vehicle->getTahunProduksi() << endl;
                    cout << " Warna           : " << vehicle->getWarna() << endl << endl;
                    j++;
                }
                cout << "GARASI PRIBADI JANGAN PARKIR DISINI!!!!" << endl <<endl;
                break;
            }
            // Kasus untuk keluar dari program
            case 3:
                cout << "Terima kasih!" << endl;
                break;
                
        }
        // Keluar dari loop jika pilihan adalah 3
        if (choice == 3)
            break;
    }

    return 0;
}
