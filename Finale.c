//Muhammad Miftah Faridh & Muhammad Fadlan Harits
//Project Akhir PTKOM 2019

#include <math.h>
#include <time.h>
#include <stdio.h>
#include <windows.h>

int a,b,c,d,e,pilih,n,data,i,no,x,harga,last1,pilihakun,kembalian,pilih;
time_t waktu;
int price[100],tanggal[100],bulan[100],banyaktiket[100];
int cit[100], subprice[100],money[100][100];
char akun[100][100],comp;
void jadwaldanpesan(),menu(),buatakun(),maskapai(int pswt[],int d), fakecity(int fcit[],int b),jam(int citi[],int c),bayar(),reset(),againmenu(),rincian(),tiket(),refund(),help();
int hargaterbang(int city[],int a);


int main(){
    menu();
    return 0;
}
void logo(){
	printf("\n\n");
	printf ("     --------------------------------------------------------------------------------\n");
	printf ("     --------------------------------------------------------------------------------\n\n");
    printf("\t\t                            hMMo  -MMMMMMMMMMMMMMMM      \n");
    printf("\t\t                            hMMo  -MMN`                  \n");
    printf("\t\t                            hMMo  -MMN`                  \n");
    printf("\t\t                            hMMo  -MMN`                  \n");
    printf("\t\t                   ooooooooomMMo  -MMMddddddddd          \n");
    printf("\t\t                   NNNNNNNNNMMMo  -MMMyyyyyyyyy          \n");
    printf("\t\t                            hMMo  -MMN`                  \n");
    printf("\t\t                            hMMo  -MMN`                  \n");
    printf("\t\t                            hMMo  -MMN`                  \n");
    printf("\t\t                            hMMo  -MMN`                  \n");
    printf("\t\t               NNNNNNNNNNNNNMMMo  -MMN`                  \n");
    printf("\t\t               oooooooooooooooo-  .oo+                   \n\n\n");
        printf ("     ----------------------------------__FARITS TRAVEL__-----------------------------\n");
    printf ("     --------------------------------------------------------------------------------\n");
}
void menu(){
    logo();

    printf ("\n\n\t         Selamat Datang Di Tempat Pemesanan Tiket Kamii!!\n");
    printf ("\n\n      -------------------------------------------------------------------------------\n");
    printf ("      Pelanggan terhormat, Silahkan pilih menu dibawah ini\n\n");
    printf ("\t [1]. Lihat dan Daftar Akun\n");
    printf ("\t [2]. Lihat Jadwal Penerbangan dan Pemesanan Tiket\n");
    printf ("\t [3]. Rincian Pemesanan\n");
    printf ("\t [4]. Lihat Tiket dan Refund\n");
    printf ("\t [5]. Menu Bantuan!!\n");
    printf ("\t [6]. Exit \n");
    
    printf ("      --------------------------------------------------------------------------------\n");
    printf("\t\tMasukkan Nomor Perintah  : ");
    scanf ("%d", &pilih);
    system("cls");
    
    switch (pilih){
        case 1 : buatakun();break;
        case 2 : jadwaldanpesan();break;
        case 3 : rincian();break;
        case 4 : lihattiket(); break;
        case 5 : help(); break;
        case 6 : out(); break;
            
        default : return;
    }
}

void buatakun(){
	logo();
    printf("\t\t\tSelamat datang di menu Lihat dan Buat Akun\n");
    printf("\t\t\t    Berikut adalah Menu yang ada : \n");
    printf("\t\t[1].    Daftar Akun\n");
    printf("\t\t[2].    Lihat Akun\n");
    printf("\t\t[3].    Hapus Semua Data\n");
    printf("\t\t[4].    Back\n");
    printf("\t\t   Masukkan nomor perintah : ");
    scanf("%d",&x);
    system("cls");
    switch (x){
        case 1 :{
        	logo();
            printf("Please enter your username:");
            scanf("%s", &akun[n][100]);
            printf("Akun %s berhasil terdaftar\n\n",&akun[n][100]);
            money[n][100] = 0;
            n++;
            system("PAUSE"); system("cls"); buatakun();
            break;
        }
        case 2 :{
        	logo();
            for(i=0;i<n;i++) {
                no = i+1;
                printf("%d. %s\n\n\n", no, &akun[i][100]);
            }
            printf("\nJika belum ada akun yang tertampilkan, Silahkan mendaftar\n");
            printf("Tekan Enter untuk kembali\n\n");system("PAUSE"); system("cls"); buatakun();
            break;
        }
        case 3:{
            reset();
            menu();
            break;
        }
        case 4:{ main();
            break;
        }
        default : main();
    }
}


