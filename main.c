//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
//                                                                                  ||
//                            PROJEK PELATIHAN BAHASA C                             ||
//                          PENILAIAN UJIAN AKHIR SEMESTER                          ||
//                                                                                  ||
//    NAMA     : APRILLIYANTI                                                       ||
//    ANGKATAN : 23                                                                 ||
//    PRODI    : D3 MANAJEMEN INFORMATIKA                                           ||
//    KELOMPOK : ZULQA'DA                                                           ||
//                                                                                  ||
//     WINDOWS SIZE :        buffer size:       RGB(background): (97,214,214)       ||
//        WEIGHT : 160          widhth: 160     RGB(text)      : (242, 242, 242)    ||   
//        HIGHT  : 36           Height: 36                                          ||
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//


// ================================================ L I B R A R Y =================================================== //
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include "validasi.c"
// #include "crud.c"
#define sys system("cls")
#define handle GetStdHandle(STD_OUTPUT_HANDLE)

#define BLACK 0
#define DARK_BLUE 1
#define DARK_GREEN 2
#define DARK_CYAN 3
#define DARK_RED 4
#define DARK_PURPLE 5
#define DARK_YELLOW 6
#define DARK_WHITE 7
#define GRAY 8
#define BLUE 9
#define GREEN 10
#define CYAN 11
#define RED 12
#define PURPLE 13
#define YELLOW 14
#define WHITE 15
// ====================================================== P R O T O T Y P E ======================================= //
void data_dokter();
void main_menu();
void pasien();
void informasi();
void menu_akun();
// void kotakbesar(int x, int y, int panjang, int lebar, int warnateks, int warnabg);
// void kotakkecil(int x, int y, int p, int l, int warnateks, int warnabg);
// void bingkai3(int x, int y, int p, int l, int warnateks, int warnabg)
// ====================================================== K O O R D I N A T ======================================= //
    char    q=222;  //blok setengah ▐ q
    char    r=223;  // kotak atas   ▀ r
    char    s=219;  //blok          █ s
    char    t=187;  //kanan atas    ╗ t
    char    u=188;  //kanan bawah   ╝ u
    char    v=186;  //lurus atas    ║ v
    char    x=205;  //lurus garis   ═ x
    char    w=201;  //kiri atas     ╔ w
    char    y=200;  //kiri bawah    ╚ y
    char    z=220;  //kotak bawah  
    char    g=177;



void kotakbesar(int x, int y, int panjang, int lebar, int warnateks, int warnabg)
{

    for(int a = 0; a < panjang; a++)
    {
        for(int b = 0; b < lebar; b++)
        {
            if(a == 0 || a == panjang - 1 ||  a == panjang - 2|| a == 1  || b == 0 || b == lebar - 1 )
            {
                koordinat(x+a,y+b); warnaTB(warnateks,warnateks);
                printf("%c", 219);
                // Sleep(5);
            }
            else
            {
                koordinat(x+a,y+b); warnaTB(warnabg,warnabg);
                printf(" ");

            }

        }
    }
}

void kotakkecil(int x, int y, int p, int l, int warnateks, int warnabg)
{
    for(int a = 0; a < p; a++)
    {
        for(int b = 0 ;  b < l ; b++)
        {
            if( a == 0 || a == p - 1 || b == 0 || b == l - 1)
            {
                koordinat(x + a , y + b); warnaTB(warnateks, warnateks);
                printf("%c",219);
            }
            else
            {
                koordinat(x + a , y + b); warnaTB(warnabg, warnabg);
                printf(" ");
                
            }
        }
    }
}

void bingkai3(int x, int y, int p, int l, int warnateks, int warnabg)
{
    for(int a =0; a < p; a++)
    {
        for(int b = 0; b < l; b++)
        {
            koordinat(x + a, y + b); warnaTB(warnateks,warnateks);
            if(a==0 || a == p - 1 || b == 0 || b == l - 1 || a == 40)
            {
                printf("%c",219);
            }
            else
            {
                koordinat(x + a, y + b); warnaTB(warnabg,warnabg);
                printf(" ");
            }
        }
    }
}

