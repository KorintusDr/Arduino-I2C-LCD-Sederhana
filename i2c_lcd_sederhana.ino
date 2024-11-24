//================================AWAL - SCANNER I2C==================================//

// Menemukan alamat I2C


// #include <Wire.h>

// void setup() {
//   Serial.begin(9600);
//   Wire.begin();
  
//   Serial.println("\nI2C Scanner");
//   for (byte i = 8; i < 120; i++) {
//     Wire.beginTransmission(i);
//     if (Wire.endTransmission() == 0) {
//       Serial.print("Alamat I2C ditemukan: 0x");
//       Serial.println(i, HEX);
//     }
//   }
// }

// void loop() {
  
// }


//================================AKHIR - SCANNER I2C==================================//










//================================AWAL - Menampilkan Teks Sederhana==================================//


// #include <Wire.h>
// #include <LiquidCrystal_I2C.h>


// LiquidCrystal_I2C lcd(0x27, 16, 2);  

// void setup() {
  
//   lcd.begin(16, 2);  // Ukuran LCD 16 kolom dan 2 baris
  
//   // Menyalakan lampu latar LCD
//   lcd.backlight();
  
//   // Menampilkan pesan pada LCD
//   lcd.setCursor(0, 0);  // Menetapkan posisi kursor di kolom 0, baris 0. Posisi akan berubah jika diubah ke 4.0 atau seterusnya.
//   lcd.print("Hallo, World!"); // Menampilkan pada baris pertama
//   lcd.setCursor(0, 1);  //Pindah baris kedua
//   lcd.print("I am Korintus"); //Menampilkan pada baris kedua
// }

// void loop() {
  
// }


//================================AKHIR - LCD Menampilkan Teks Sederhana==================================//










//================================AWAL - Menampilkan Angka yang Terupdatea==================================//

// #include <Wire.h>
// #include <LiquidCrystal_I2C.h>

// LiquidCrystal_I2C lcd(0x27, 16, 2);

// int count = 0;

// void setup() {
//   lcd.begin(16, 2);
//   lcd.backlight();
// }

// void loop() {
//   lcd.clear();  // Membersihkan layar sebelum menampilkan angka baru
//   lcd.setCursor(0, 0);
//   lcd.print("Counter: ");
//   lcd.setCursor(0, 1);
//   lcd.print(count);
//   count++;  // Menambah angka setiap kali loop berjalan
//   delay(1000);  // Delay 1 detik
// }

//================================AKHIR - Menampilkan Angka yang Terupdatea==================================//












//================================AWAL - Menampilkan Waktu Sistem (Delay)==================================//

// #include <Wire.h>
// #include <LiquidCrystal_I2C.h>

// LiquidCrystal_I2C lcd(0x27, 16, 2);

// unsigned long previousMillis = 0;
// unsigned long interval = 1000;  // Interval 1 detik
// unsigned long currentMillis;

// void setup() {
//   lcd.begin(16, 2);
//   lcd.backlight();
// }

// void loop() {
//   currentMillis = millis();  // Mendapatkan waktu berjalan sistem

//   if (currentMillis - previousMillis >= interval) {
//     previousMillis = currentMillis;  // Menyimpan waktu saat ini

//     lcd.clear();
//     lcd.setCursor(0, 0);
//     lcd.print("Time: ");
//     lcd.setCursor(0, 1);
//     lcd.print(currentMillis / 1000);  // Menampilkan waktu dalam detik
//   }
// }

//================================AKHIR - Menampilkan Waktu Sistem (Delay)==================================//









//================================AWAL - Menampilkan Pesan Berjalan==================================//

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.backlight();
}

void loop() {
  String message = "Hello, World! I am Korintus D.R";
  
  // Menggeser pesan ke kiri
  for (int i = 0; i < message.length(); i++) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(message.substring(i));
    delay(300);  // Delay 300ms untuk kecepatan geser
  }
}

//================================AKHIR - Menampilkan Pesan Berjalan==================================//