void jadwaldanpesan(){
	logo();
    printf("\t\t\tSelamat datang di menu Jadwal dan Pemesanan tiket\n");
    printf("\n\n\n\t\t\tMasukkan Nomor Akun  : ");scanf("%d",&pilihakun);
    printf("\n\t\tPemesanan akan disimpan di Akun %s\n",&akun[pilihakun-1][100] );
    pilihakun--;
    system ("PAUSE");
    system ("cls");
    logo();
    printf("\t\t\t    Berikut adalah jadwal penerbangan kami : \n");
    printf("\t\t1.    Jakarta - Denpasar\n");
    printf("\t\t2.    Jakarta - Palembang\n");
    printf("\t\t3.    Jakarta - Medan\n");
    printf("\t\t4.    Jakarta - Semarang\n");
    printf("\t\t5.    Jakarta - Bandung\n");
    printf("\t\t6.    Jakarta - Surabaya\n");
    printf("\t\t7.    Jakarta - Makassar\n\n");
    printf("\t\t8.    Back\n");
    printf("\n\n\nMasukkan Nomor Perintah  : ");
    scanf("%d",&cit[pilihakun]);
    system("cls");
    logo();
    if(cit[pilihakun]==1) printf("Anda memilih Jakarta-Denpasar sebagai tujuan Anda\n");
    if(cit[pilihakun]==2) printf("Anda memilih Jakarta-Palembang sebagai tujuan Anda\n");
    if(cit[pilihakun]==3) printf("Anda memilih Jakarta-Medan sebagai tujuan Anda\n");
    if(cit[pilihakun]==4) printf("Anda memilih Jakarta-Semarang sebagai tujuan Anda\n");
    if(cit[pilihakun]==5) printf("Anda memilih Jakarta-Bandung sebagai tujuan Anda\n");
    if(cit[pilihakun]==6) printf("Anda memilih Jakarta-Surabaya sebagai tujuan Anda\n");
    if(cit[pilihakun]==7) printf("Anda memilih Jakarta-Makassar sebagai tujuan Anda\n");
    if(cit[pilihakun]==8) return menu();
    printf("\n\nMasukkan Tanggal Keberangkatan  [Cth (tanggal bulan) (25 03)] : ");scanf("%d %d",&tanggal[pilihakun],&bulan[pilihakun]);
    system("cls");
    logo();
    printf("\t\t\tIni adalah Maskapai Dengan Penerbangan Yang Tersedia\n");
    printf("\t\t\t    Berikut adalah jadwal penerbangan kami : \n");
    harga=hargaterbang(cit,pilihakun);
    printf("\t\t1.    LIGON AIR ======== 03.00 WIB__________RP %d\n", harga);
    printf("\t\t2.    GARAGA AIR ======= 04.45 WIB__________RP %d\n", harga+100000);
    printf("\t\t3.    MAJAPAHIT AIR ==== 07.30 WIB__________RP %d\n", harga+225000);
    printf("\t\t4.    HAWA AIR ========= 11.30 WIB__________RP %d\n", harga+125000);
    printf("\t\t5.    LIGON AIR ======== 14.45 WIB__________RP %d\n", harga);
    printf("\t\t6.    GARAGA AIR ======= 17.00 WIB__________RP %d\n", harga+100000);
    printf("\t\t7.    HAWA AIR ========= 21.00 WIB__________RP %d\n\n", harga+125000);
    printf("\t\t8.    Back\n");
    printf("\n\n\nMasukkan Nomor Perintah  : ");
    scanf("%d",&subprice[pilihakun]);
    if(subprice[pilihakun]==1) price[pilihakun]=harga;
    if(subprice[pilihakun]==2) price[pilihakun]=harga+100000;
    if(subprice[pilihakun]==3) price[pilihakun]=harga+225000;
    if(subprice[pilihakun]==4) price[pilihakun]=harga+125000;
    if(subprice[pilihakun]==5) price[pilihakun]=harga;
    if(subprice[pilihakun]==6) price[pilihakun]=harga+100000;
    if(subprice[pilihakun]==7) price[pilihakun]=harga+125000;
    system("cls");
    logo();
    printf("\t\t\tAnda Memesan Tiket Dengan Detail Sebagai Berikut :\n\n\n");
    printf("\t\tPenerbangan Dengan Tujuan : Jakarta - "); fakecity(cit,pilihakun);
    printf("\n\t\tMenggunakan Maskapai : ");maskapai(subprice,pilihakun);
    printf("\n\t\tJam Penerbangan : "); jam(subprice,pilihakun);
    printf("\n\t\tTanggal Penerbangan : %d\n", tanggal[pilihakun]);
    printf("\t\tBulan Penerbangan : %d\n\n", bulan[pilihakun]);
    printf("\t\tMasukkan Jumlah Tiket : "); scanf("%d",&banyaktiket[pilihakun]);
    price[data]=price[pilihakun]*banyaktiket[pilihakun];
    printf("\t\tHarga Tiket : %d\n\n", price[pilihakun]);
    printf("\t\tApakah Pemesanan sudah benar?\n");
    printf("\t\tTekan 1 maka pemesanan akan dimasukkan kelist pembayaran\n");
    printf("\t\tTekan 2 maka pemesanan akan dimasukkan kelist pembayaran dan lanjut kepemesanan selanjutnya\n");
    printf("\t\tTekan 3 maka pemesananan akan dibatalkan\n");
    printf("\n\n\n\t\tMasukkan Nomor Perintah  : ");scanf("%d",&last1);
    switch (last1){
        case 1 :{system("cls");return rincian(); break;} 
        case 2 :{system("cls"); return jadwaldanpesan(); break;} 
        case 3 :{system("cls"); return jadwaldanpesan(); break;}
        default : {system("cls"); menu(); break;}
    }
}
void jam(int citi[],int c){
    if(citi[c]==1) printf("03.00 WIB");
    if(citi[c]==2) printf("04.45 WIB");
    if(citi[c]==3) printf("07.30 WIB");
    if(citi[c]==4) printf("11.30 WIB");
    if(citi[c]==5) printf("14.45 WIB");
    if(citi[c]==6) printf("17.00 WIB");
    if(citi[c]==7) printf("21.00 WIB");
}