void kotakpilihan(int x, int y, int p, int l, int warnateks, int warnabg)
{
    char s = 205;
    for(int a = 0; a < p; a++)
    {
        for(int b = 0; b < l; b++)
        {
            if( b == 0 || b == l-1)
            {
                koordinat(x+a,y+b); warnaTB(warnateks,warnateks);
                printf("%c", s);
            }
            else
            {
                koordinat(x+a,y+b); warnaTB(warnabg,warnabg);
                printf(" ");

            }
        }
    }
}

void load(int warnateks, int warnabg)
{
    for(int a = 0; a <= 50; a++)
    {
        koordinat(50 + a,31);warnaTB(warnateks,warnateks);
        printf("%c",219);
        Sleep(50);
        koordinat(68,30);warnaTB(warnateks,warnabg);
        printf("Loading...%d%%", a * 2);
    }
        // Sleep(2000);

}

void abyn()
{
    warnaTB(11,15);
    koordinat(45,5); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",g,s,r,s,g,s,r,z,g,s,g,s,g,s,r,s,g,g,g,s,r,z,g,s,r,r,g,s,r,s,g,r,s,r,g,s,r,s,g,s,g,g,g,g,g,s,r,r,g,s,g,g,g,r,s,r,g,s,r,s,g,r,s,r,g,s,r,r);
    koordinat(45,6); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",g,s,r,s,g,s,r,z,g,g,s,g,g,s,g,s,g,g,g,s,g,s,g,s,r,r,g,s,g,s,g,g,s,g,g,s,r,s,g,s,g,g,g,g,g,s,g,g,g,s,g,g,g,g,s,g,g,s,g,s,g,g,s,g,g,s,g,g);
    koordinat(45,7); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",g,r,g,r,g,r,r,g,g,g,r,g,g,r,g,r,g,g,g,r,r,g,g,r,r,r,g,r,g,r,g,g,r,g,g,r,g,r,g,r,r,r,g,g,g,r,r,r,g,r,r,r,g,r,r,r,g,r,g,r,g,r,r,r,g,r,r,r);

    koordinat(70,13); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",g,s,g,g,g,s,r,s,g,s,r,r,g,r,s,r,g,s,r,s);
    koordinat(70,14); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",g,s,g,g,g,s,g,s,g,s,g,s,g,g,s,g,g,s,g,s);
    koordinat(70,15); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",g,r,r,r,g,r,r,r,g,r,r,r,g,r,r,r,g,r,g,r);
}

