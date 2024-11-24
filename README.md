# Pemrograman I2C dan LCD dengan Arduino

Repositori ini berisi contoh kode Arduino untuk bekerja dengan perangkat **I2C**, khususnya layar **LCD I2C 16x2**. Di dalam repositori ini terdapat beberapa contoh penggunaan seperti pemindaian perangkat I2C, menampilkan teks pada LCD, memperbarui angka secara berkala di layar LCD, menampilkan waktu sistem, dan menampilkan pesan bergerak.

Contoh kode ini menggunakan pustaka `Wire` untuk komunikasi I2C dan pustaka `LiquidCrystal_I2C` untuk mengontrol layar LCD.

## Persyaratan Hardware

- **Arduino UNO** (atau papan kompatibel)
- **LCD I2C 16x2**
- Kabel untuk menghubungkan LCD ke Arduino

### Koneksi:

| LCD Pin   | Arduino Pin  |
|-----------|--------------|
| VCC       | 5V           |
| GND       | GND          |
| SDA       | A4           |
| SCL       | A5           |


### Pustaka yang Digunakan:
- Wire: Pustaka untuk komunikasi I2C di Arduino. Pustaka ini sudah tersedia secara default di IDE Arduino.
- LiquidCrystal_I2C: Pustaka untuk mengontrol LCD I2C 16x2. Anda dapat mengunduhnya melalui Library Manager di IDE Arduino.

### Cara Penggunaan:
- Hubungkan LCD I2C Anda ke Arduino sesuai dengan petunjuk di atas.
- Pilih salah satu contoh kode dari yang tersedia di repositori ini.
- Unggah kode ke Arduino menggunakan Arduino IDE.
- Buka Serial Monitor untuk melihat hasil dari pemindaian I2C (untuk I2C Scanner).
- Lihat LCD untuk melihat tampilan teks, angka, atau pesan yang berjalan.

