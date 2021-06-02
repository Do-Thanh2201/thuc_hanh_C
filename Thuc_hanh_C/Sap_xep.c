///*Bai toan sap xep so trong mang*/
//#include <stdio.h>
//#include <string.h>
//
//void nhap_mang(int mang[], int *sophantu);
//void in_mang(int mang[], int sophantu);
//void sap_xep_tang(int mang[], int sophantu);
//void sap_xep_le (int mang[], int sophantu);
//
//int main()
//{
//    int mang[50];
//    int x; // So phan tu cua mang
//    printf("Nhap so phan tu cua mang:");
//    scanf("%d", &x);
//    nhap_mang(mang, &x);
//    sap_xep_le(mang,x);
//    in_mang(mang,x);
//    sap_xep_tang(mang,x);
//    in_mang(mang,x);
//    return 0;
//}
//void nhap_mang(int mang[], int *sophantu)
//{
//    for(int i=0;i<*sophantu;i++)
//    {
//        printf("Phan tu thu %d: ", i);
//        scanf("%d", &mang[i]);
//    }
//
//}
//void in_mang(int mang[], int sophantu)
//{
//    printf("\nCac phan tu cua mang: \n");
//    for(int i=0;i<sophantu;i++)
//    {
//        printf("%d ",mang[i]);
//    }
//}
//void sap_xep_tang(int mang[], int sophantu)
//{
//    int tg; // Bien trung gian de thuc hien doi gia tri 2 phan tu
//    for(int i=0; i< sophantu-1;i++) // Dam bao cac vi tri deu duoc sap xep
//    {
//        for(int j=i+1; j<sophantu;j++) // Dam bao so sanh vi tri i voi tat ca cac vi tri khac trong mang
//        {
//            if (mang[i]>mang[j])
//            {
//                tg = mang[i];
//                mang[i]=mang[j];
//                mang[j]=tg;
//            }
//        }
//    }
//}
//void sap_xep_le (int mang[], int sophantu)
//{
//    int tg;
//    for(int i=0; i< sophantu-1;i++) // Dam bao cac vi tri deu duoc sap xep
//    {
//        if (mang[i]%2!=0)
//        {
//            for(int j=i+1; j<sophantu;j++) // Dam bao so sanh vi tri i voi tat ca cac vi tri khac trong mang
//            {
//
//                if(mang[j]%2!=0) // Neu ca 2 vi tri i va j deu la so le thi tien hanh sap xep
//                {
//                    if (mang[i]>mang[j])
//                    {
//                        tg = mang[i];
//                        mang[i]=mang[j];
//                        mang[j]=tg;
//                    }
//                }
//            }
//        }
//    }
//}
//
//
//