void logo_menu()
{
    warnaTB(8,11);
    warnaTB(8,11);koordinat(42,4);printf("                       __                                                   "); 
    warnaTB(8,11);koordinat(42,5);printf("    ___ ___      __   /\\_\\    ___         ___ ___      __    ___   __  __   "); 
    warnaTB(8,11);koordinat(42,6);printf("  /' __` __`\\  /'__`\\ \\/\\ \\ /' _ `\\     /' __` __`\\  /'__`\\/' _ `\\/\\ \\/\\ \\  "); 
    warnaTB(8,11);koordinat(42,7);printf("  /\\ \\/\\ \\/\\ \\/\\  \\L\\.\\_\\ \\ \\/\\ \\/\\ \\    /\\ \\/\\ \\/\\ \\/\\  __//\\ \\/\\ \\ \\ \\_\\ \\ "); 
    warnaTB(8,11);koordinat(42,8);printf("  \\ \\_\\ \\_\\ \\_\\ \\ \\__/.\\_\\ \\_\\ \\_\\ \\_\\   \\ \\_\\ \\_\\ \\_\\ \\____\\ \\\\_\\ \\_\\ \\____/ "); 
    warnaTB(8,11);koordinat(42,9);printf("   \\/_/\\/_/\\/_/\\/__/\\/_/ \\/_/\\/_/\\/_/    \\/_/\\/_/\\/\\_/\\/____/\\/_/\\/\\_/\\/___/  "); 


}
// ========================================= C R U D ====================================================================== //
void registrasi_pasien()
{
    kotakbesar(55,3,55,30,15,11);
    warnaTB(8,15);
    char nama[255], nik[255], no_hp[255], gender[255], usia[255], keluhan[255], dokter[255];
    koordinat(59,6);
    printf("N a m a  l e n g k a p   : ");
    koordinat(59,10);
    printf("N I K                    : ");
    koordinat(59,14);
    printf("U s i a                  : ");
    koordinat(59,18);
    printf("N o m o r  HP            : ");
    koordinat(59,22);
    printf("J e n i s  k e l a m i n : ");
    koordinat(59,26);
    printf("K e l u h a n            : ");
    koordinat(59,30);
    printf("D o k t e r              : ");

    FILE *createpasien;
    createpasien = fopen("pasien.txt","a");

    koordinat(86,6);valid_nama(nama);
    koordinat(86,10);valnik(nik);
    koordinat(86,14);valusia(usia);
    koordinat(86,18);valno_hp(no_hp);
    koordinat(86,22);valjenis_kelamin(gender);
    koordinat(86,26);val_keluhan(keluhan);
    koordinat(86,30);validok(dokter);

    fprintf(createpasien,"%s#%s#%s#%s#%s#%s#%s\n",nama,nik,usia,no_hp,gender,keluhan,dokter);
    fclose(createpasien);

    koordinat(55,2);
    printf("pendaftaran berhasil!");
    char a;
    int tahan = 0;
    koordinat(46,32); printf("=== Tekan Apa Saja Untuk Kembali ===");
    while((a = getch())==27||tahan == 0)
    {
        pasien();
    }

}

void tampilkan_data_pasien()
{
    char nama[100], nik[100], usia[100], no_hp[100], gender[100], keluhan[100],dokter[100];
    char tampung[255];
    int i = 1;  // Untuk nomor
    int y = 6;  // Posisi vertikal awal data

    FILE *readpasien = fopen("pasien.txt", "r");


    koordinat(44, 3); printf("==================================================================================================================\n");
    koordinat(44, 4); printf("| No| Nama Lengkap   |     NIK      |Usia|    No HP     |Jenis Kelamin|       Keluhan       |      Dokter         |\n");
    koordinat(44, 5); printf("==================================================================================================================\n");

    while (fgets(tampung, sizeof(tampung), readpasien))    // Membaca file baris demi baris
    { 
        sscanf(tampung, "%[^#]#%[^#]#%[^#]#%[^#]#%[^#]#%[^#]#%[^\n]\n", nama, nik, usia, no_hp, gender, keluhan, dokter);        // Membaca data dari file

        // Menampilkan data sesuai kolom
        koordinat(44, y);      printf("| %-2d", i);                  
        koordinat(48, y);      printf("| %-15s", nama);             
        koordinat(65, y);      printf("| %-13s", nik);              
        koordinat(80, y);      printf("| %-2s", usia);              
        koordinat(85, y);      printf("| %-13s", no_hp);            
        koordinat(100, y);      printf("| %-12s", gender);           
        koordinat(114, y);     printf("| %-20s", keluhan);          
        koordinat(136,y);      printf("| %-20s", dokter);
        koordinat(158,y);      printf("|\n");              
        koordinat(44, y + 1);  printf("==================================================================================================================\n");

        y += 2; // Pindah ke baris berikutnya
        i++;    // Nomor bertambah
    }

    fclose(readpasien);

    char a;
    int tahan = 0;
    koordinat(45,32);printf("=== Tekan Apa Saja Untuk Kembali ===");
    while((a = getch())==27||tahan == 0)
    {
        pasien();
    }
}

