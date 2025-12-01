# 🚴 RENT-CYCLE  
Aplikasi Rental Sepeda berbasis C++ (Console Application)

RENT-CYCLE adalah aplikasi sederhana untuk mengelola penyewaan sepeda menggunakan pendekatan **Object-Oriented Programming (OOP)** dalam bahasa **C++**.  
Aplikasi ini dibuat sebagai project mata kuliah Pemrograman Dasar dan berjalan pada mode **console (CLI)**.

---

## ✨ Fitur Aplikasi

| Kode | Fitur | Deskripsi |
|------|-------|------------|
| F-01 | Menambahkan data sepeda | Menambah sepeda baru dengan ID dan harga sewa per jam |
| F-02 | Mengedit data sepeda | Mengubah harga sewa atau informasi sepeda tertentu |
| F-03 | Menghapus data sepeda | Menghapus sepeda berdasarkan ID |
| F-04 | Menampilkan seluruh sepeda | Menunjukkan status setiap sepeda (Available / Rented) |
| F-05 | Pinjam sepeda | Mencatat transaksi peminjaman (nama peminjam & jam mulai) |
| F-06 | Kembalikan sepeda | Menghitung total biaya berdasarkan lama peminjaman |
| F-07 | Load Data | Membaca data sepeda dari file `input.txt` |
| F-08 | Save Data | Menyimpan data sepeda ke file `output.txt` |

---

## 🛠️ Teknologi & Tools

- Bahasa: **C++ (OOP)**
- Compiler: **MinGW-w64**
- Editor: **Visual Studio Code**
- Library pendukung:
  - `<iostream>`
  - `<vector>`
  - `<fstream>`
  - `<string>`

---

## 📂 Struktur Folder
RentCycle/
│ main.cpp
│ bicycle.h
│ bicycle.cpp
│ rentalsystem.h
│ rentalsystem.cpp
│ input.txt (opsional)
│ output.txt (akan otomatis dibuat)

---

## 🧩 Cara Kerja Sistem

### Class utama:
- **Bicycle**
  - Menyimpan detail sepeda (ID, harga, status, peminjam)
- **RentalSystem**
  - Mengatur semua fitur (add, edit, delete, pinjam, kembali, load/save)

### Main Menu:
Program menggunakan loop menu utama sehingga pengguna dapat memilih fitur sesuai kebutuhan.

---

## 👩‍💻 Pengembang
Project ini dikembangkan oleh:

- **Elisabeth Isabel Elgina**
- **Wahidhania Inna Yakut**

Departemen Teknik Elektro dan Teknologi Informasi  
Universitas Gadjah Mada — 2025

