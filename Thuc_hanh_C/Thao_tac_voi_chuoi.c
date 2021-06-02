///*Bai toan tach ngay thang nam trong chuoi*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char mang[]="Today is 29/04/2021";
//int main()
//{
//    char date[3];
//    char month[3];
//    char year[5];
//    char year2[5];
//    char *sub = strtok(mang, "/");
//    sub = strtok(NULL, "/");
//    strcpy(month,sub);
//    // Xem vung dia chi va gia tri cua vung dia chi con tro sub tro toi
//    printf("1: %x\n", sub);
//    printf("2: %x\n",&mang[12]);
//    printf("3: %s\n", sub);
//
//    strcpy(date,(sub-3));
//    // Xem vung dia chi va gia tri cua vung dia chi con tro sub tro toi
//    printf("1: %x\n", sub);
//    printf("2: %x\n",&mang[9]);
//    printf("3: %s\n", sub);
//
//    sub = strtok(NULL, "/");
//    strcpy(year,sub);
//
//    printf(" %s - %s -%s", date, month, year);
//    return 0;
//}