void hapus_data_pasien()
{
    char konfirmasi;

    FILE *deletepasien;

    koordinat(55,18);printf("Apakah Anda yakin ingin menghapus semua data tersebut? (Y/T)");
    koordinat(85,19);scanf(" %c", &konfirmasi);
    if(konfirmasi == 'Y' || konfirmasi == 'y')
    {
        deletepasien = fopen("pasien.txt", "w");
        fclose(deletepasien);
        koordinat(80,20);printf("\n\tData berhasil dihapus.\n\n");

    }
    else if(konfirmasi == 'T' || konfirmasi == 't')
    {
        pasien();
    }
    else
    {
        koordinat(60,20);printf("Inputan Tidak valid!");
    }

    koordinat(5,3);
    char a;
    int tahan = 0;
    while((a = getch())==27||tahan == 0)
    {
        pasien();
    }

}

void pasien()
{
    int pilih;
    sys;
    bingkai3(3,1,155,34,11,15);

    koordinat(10,3); warnaTB(11,15);
    printf("=== M E N U  P A S I E N ===");


    kotakkecil(7,5,33,5,11,15);
    koordinat(9,7); warnaTB(11,15);
    printf("1. Registrasi Pasien");

    kotakkecil(7,11,33,5,11,15);
    koordinat(9,13); warnaTB(11,15);
    printf("2. Tampilkan Data Pasien");

    kotakkecil(7,17,33,5,11,15);
    koordinat(9,19); warnaTB(11,15);
    printf("3. Hapus Data Pasien");

    kotakkecil(7,23,33,5,11,15);
    koordinat(9,25); warnaTB(11,15);
    printf("0. Kembali");
   

    kotakkecil(7,29,33,5,11,15);
    koordinat(9,31); warnaTB(11,15);
    printf("Pilih : "); 
    pilih = pilih_3(18,31);

    if(pilih == 1)
    {
        registrasi_pasien();
    }
    else if(pilih == 2)
    {
        tampilkan_data_pasien();
    }
    else if(pilih == 3)
    {
        hapus_data_pasien();
    }
    else if(pilih == 0)
    {
        char a;
        int tahan = 0;
        while((a = getch())==27||tahan == 0)
        {
            main_menu();
        }
    }
    else
    {
        koordinat(42,30);printf("Inputan Tidak valid");
    }

}

void tambahkan_data_dokter()
{

    char dokter[50], spesialis[50], jadwal[50];
    char jam[50];
    FILE *createdokter = fopen("dokter.txt", "a");

    koordinat(78,9);printf("Nama                : ");
    koordinat(78,10);printf("________________________________________________");
    koordinat(78,11);printf("                                                ");
    koordinat(78,12);printf("Spesialis          : ");
    koordinat(78,13);printf("________________________________________________");
    koordinat(78,14);printf("                                                ");
    koordinat(78,15);printf("Jadwal Praktek     : ");
    koordinat(78,16);printf("________________________________________________");
    koordinat(78,17);printf("                                                ");
    koordinat(78,18);printf("Jam Praktek        : ");
    koordinat(78,19);printf("________________________________________________");
    koordinat(78,20);printf("                                                ");

    koordinat(100,9);validok(dokter);
    koordinat(100,12);valspesialis(spesialis);
    koordinat(100,15);fgets(jadwal , sizeof(jadwal), stdin);
    koordinat(100,18);fgets(jam , sizeof(jam), stdin);
    fprintf(createdokter, "%s#%s#%s#%s\n", dokter,spesialis,jadwal,jam);

    fclose(createdokter);

    koordinat(46,32);printf("Data Berhasil ditambahkan!");
    
    char a;
    int tahan = 0;
    koordinat(128,3);printf("=== Tekan Apa Saja Untuk Kembali");
    while((a = getch())==27||tahan == 0)
    {
        data_dokter();
    }

}

