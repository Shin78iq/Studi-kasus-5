#include <iostream>
using namespace std;

int main() {
    int pilihan_menu, jumlah_pesanan;
    long total_harga, diskon, harga_akhir;
    char layani_lagi;

    
    do {
    
        total_harga = 0; 
        
        cout << "\n===================================" << endl;
        cout << "      KASIR KEDAI KOPI SENJA       " << endl;
        cout << "===================================" << endl;
        
        
        cout << "1. Kopi Hitam     (Rp 10.000)" << endl;
        cout << "2. Cappuccino     (Rp 15.000)" << endl;
        cout << "3. Roti Bakar     (Rp 12.000)" << endl;
        cout << "4. Mie Goreng     (Rp 18.000)" << endl;
        cout << "-----------------------------------" << endl;
        
        cout << "Pilih nomor menu (1-4): ";
        cin >> pilihan_menu;
        
        cout << "Jumlah pesanan        : ";
        cin >> jumlah_pesanan;

        
        switch(pilihan_menu) {
            case 1:
                total_harga = 10000 * jumlah_pesanan;
                break;
            case 2:
                total_harga = 15000 * jumlah_pesanan;
                break;
            case 3:
                total_harga = 12000 * jumlah_pesanan;
                break;
            case 4:
                total_harga = 18000 * jumlah_pesanan;
                break;
            default:
                cout << "[ERROR] Pilihan menu tidak tersedia!" << endl;
                total_harga = 0; 
        }

        
        if (total_harga > 0) {
            cout << "\nSubtotal Belanja : Rp " << total_harga << endl;

            
            if (total_harga > 50000) {
                diskon = total_harga * 10 / 100; 
                cout << "Diskon (10%)     : Rp " << diskon << endl;
            } else {
                diskon = 0; 
            }

            harga_akhir = total_harga - diskon;

            cout << "-----------------------------------" << endl;
                        cout << "TOTAL BAYAR      : Rp " << harga_akhir << endl;
            cout << "===================================" << endl;
        }

        
        cout << "\nApakah ada pelanggan selanjutnya? (y/n): ";
        cin >> layani_lagi;

    } while (layani_lagi == 'y' || layani_lagi == 'Y');

    
    cout << "\nSistem Dimatikan. Terima Kasih." << endl;

    return 0;
}

