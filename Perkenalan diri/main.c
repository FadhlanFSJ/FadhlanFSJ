/* Perkenalan Diri */
#include <stdio.h>

int main()
{
    int usia,nilaites,nilairapot;
    printf("Masukkan Usia : ");
    scanf("%i", &usia);

    if(usia >= 17 && usia <= 20){
        printf("Masukkan Nilai Rapot : ");
        scanf("%i", &nilairapot);
        if(nilairapot >= 80){
            printf("Selamat !! Anda Bisa Memilih prodi manapun");
        }
        else if(nilairapot >= 70 && nilairapot < 80){
            printf("Selamat!! anda diterima di Prodi Elektro");
        }
        else if(nilairapot >= 65 && nilairapot <70){
            printf("Selamat!! Anda diterima di Prodi Bisnis Digital");
        }
        else{
            printf("Mohon maaf, anda tidak diterima");
        }
    }
    else{
        printf("Masukkan nilai tes anda : ");
        scanf("%i", &nilaites);

        if(nilaites >=75){
            printf("Masukkan Nilai Rapot : ");
            scanf("%i", &nilairapot);
            if(nilairapot >= 80){
                printf("Selamat!! Anda Bisa Memilih prodi manapun");
            }
            else if(nilairapot >= 70 && nilairapot < 80){
                printf("Selamat!!anda diterima di Prodi Elektro");
            }
            else if(nilairapot >= 65 && nilairapot <70){
                printf("Selamat!! Anda diterima di Prodi Bisnis Digital");
            }
            else{
                printf("Mohon maaf, anda tidak diterima");
            }

        }
        else{
            printf("Mohon maaf, anda tidak diterima");
        }
    }

    /*int n;
    printf("Masukkan Angka : ");
    scanf("%i", &n);

    if(n >= 1 && n <= 3){
        printf("Podium!!");
    }
    else if(n >= 4 && n <= 5){
        printf("5 Besar!!");
    }
    else if(n >= 6 && n <=10){
        printf("10 Besar!!");
    }
    else if(n >= 11 && n <= 100){
        printf("Peserta Unggulan");
    }
    else{
        printf("Angka yang dimasukkan salah");
    }*/

    /*char bulan;
    printf("Masukkan Bulan (dalam bentuk angka) = ");
    scanf("%c", &bulan);

    switch(bulan){
        case '1': case '3': case '5': case '7': case 10: case 12: {
            printf("Bulan yang dimasukkan memiliki 31 Hari");
            break;
         }
        case '4': case '6': case '9': case 11: {
            printf("Bulan yang dimasukkan memiliki 30 Hari");
            break;

        }
        case '2':{
            int tahun;
            printf("Masukkan tahun = ");
            scanf("%i", &tahun);

            if(tahun % 4 == 0){
                printf("Bulan yang dimasukkan merupakan bulan ferbruari memiliki 28 hari");
            }
            else{
                printf("Bulan yang dimasukkan merupakan bulan februari memiliki 29 hari");
            }
            break;
        }

        default : {
            printf("Bulan yang dimasukkan tidak ditemukan !!!");
        }

    }*/

    /*printf("List Menu : \n");
    printf("1. Es Teh Anget\n");
    printf("2. Nasi Goreng\n");
    printf("3. Omelet\n");
    printf("4. Ayam Geprek\n");
    printf("5. Mie Geprek\n");

    int n;
    printf("Masukkan No Menu = ");
    scanf("%i", &n);

    if(n == 1){
        printf("List Ukuran = \n");
        printf("1. Jumbo\n");
        printf("2. Original\n");
        printf("3. Mini\n");

        int a;
        printf("Pilih ukuran = ");
        scanf("%i", &a);

        if(a == 1){
            printf("Anda Memesan Es Teh Anget + Jumbo");
        }
            else if(a == 2){
            printf("Anda Memesan Es Teh Anget + Original");
            }
            else if(a == 3){
            printf("Anda Memesan Es Teh Anget + Mini");
            }
            else{
                printf("Ukuran yang dimasukkan tidak ada dalam pilihan !!");
            }
    }
    else if (n == 2){
        printf("List Ukuran = \n");
        printf("1. Jumbo\n");
        printf("2. Original\n");
        printf("3. Mini\n");

        int a;
        printf("Pilih ukuran = ");
        scanf("%i", &a);

        if(a == 1){
            printf("Anda Memesan Nasi Goreng + Jumbo");
        }
            else if(a == 2){
            printf("Anda Memesan Nasi Goreng + Original");
            }
            else if(a == 3){
            printf("Anda Memesan Nasi Goreng + Mini");
            }
            else{
                printf("Ukuran yang dimasukkan tidak ada dalam pilihan !!");
            }


    }
    else if(n == 3){
        printf("List Ukuran = \n");
        printf("1. Jumbo\n");
        printf("2. Original\n");
        printf("3. Mini\n");

        int a;
        printf("Pilih ukuran = ");
        scanf("%i", &a);

        if(a == 1){
            printf("Anda Memesan Omelet + Jumbo");
        }
            else if(a == 2){
            printf("Anda Memesan Omelet + Original");
            }
            else if(a == 3){
            printf("Anda Memesan Omelet + Mini");
            }
            else{
                printf("Ukuran yang dimasukkan tidak ada dalam pilihan !!");
            }

    }
    else if(n == 4){
        printf("List Ukuran = \n");
        printf("1. Jumbo\n");
        printf("2. Original\n");
        printf("3. Mini\n");

        int a;
        printf("Pilih ukuran = ");
        scanf("%i", &a);

        if(a == 1){
            printf("Anda Memesan Ayam Geprek + Jumbo");
        }
            else if(a == 2){
            printf("Anda Memesan Ayam Geprek + Original");
            }
            else if(a == 3){
            printf("Anda Memesan Ayam Geprek + Mini");
            }
            else{
                printf("Ukuran yang dimasukkan tidak ada dalam pilihan !!");
            }

    }
    else if(n == 5){
        printf("List Ukuran = \n");
        printf("1. Jumbo\n");
        printf("2. Original\n");
        printf("3. Mini\n");

        int a;
        printf("Pilih ukuran = ");
        scanf("%i", &a);

        if(a == 1){
            printf("Anda Memesan Mie Geprek + Jumbo");
        }
            else if(a == 2){
            printf("Anda Memesan Mie Geprek + Original");
            }
            else if(a == 3){
            printf("Anda Memesan Mie Geprek + Mini");
            }
            else{
                printf("Ukuran yang dimasukkan tidak ada dalam pilihan !!");
            }
    }
    else{
        printf("Menu yang dipilih tidak ditemukan");
    }*/




        return 0;
    }