void fakecity(int fcit[],int b){
    if(fcit[b]==1) printf("Denpasar");
    if(fcit[b]==2) printf("Palembang");
    if(fcit[b]==3) printf("Medan");
    if(fcit[b]==4) printf("Semarang");
    if(fcit[b]==5) printf("Bandung");
    if(fcit[b]==6) printf("Surabaya");
    if(fcit[b]==7) printf("Makassar");
}

void maskapai(int pswt[],int d){
    if(pswt[d]==1) printf("LIGON AIR");
    if(pswt[d]==2) printf("GARAGA AIR");
    if(pswt[d]==3) printf("MAJAPAHIT AIR");
    if(pswt[d]==4) printf("HAWA AIR");
    if(pswt[d]==5) printf("LIGON AIR");
    if(pswt[d]==6) printf("GARAGA AIR");
    if(pswt[d]==7) printf("HAWA AIR");
}

int hargaterbang(int city[],int a){
    if(city[a]==1) return 800000;
    if(city[a]==2) return 1200000;
    if(city[a]==3) return 1400000;
    if(city[a]==4) return 600000;
    if(city[a]==5) return 500000;
    if(city[a]==6) return 1000000;
    if(city[a]==7) return 1500000;
}
void rincian(){
	logo();
    printf("\t\t\tSelamat datang di menu Rincian Pemesanan\n\n\n");
    printf("\t\t Akun Pertama mewakili pesanan pertama dan begitu seterusnya \n\n\n");
    if (n==0){
        printf("\n\n\n\t\t\tBelum Ada Akun Terdaftar\n\n\n\n");
        system("PAUSE"); system("cls");
        return menu();
    }
    else{
        for(i=0;i<n;i++) {
            no = i+1;
            printf("\t\t%d. %s\n\n", no, &akun[i][100]);
        }
        printf("\t\t\t    Pilih Lah Akun Anda : "); scanf("%d",&pilihakun);
        pilihakun--;
        if (pilihakun==1) printf("\n\t\tAkun Pertama Dipilih\n");
        if (pilihakun==2) printf("\n\t\tAkun Kedua Dipilih\n");
        if (pilihakun==3) printf("\n\t\tAkun Ketiga Dipilih\n");
        if (pilihakun==4) printf("\n\t\tAkun Keempat Dipilih\n");
        if (pilihakun==5) printf("\n\t\tAkun Kelima Dipilih\n");
        if (pilihakun==6) printf("\n\t\tAkun Keenam Dipilih\n");
        
        
        printf("\t\t\tAnda Memesan Tiket Dengan Detail Sebagai Berikut :\n\n\n");
        printf("\t\tPenerbangan Dengan Tujuan : Jakarta - "); fakecity(cit,pilihakun);
        printf("\n\t\tMenggunakan Maskapai : ");maskapai(subprice,pilihakun);
        printf("\n\t\tJam Penerbangan : "); jam(subprice,pilihakun);
        printf("\n\t\tTanggal Penerbangan : %d\n", tanggal[pilihakun]);
        printf("\t\tBulan Penerbangan : %d\n\n", bulan[pilihakun]);
        printf("\t\tJumlah Tiket : %d", banyaktiket[pilihakun]);
        printf("\t\tHarga Tiket : %d\n\n", price[pilihakun]);
        
        printf("\t\tApakah Anda Ingin Melanjutkan Pembayaran (y/n)");scanf("%s", &comp);
        if(comp=='Y'||comp=='y'){
            system("cls");return bayar();
        }
        else{
            system("cls"); return menu();
        }
    }
}
void bayar(){
	logo();
    
    if (price[pilihakun]==0){
        printf ("\t--- Maaf Anda Sudah Tidak Memiliki Tagihan Lagi ---\n");
        Sleep(1000);
        printf ("\t\t-----Silahkan Pesan Lagi-----\n");
        Sleep (1000);
        system ("PAUSE");
        system ("cls");
        menu();
    }
    printf("\n\t\tHarga Tiket : %d\n\n", price[pilihakun]);
    printf("Masukkan Uang Anda : ");
    scanf("%d", &money[pilihakun][100]);
    if (money[pilihakun][100]>=price[pilihakun])
    {
        kembalian = money[pilihakun][100] - price[pilihakun];
        printf("\t\tKembalian anda sebesar :Rp. %d\n\n", kembalian);
        printf("\t\tRecord:\n");
        time(&waktu);
        printf("\t\tWaktu/Hari : %s", ctime(&waktu));
        printf("\t\tApakah Anda Ingin Melanjutkan Pemesanan (y/n)");scanf("%s", &comp);
        if(comp=='Y'||comp=='y'){
            system("cls");return jadwaldanpesan();
        }
        else{
            system("cls"); return menu();
        }
    }
    else
    {
        printf ("\t--- Maaf uang yang anda input kurang ---\n");
        Sleep(1000);
        printf ("\t\t-----Silahkan Coba Lagi-----\n");
        Sleep (1000);
        system ("PAUSE");
        system ("cls");
        bayar();
    }
}
void againmenu(){
    char pilih;
    scanf("%s", &pilih);
    if( pilih=='y' || pilih=='Y' )
    {
        system ("cls");
        jadwaldanpesan();
    }
    else if ( pilih == 'n' || pilih == 'N')
    {
        system ("cls");
        return menu();
    }
}

