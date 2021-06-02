/*Bai toan Nhap so nguyen, in ra cac chu so chan, le cua so do*/
#include <stdio.h>

//#include <math.h>

// 51252 % 10^5= 51252   /10^4=5
// 51252 % 10^4= 1252    /10^3=1
// 51252 % 10^3= 252     /10^2=2
// 51252 % 10^2= 52      /10^1=5
// 51252 % 10^1= 2       /10^0=2
void tach_chu_so (int a)
{
    int dem, ch;
    dem = (int) log10(a) + 1; // Dem so chu so cua so nhap vao
    printf("Chu so chan: ");
    for (int i=dem; i>0; i--)
    {
        ch = a % (int)pow(10,i) / (int)pow (10,i-1);
        if (ch%2==0)
        {
            printf ("%d ", ch);
        }
    }
    printf("\nChu so le: ");
    for (int i=dem; i>0; i--)
    {
        ch =a % (int)pow(10,i) / (int)pow (10,i-1);
        if (ch%2!=0)
        {
            printf ("%d ", ch);
        }
    }
}
int main()
{
    int a;
    printf ("Nhap so nguyen: ");
    scanf ("%d", &a);
    tach_chu_so(a);
    return 0;
}
