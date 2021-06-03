/*Bai toan: Nhap vao mot so, doc gia tri so nguyen do neu no co gia tri tu 1 den 9, nguoc lai thong bao khong doc duoc*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char mang[][9]=
{
    "Mot",
    "Hai",
    "Ba",
    "Bon",
    "Nam",
    "Sau",
    "Bay",
    "Tam",
    "Chin"
};
int main()
{
    int a; // Luu gia tri so nguyen can doc gia tri
    while (1)
    {
        printf("Nhap vao so nguyen can doc gia tri: ");
        scanf("%d", &a);
        if (a>0 && a<=9) // Doc gia tri cua so neu so do co gia tri tu mot den chin
        {
            printf("%s \n", mang[a-1]);
        }
        else
        {
            printf("Gia tri vua nhap khong doc duoc, Xin moi nhap lai!\n");
        }
    }

    return 0;
}
