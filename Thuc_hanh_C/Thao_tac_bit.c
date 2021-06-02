/*Bai toan Nhap so nguyen, in ra dang nhi phan va thuc hien SETBIT, CLERABIT, TOGLEBIT*/
#include <stdio.h>
#include <stdlib.h>

#define SETBIT(value, x) value = value|(1<<x)
#define CLEARBIT(value, x) value = value &(~(1<<x))
#define TOGLEBIT(value, x) value = value^(1<<x)
void in_nhi_phan(int a)
{
    for (int i=7;i>=0;i--)
    {
        if ((a&(1<<i))==0)
        {
            printf("0 ");
        }
        else printf("1 ");
    }
    printf("\n");
}
int main()
{
    int a;
    do
    {
        printf("Nhap vao mot so nguyen co gia tri tu 0 den 255: ");
        scanf ("%d", &a);
        if ((a<0) || (a>255)) // Gioi han so nhap vao viet duoc duoi dang 8 bit
        {
            printf("Xin moi nhap lai!\n");
            continue;
        }
        break;
    }
    while(1);
    printf("Dang nhi phan cua %d: ",a);
    in_nhi_phan(a);

    int x;
    printf("Nhap Bit can SETBIT: ");
    scanf("%d", &x);
    SETBIT(a,x);
    printf("Ket qua SETBIT: ");
    in_nhi_phan(a);

    printf("Nhap Bit can CLEARBIT: ");
    scanf("%d", &x);
    CLEARBIT(a,x);
    printf("Ket qua CLEARBIT: ");
    in_nhi_phan(a);

    printf("Nhap Bit can TOGLEBIT: ");
    scanf("%d", &x);
    TOGLEBIT(a,x);
    printf("Ket qua TOGLEBIT: ");
    in_nhi_phan(a);

    return 0;
}