void reset(){
	logo();
    for (i=0;i<100;i++){
        price[i]=0;
        tanggal[i]=0;
        bulan[i]=0;
        banyaktiket[i]=0;
        cit[i]=0;
        subprice[i]=0;
        n=0;
        data=0;
        akun[i][100]=0;
        money[i][100]=0;
    }
    printf ("\t--- Semua Data Telah Tereset ---\n");
    Sleep(1000);
    printf ("\t\t-----Silahkan Mmulai Lagi-----\n");
    Sleep (1000);
    system ("PAUSE");
    system ("cls");
}

void lihattiket(){
	logo();
    printf("\t\t\tSelamat datang di menu Lihat Tiket\n\n\n");
    printf("\t\t Akun Pertama mewakili pesanan pertama dan begitu seterusnya \n\n\n");
    if (n==0){
        printf("\n\n\n\t\t\tBelum Ada Akun Terdaftar\n\n\n\n");
        system("PAUSE"); system("cls");
        return menu();
    }
    else{
        for(i=0;i<n;i++) {
            no = i+1;
            printf("\t\t%d. %s\n\n", no, &akun[i][100]);
        }
        printf("\t\t\t    Pilih Lah Akun Anda : ");
        scanf("%d",&pilihakun);
         pilihakun--;
        if (pilihakun==1) printf("\n\t\tAkun Pertama Dipilih\n");
        if (pilihakun==2) printf("\n\t\tAkun Kedua Dipilih\n");
        if (pilihakun==3) printf("\n\t\tAkun Ketiga Dipilih\n");
        if (pilihakun==4) printf("\n\t\tAkun Keempat Dipilih\n");
        if (pilihakun==5) printf("\n\t\tAkun Kelima Dipilih\n");
        if (pilihakun==6) printf("\n\t\tAkun Keenam Dipilih\n");
       
        
        if (price[pilihakun]>=0){
            printf("\t\t\tAnda Memesan Tiket Dengan Detail Sebagai Berikut :\n\n\n");
            printf("\t\tPenerbangan Dengan Tujuan : Jakarta - "); fakecity(cit,pilihakun);
            printf("\t\t\nMenggunakan Maskapai : ");maskapai(subprice,pilihakun);
            printf("\t\t\nJam Penerbangan : "); jam(subprice,pilihakun);
            printf("\t\t\nTanggal Penerbangan : %d\n", tanggal[pilihakun]);
            printf("\t\tBulan Penerbangan : %d\n\n", bulan[pilihakun]);
            printf("\t\tJumlah Tiket : %d", banyaktiket[pilihakun]);
            printf("\t\tStatus Tiket : Tersedia\n\n");
            
            printf("\t\tApakah Anda Ingin Refund (y/n)");scanf("%s", &comp);
            if(comp=='Y'||comp=='y'){
                system("cls");return refund(pilihakun);
            }
            else{
                system("cls"); return menu();
            }
        }
        else{
            printf ("\t--- Maaf Selesaikan Pemesanan Tiket Anda Di menu Sebelumnya ---\n");
            Sleep(1000);
            printf ("\t\t-----Silahkan Coba Lagi-----\n");
            Sleep (1000);
            system ("PAUSE");
            system ("cls");
            lihattiket();
        }
    }
}

