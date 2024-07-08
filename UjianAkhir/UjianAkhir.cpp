/** \mainpage sistem penilaian dua mata kuliah
 *
 * \section intro_sec Pengantar
 * selamat datang di dokumentasi sistem  penilaian untuk dua mata kuliah,
 * sistem ini dirancang untuk mengetahui nilai akhir untuk dua mata kuliah tersebut
 *
 * \section stucture_sec Struktur Kode
 * Kode ini terdiri dari tiga kelas:
 * - \b MataKuliah:
 * - \b Pemrograman:
 * - \b Jaringan:
 *
 * \section setup_sec Setup dan Konfigurasi
 * Untuk menjalanka sistem ini, pastikan anda memilih compiler yang mendukung
 * Konfigurasi dan jalankan file ini menggunakan compiler pilihan anda.
 *
 * \section author_sec Tentang Pengembang
 * Sistem ini dikembangkan oleh ZakiMahogra.id sebagai bagian dari inisiatif pribadi
 *
 *  \section note_sec Catatan
 * Dokumentasi ini dihasilkan menggunakan Doxygen yang baru saya pahami*/
 /**
  * @file UjianAkhir.cpp
  * @author your name (you@domain.com)
  * @brief
  * @version 0.1
  * @date 2024-06-24
  *
  * @copyright Copyright (c) 2024
  *
  */


#include <iostream>
using namespace std;
/**
 * @class MataKuliah
 * @brief initial class MataKuliah
 *
 */

class MataKuliah {

    float presensi; ///< nilai presensi
    float activity; ///< nilai activity
    float exercise; ///< nilai exercise
    float tugasAkhir; ///< nilai tugasAkhir

public:
    MataKuliah()
    {
        presensi = 0.0;
        activity = 0.0;
        exercise = 0.0;
        tugasAkhir = 0.0;
    }

    virtual void namaMataKuliah() { return; }

    virtual void inputNilai()

        virtual void hitungNilaiAkhir()

        virtual void cekKelulusan()



        void setPresensi(float nilai)
    {
        this->presensi = nilai;
    }
    float getpresensi()
    {
        return presensi;
    }
    void setactivity(float nilai)
    {
        this->activity = nilai;
    }
    float getactivity()
    {
        return activity;
    }
    void setexercise(float e)
    {
        this->exercise = e;
    }
    float getexercise()
    {
        return exercise;
    }
    void settugasAkhir(float nilai)
    {
        this->tugasAkhir = nilai;
    }
    float gettugasAkhir()
    {
        return tugasAkhir;
    }

};

class Pemrograman : public MataKuliah
{
public:
    Pemrograman() {

    }

    void inputNilai() {
        cout << "input nilai presensi :";
        cin >> presensi;
        cout << "input nilai activity :";
        cin >> activity;
        cout << "input nilai exercise :";
        cin >> exercise;
        cout << "input nilai tugas akhir :";
        cin >> tugasAkhir;
    }

};

class Jaringan : public MataKuliah
{
public:
    Jaringan() {

    }
};

int main() {
    char pilih;
    MataKuliah* mataKuliah;
    Pemrograman pemrograman;
    Jaringan jaringan;


}
