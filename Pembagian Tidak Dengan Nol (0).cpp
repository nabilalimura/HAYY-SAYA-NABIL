#include <stdio.h>
#include <conio.h>
int main ()
{
    int hasil,a,b;
    printf("================================================\n");
    printf("| PROGRAM VALIDASI PEMBAGIAN TIDAK DENGAN NOL  |\n");
    printf("| CREATED BY SYAHRI RAHMAT (TEKNIK INFORMATIKA |\n");
    printf("|               NIM = 311810526                |\n");
    printf("================================================\n");

    printf("SILAHKAN MASUKKAN BILANGAN A = "); scanf("%i",&a);
    printf("SILAHKAN MASUKKAN BILANGAN B = "); scanf("%i",&b);

    if (a != 0 && b != 0)
    {
        hasil = a/b;
        printf("MAKA HASIL PEMBAGIANNYA ADALAH = %i",hasil);
    }
    else
    {
        printf("MAAF, PEMBAGIAN TIDAK BOLEH DENGAN NOL !!!");
    }
 getch();
}