void refund(int h){
	logo();
    printf ("\t--- Selamat Datang di Menu Refund  ---\n\n");
    Sleep(1000);
    printf ("\t\t-----Kami Akan Mengembalikan Uang Anda sebesar 50%-----\n");
    Sleep (1000);
    system ("PAUSE");
    printf("\t\tApakah Anda Ingin Refund (y/n)");scanf("%s", &comp);
    if(comp=='Y'||comp=='y'){
        money[h][100] /= 0.5;
        printf("\n\nUang anda di akun %s Tersisa %d",&akun[h][100], &money[h][100]);
        price[h]=0;
        tanggal[h]=0;
        bulan[h]=0;
        banyaktiket[h]=0;
        cit[h]=0;
        subprice[h]=0;
    }
    else{
        system("cls"); return menu();
    }
}

void out()
{
    return;
}
void help(){
	logo();
    printf("\t\tSelamat datang di menu bantuan\n");
    printf ("     --------------------------------------------------------------------------------\n");
    printf ("\t\tSilakan pilih menu di bawah ini\n");
    printf("\t\t[1]. FAQ\n");
    printf("\t\t[2]. Info penerbangan\n");
    printf("\t\t[3]. Tentang program\n");
    printf("\t\t[4]. Back\n");
    printf ("     --------------------------------------------------------------------------------\n");
    scanf("%d", &pilih);
    system("cls");
    switch (pilih){
        case 1 : faq();
            break;
        case 2 : info ();
            break;
        case 3 : prog();
            break;
        case 4 : menu();
            break;
        default: printf ("Maaf inputan anda salah, silakan coba lagi\n");
            system("PAUSE"); system("cls"); help();
            break;
    }
}

void faq(){
	logo();
    printf("----FAQ----\n\n");
    printf("Q: Apakah harga sudah termasuk PPN?\n");
    printf("A: Tidak, harga belum termasuk PPN sebesar 10%. \n\n");
    printf("Q: Bagaimana cara memesan?\n");
    printf("A: [1]. Pilih angka 1 pada menu utama untuk membuat akun, setelah akun dibuat maka anda dapat memesan tiket\n");
    printf("   [2]. Pilih angka 2 pada menu utama untuk melihat jadwal penerbangan dan memulai pemesanan\n");
    printf("   [3]. Setelah pemesanan dibuat maka anda dapat melakukan pembayaran pada menu ketiga. \n\n");
    printf("Q: Bagaimana saya melihat tiket yang telah saya pilih?\n");
    printf("A: Setelah anda membuat pemesanan anda dapat memilih angka 4 pada menu utama untuk melihat tiket,\n");
    printf("anda juga dapat melakukan refund pada menu ini\n\n");
    printf("Q: Berapa banyak pemesanan yang bisa saya lakukan dalam satu akun ?\n");
    printf("A: Satu akun hanya dapat melakukan satu pemesanan, jika anda ingin menambah pesanan maka anda\n");
    printf("dapat membuat akun baru\n\n\n");
    printf("Tekan angka 1 untuk kembali\n");
    scanf("%d", &pilih);
    system("cls");
    return help();
}