void tampilkan_data_dokter()
{
    char dokter[50], spesialis[50], jadwal[50], jam[50];
    char sementara[255];
    int y = 5; 

    FILE *readdokter = fopen("dokter.txt", "r");

    koordinat(45, 2); printf("==========================================================================================");
    koordinat(45, 3); printf("| %-20s | %-20s | %-15s | %-10s |", "Nama", "Spesialis", "Jadwal", "Jam");
    koordinat(45, 4); printf("==========================================================================================");

    while (fgets(sementara, sizeof(sementara), readdokter))
    {
        if (sscanf(sementara, "%[^#]#%[^#]#%[^#]#%[^\n]", dokter, spesialis, jadwal, jam) == 4)
        {
            koordinat(45, y); printf("| %-20s | %-20s | %-15s | %-10s |", dokter, spesialis, jadwal, jam);
            y++; 
    }
    }
    koordinat(45, y + 1); printf("==========================================================================================");

    fclose(readdokter);

    char a;
    int tahan = 0;
    koordinat(128,3);printf("=== Tekan Apa Saja Untuk Kembali");
    while((a = getch())==27||tahan == 0)
    {
        data_dokter();
    }

}


void data_dokter()
{
    int pilih;
    sys;

    bingkai3(3,1,155,34,11,15);

    kotakkecil(7,3,33,5,11,15);
    koordinat(9,5); warnaTB(11,15);
    printf("1. Tambahkan Data Dokter");

    kotakkecil(7,9,33,5,11,15);
    koordinat(9,11); warnaTB(11,15);
    printf("2. Tampilkan Data Dokter");

    kotakkecil(7,16,33,5,11,15);
    koordinat(9,18); warnaTB(11,15);
    printf("0. Kembali");

    kotakkecil(7,28,33,5,11,15);
    koordinat(9,30); warnaTB(11,15);
    printf("Pilih : "); 
    pilih = pilih_2(18,30);

    if(pilih == 1)
    {
        tambahkan_data_dokter();
    }
    else if(pilih == 2)
    {
        tampilkan_data_dokter();
    }
    else if(pilih == 0)
    {

        char a;
        int tahan = 0;
        koordinat(45,32); printf("==== Tekan Apa Saja Untuk Kembali ===");
        while((a = getch())==27||tahan == 0)
        {
            main_menu();
        }
    }

}

void tampil_akun()
{
    char user[50], pass[50];
    
    FILE *akun;

    // akun = fopen("profil.txt", "a");

    // koordinat(70,16);printf("Masukkan Username : ");
    // koordinat(91,16);validuse(user);
    // koordinat(70,17);printf("\nMasukkan Password : ");
    // koordinat(91,17);validpass(pass);

    // fprintf(akun,"%s#%s\n",user,pass);
    // fclose(akun);

    // koordinat(70,16);printf("Username : ");
    // koordinat(70,17);printf("_____________________________________________");
    // koordinat(70,18);printf("                                             ");
    // koordinat(70,19);printf("Password : ");
    // koordinat(70,20);printf("_____________________________________________");
    // koordinat(70,21);printf("                                             ");

    akun = fopen("account.txt", "r");
    koordinat(75,4);printf(" __________________________________________________");
    koordinat(75,5);printf("|                                                  |");
    koordinat(75,6);printf("| Username Anda saat ini :                         |");
    koordinat(75,7);printf("|__________________________________________________|");
    koordinat(75,8);printf("|                                                  |");
    koordinat(75,9);printf("| Password Anda saat ini :                         |");
    koordinat(75,10);printf("|__________________________________________________|");

    while (fscanf(akun, "%[^#]#%[^\n]\n", user,pass) != EOF)
    {
        koordinat(101,6);printf("%s\n", user);
        koordinat(101,9);printf("%s", pass);
    }

    char a;
    int tahan = 0;
    koordinat(45,30);printf("=== Tekan Apa Saja Untuk Kembali");
    while((a = getch())==27||tahan == 0)
    {
        menu_akun();
    }

}

void update_akun()
{
    char user[50], pass[50];
    FILE *akun;
    akun = fopen("account.txt", "w");

    koordinat(80,4);printf("Username : ");
    koordinat(86,4); validuse(user);
    koordinat(80,5);printf("Password : ",pass);
    koordinat(86,5);validpass(pass);

    fprintf(akun, "%s#%s\n",user,pass);
    
    fclose(akun);
    koordinat(82,17);printf("Username dan Password Diperbarui!");

    char a;
    int tahan = 0;
    koordinat(45,30);printf("=== Tekan Apa Saja Untuk Kembali");
    while((a = getch())==27||tahan == 0)
    {
        menu_akun();
    }


}


