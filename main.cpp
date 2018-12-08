#include<stdio.h>
#include<stdlib.h>

int deret (int a, int b, int c, int n);

int main()
{
    system("color b");
    int a=0,b,c,jumlah,n;
    printf("==========Fungsi Deret Bilangan==========\n\n\n");
    printf("Masukan Bilangan Pertama :");
    scanf("%d",&a);
    printf("Masukan Beda Bilangan :");
    scanf("%d",&b);
    printf("Masukan Jumlah Deret :");
    scanf("%d",&n);
    printf("\n");

    printf("=========================================\n\n\n");
    printf("Hasil deret   : ");
    scanf("%d",&a);
    printf(",");
    jumlah=deret(a,b,c,n);
    printf("\n");
    printf("Hasil Penjumlahan Deret :");
    printf("%d",jumlah);
    printf("\n");
    system("pause");
    return 0;
}

int deret(int a, int b, int c, int n)
{
    int i,jumlah=0;
    jumlah=jumlah+a;
    for (i=0;i<n-1;i++){
        c=a+b;
        a=c;
        printf("%d",c);
        printf(",");
        jumlah=jumlah+c;
    }
    return jumlah;
    }