void info(){
	logo();
    printf ("----Info Penerbangan----\n\n");
    printf("Berikut adalah info penerbangan yang kami tawarkan\n");
    printf("\t\t [1].    Jakarta - Denpasar\n");
    printf("\t\t [2].    Jakarta - Palembang\n");
    printf("\t\t [3].    Jakarta - Medan\n");
    printf("\t\t [4].    Jakarta - Semarang\n");
    printf("\t\t [5].    Jakarta - Bandung\n");
    printf("\t\t [6].    Jakarta - Surabaya\n");
    printf("\t\t [7].    Jakarta - Makassar\n\n");
    printf("\t\t [8].    Back\n\n");
    scanf("%d", &pilih);
    system("cls");
    switch(pilih){
        case 1 :
        	logo();
            printf("----- Jakarta-Denpasar -----\n\n");
            printf("Penerbangan ini dijadwalkan untuk berangkat dari Bandara Internasional Soekarno-Hatta dan\n mendarat di Bandara Internasional Ngurah Rai\n\n");
            printf("Tekan 1 untuk kembali\n");
            back();
            break;
        case 2:
        	logo();
            printf("----- Jakarta-Palembang -----\n\n");
            printf("Penerbangan ini dijadwalkan untuk berangkat dari Bandara Internasional Soekarno-Hatta dan\n mendarat di Bandara Internasional Sultan Mahmud Badaruddin II\n\n");
            printf("Tekan 1 untuk kembali\n");
            back();
            break;
        case 3:
        	logo();
            printf("----- Jakarta-Medan -----\n\n");
            printf("Penerbangan ini dijadwalkan untuk berangkat dari Bandara Internasional Soekarno-Hatta dan\n mendarat di Bandara Internasional Kualanamu\n\n");
            printf("Tekan 1 untuk kembali\n");
            back();
            break;
        case 4:
        	logo();
            printf("----- Jakarta-Semarang -----\n\n");
            printf("Penerbangan ini dijadwalkan untuk berangkat dari Bandara Halim Perdanakusuma dan\n mendarat di Bandar Udara Jenderal Ahmad Yani\n\n");
            printf("Tekan 1 untuk kembali\n");
            back();
            break;
        case 5:
        	logo();
            printf("----- Jakarta-Bandung -----\n\n");
            printf("Penerbangan ini dijadwalkan untuk berangkat dari Bandara Halim Perdanakusuma dan\n mendarat di Bandara Internasional Husein Sastranegara\n\n");
            printf("Tekan 1 untuk kembali\n");
            back();
            break;
        case 6:
        	logo();
            printf("----- Jakarta-Surabaya -----\n\n");
            printf("Penerbangan ini dijadwalkan untuk berangkat dari Bandara Internasional Soekarno-Hatta dan\n mendarat di Bandar Udara  Internasional Juanda\n\n");
            printf("Tekan 1 untuk kembali\n");
            back();
            break;
        case 7:
        	logo();
            printf("----- Jakarta-Makassar -----\n\n");
            printf("Penerbangan ini dijadwalkan untuk berangkat dari Bandara Internasional Soekarno-Hatta dan\n mendarat di Bandara Internasional Sultan Hasanuddin\n\n");
            printf("Tekan 1 untuk kembali\n");
            back();
            break;
        case 8:
            help();
        default: printf ("Maaf inputan anda salah, silakan coba lagi\n");
            system("PAUSE"); system("cls"); help();
            break;
    }
}
void back()
{
    int a=1;
    scanf("%d", &a);
    system("cls");
    if(a==1)
    {
        return info();
    }
}
int prog(){
	logo();
    printf ("---- Tentang Program Kami----\n\n");
    printf ("Program ini adalah program yang dibuat untuk memesan tiket pesawat dari Kota Jakarta\n");
    printf("ke kota-kota besar lain di Indonesia\n\n");
    printf("Tekan 1 untuk kembali\n");
    scanf("%d", &pilih);
    switch(pilih)
    {
        case 1: system("cls");
            return main();
            break;
        default: printf("Error");
            system("PAUSE"); system("cls"); help();
            break;
    }
}