void menu_akun()
{
    sys;
    int pilih;

    bingkai3(3,1,155,34,11,15);
    kotakbesar(60,3,80,10,11,15);

    koordinat(10,4);
    warnaTB(11,15);
    printf("==== A C C O U N T ====");

    kotakkecil(6,7,35,5,11,15);
    koordinat(10,9);
    warnaTB(11,15);
    printf("1. Tampilkan Akun");

    kotakkecil(6,14,35,5,11,15);
    koordinat(10,16);
    warnaTB(11,15);
    printf("2. Update Akun");

    kotakkecil(6,21,35,5,11,15);
    koordinat(10,23);
    warnaTB(11,15);
    printf("0. Kembali");

    kotakkecil(6,28,35,5,11,15);
    koordinat(10,30);
    warnaTB(11,15);
    printf("Pilih : ");
    pilih = pilih_2(19,30);

    if(pilih == 1)
    {
        tampil_akun();
    }
    else if(pilih == 2)
    {
        update_akun();
    }
    else if(pilih == 0)
    {
        char a;
        int tahan = 0;
        while((a = getch())==27||tahan == 0)
        {
            main_menu();
        }
    }
}
void informasi()
{
    char input;
    sys;
    warnaTB(11,15);
    kotakbesar(5,1,150,34,11,15);
    kotakbesar(30,6,100,25,11,15);
    koordinat(30,4);warnaTB(11,15);printf("====================================== I N F O R M A S I ===========================================");
    koordinat(40,9);warnaTB(11,15);printf("                           Abyn Dental Clinik hadir                        ");
    koordinat(40,12);warnaTB(11,15);printf("        memberikan perawatan secara holistik khususnya untuk perawatan gigi.");
    koordinat(40,15);warnaTB(11,15);printf("            Berawal dari cita-cita untuk membangun sebuah klinik gigi");
    koordinat(40,18);warnaTB(11,15);printf("         yang mampu memberikan pelayanan holistik bagi warga kota Bandung,");
    koordinat(40,21);warnaTB(11,15);printf("       kini Oratio Group memiliki 2 klinik utama yang berlokasi di Bandung");
    koordinat(40,24);warnaTB(11,15);printf("        yakni Klinik Utama Oratio di jalan Trunojoyo no 14, Citarum dan");
    koordinat(40,27);warnaTB(11,15);printf("       dan Klinik Utama Oratio Fide di Dr. Cipto no 5, Cincendo, Bandung.");

}
void main_menu()
{
    sys;
    int pilih;
    kotakbesar(3,1,155,34,15,11);
    kotakbesar(40,3,82,10,15,11);
    logo_menu();
    kotakpilihan(30,15,25,5,15,11);
    koordinat(35,17);
    warnaTB(8,11);
    printf("1. P A S I E N");

    kotakpilihan(67,15,25,5,15,11);
    koordinat(72,17);
    warnaTB(8,11);
    printf("2. D O K T E R");

    kotakpilihan(105,15,25,5,15,11);
    koordinat(110,17);
    warnaTB(8,11);
    printf("3. A K U N");

    kotakpilihan(50,22,22,5,15,11);
    koordinat(51,24);
    warnaTB(8,11);
    printf("4. I N F O R M A S I");

    kotakpilihan(87,22,22,5,15,11);
    koordinat(92,24);
    warnaTB(8,11);
    printf("0. E X I T");

    kotakkecil(67,29,25,5,15,11);
    koordinat(70,31);
    warnaTB(8,11);
    printf("P I L I H :  ");

    warnaTB(8,11);pilih = pilih_menu(83,31);
    if(pilih == 1)
    {
        pasien();
    }
    else if (pilih == 2)
    {
        data_dokter();
    }
    else if(pilih == 3)
    {
        menu_akun();
    }
    else if(pilih == 4)
    {
        informasi();
    }
    else if(pilih == 0)
    {
        exit(0);
    }
}

