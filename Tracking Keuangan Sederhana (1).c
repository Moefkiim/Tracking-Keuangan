//Program tracking keuangan
#include <stdio.h>

int main() {
    float pemasukan = 0, pengeluaran = 0;
    int pilihan;
    float jumlah;
//Looping yang terjadi terus-menerus sampai pengguna 
//memasukkan pilihan yang di inginkan
    do {
        printf("1. Tambah Pemasukan\n");
        printf("2. Tambah Pengeluaran\n");
        printf("3. Tampilkan Data\n");
        printf("4. Keluar\n");
        printf("Pilih: ");
        scanf("%d", &pilihan);
//Pilihan 1 dengan membuat pengguna memasukkan data
        if (pilihan == 1) {
            printf("Masukkan jumlah pemasukan: ");
            scanf("%f", &jumlah);
            pemasukan += jumlah;
            //Pilihan 2 untuk membuat data yang ada sebelumnya menjadi berkurang.
        } else if (pilihan == 2) {
            printf("Masukkan jumlah pengeluaran: ");
            scanf("%f", &jumlah);
            pengeluaran += jumlah;
            //Pilihan 3 untuk menampilkan data yang ada atau tersisa agar memudahkan user.
        } else if (pilihan == 3) {
            printf("Pemasukan: %.2f\n", pemasukan);
            printf("Pengeluaran: %.2f\n", pengeluaran);
            printf("Sisa: %.2f\n", pemasukan - pengeluaran);
            //Pilihan 4 agar kode program yang berjalan berhenti.
        } else if (pilihan == 4) {
            printf("Keluar...\n");
            //Apabila yang diinput bukan nomor yang ada dalam pilihan 
            //maka kode program memunculkan "Pilihan tidak valid".
        } else {
            printf("Pilihan tidak valid.\n");
        }
        //Ini adalah kondisi jika pengguna memasukkan angka 4
        //yang membuat kode program langsung selesai.
    } while (pilihan != 4);

    return 0;
}