int batas = 0;
void login()
{
    char user[8] = {}, pass[7] = {};
    char uname[100][100] = {}, pword [100][100] = {};
    int indeks = 0, berhasil_masuk = 0; 

    system("cls");
    kotakbesar(10,1,140,34,11,15);
    abyn();
    // logo_login();

    kotakkecil(35,21,90,9,11,15);

    kotakpilihan(39,24,33,3,11,11);
    koordinat(41,25);warnaTB(15,11);
    printf("USERNAME : ");

    kotakpilihan(88,24,33,3,11,11);
    koordinat(92,25);warnaTB(15,11);
    printf("PASSWORD : ");

    koordinat(53,25);validuse(user);
    koordinat(105,25);validpass(pass);

    FILE *akun;
    akun = fopen("account.txt", "r");
    while(fscanf(akun, "%[^#]#%[^\n]\n", uname[indeks],pword[indeks]) != EOF)
    {
        if(strcmp(uname[indeks], user) == 0 && strcmp(pword[indeks], pass) == 0)
        {
            koordinat(73,19);
            printf("Login berhasil!");
            load(11,15);
            // Sleep(500);
            berhasil_masuk++;
        }
        indeks++;
    }
    fclose(akun);

    if(berhasil_masuk != 0)
    {
        main_menu();
    }
    else
    {
        if(batas < 3)
        {
            for(int i = 0; i <= 8; i++)
            {
                if(i % 2 == 0)
                {
                    koordinat(65,19); warnaTB(11,15);
                    printf("Username atau Password SALAH!");
                    Sleep(500);
                }
                else
                {
                    koordinat(73,19);warnaTB(11,15);
                    printf("                              ");
                }
            }
            batas++;
            login();
        }
        else if(batas == 3)
        {
            for(int i = 0; i <= 8; i++)
            {
                if(i % 2 == 0)
                {
                    koordinat(63,19); warnaTB(11,15);
                    printf("Kesempatan Anda Sudah Habis! Program ini akan Keluar");
                    Sleep(500);
                    exit(0);
                }
                else
                {
                    koordinat(73,19);warnaTB(11,15);
                    printf("                              ");
                    exit(0);
                }
            }
        }
    }
}

void awal()
{
    system("cls");
    kotakbesar(5,1,150,34,11,8);
    warnaTB(11,8);
    koordinat(42,15); printf(".------------------------------------------------------------------------.");
    koordinat(42,16); printf("|%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|",g,s,g,g,g,s,r,r,g,r,s,r,g,r,g,s,r,r,g,g,g,s,r,r,g,s,r,r,g,s,r,r,g,g,g,s,z,s,g,s,g,s,g,g,g,s,r,s,g,s,r,z,g,s,r,s,g,r,r,s,g,s,r,r,g,s,r,r,g,r,s,r);
    koordinat(42,17); printf("|%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|",g,s,g,g,g,s,r,r,g,g,s,g,g,g,g,r,r,s,g,g,g,r,r,s,g,s,r,r,g,s,r,r,g,g,g,s,g,s,g,g,s,g,g,g,g,s,r,r,g,s,r,z,g,s,g,s,g,g,g,s,g,s,r,r,g,s,g,g,g,g,s,g);
    koordinat(42,18); printf("|%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|",g,r,r,r,g,r,r,r,g,g,r,g,g,g,g,r,r,r,g,g,g,r,r,r,g,r,r,r,g,r,r,r,g,g,g,r,g,r,g,g,r,g,g,g,g,r,g,g,g,r,g,r,g,r,r,r,g,r,r,r,g,r,r,r,g,r,r,r,g,g,r,g);
    koordinat(42,19); printf("'------------------------------------------------------------------------'");
    Sleep(2000);
    login();
}




void main()
{
    awal();  
}