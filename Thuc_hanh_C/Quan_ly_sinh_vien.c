#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    float Diem_TB;
    float Toan;
    float Ly;
    float Hoa;
    char hoten[30];
    char Xep_loai[18];

} info_sv_t;

void NhapSV(info_sv_t TABLE_SV[], int *so_sinh_vien)
{
    printf ("Nhap vao so sinh vien: ");
    scanf("%d", so_sinh_vien);
    for(int i=0; i<*so_sinh_vien;i++)
    {
        printf("Sinh vien %d: \n", i+1);

        printf ("Nhap ten: ");
        fflush(stdin);
        gets(TABLE_SV[i].hoten);

        printf("Nhap diem Toan: ");
        scanf("%f", &TABLE_SV[i].Toan);

        printf("Nhap diem Ly: ");
        scanf("%f", &TABLE_SV[i].Ly);

        printf("Nhap diem Hoa: ");
        scanf("%f", &TABLE_SV[i].Hoa);
        printf ("---------------------\n");

        strcpy(TABLE_SV[i].Xep_loai, "Chua xep loai SV");

    }
}

void InSV(info_sv_t TABLE_SV[], int so_sinh_vien)
{
    printf ("Thong tin sinh vien!\n");

    for(int i=0; i<so_sinh_vien;i++)
    {
        printf("Sinh vien %d:\n", i+1);
        printf ("Ten: %s\n", TABLE_SV[i].hoten);
        printf("Diem Toan: %.2f\n", TABLE_SV[i].Toan);
        printf("Diem Ly: %.2f\n", TABLE_SV[i].Ly);
        printf("Diem Hoa: %.2f\n", TABLE_SV[i].Hoa);
        printf("Diem Trung binh: %.2f\n", TABLE_SV[i].Diem_TB);
        printf("Xep loai: %s\n", TABLE_SV[i].Xep_loai);
        printf ("*************************\n");
    }
}
void Suathongtin_SV(info_sv_t TABLE_SV[], int *stt)
{
    printf("Nhap vao so thu tu cua sinh vien can sua: ");
    scanf("%d", stt);

    printf("Sinh vien %d:\n", *stt);

    printf ("Nhap ten: ");
    char ten[30]; // Mang trung gian dung de luu ten sinh vien moi
    fflush(stdin);
    gets(ten); // Nhap ten sinh vien moi

    strcpy(TABLE_SV[*stt-1].hoten, ten); // Nhap lai ten Sinh vien vao danh sach ban dau

    printf("Nhap diem Toan: ");
    scanf("%d", &TABLE_SV[*stt-1].Toan); //Nhap lai diem Toan

    printf("Nhap diem Ly: ");
    scanf("%d", &TABLE_SV[*stt-1].Ly); //Nhap lai diem Ly

    printf("Nhap diem Hoa: ");
    scanf("%d", &TABLE_SV[*stt-1].Hoa); // Nhap lai diem Hoa
    printf ("---------------------\n");
}
void DiemTB(info_sv_t TABLE_SV[], int so_sinh_vien) // Tinh diem trung binh cua sinh vien
{
    for (int i=0;i<so_sinh_vien;i++)
    {
        TABLE_SV[i].Diem_TB =(TABLE_SV[i].Toan + TABLE_SV[i].Ly + TABLE_SV[i].Hoa) / 3;
        printf("Diem Trung binh cua sinh vien %d: %s la %.02f\n", i+1, TABLE_SV[i].hoten, TABLE_SV[i].Diem_TB);
    }

}

void Sapxep_DiemSv_giamdan(info_sv_t TABLE_SV[], int so_sinh_vien) // Sap xep diem trung binh cua sinh vien giam dan
{
    info_sv_t Trung_gian_TTSV; // Bien trung gian dung de luu thong tin sap xep sinh vien
    for(int i=0;i<so_sinh_vien-1;i++) // Dam bao cac vi tri deu duoc sap xep
    {
        for(int j=i+1;j<so_sinh_vien;j++) // Dam bao vi tri i duoc so sanh voi tat ca cac vi tri con lai
        {
            if(TABLE_SV[i].Diem_TB < TABLE_SV[j].Diem_TB) // Neu dung thi ta hoan doi thong tin 2 sinh vien
            {
                // Luu thong tin Sinh vien i vao bien trung gian
                Trung_gian_TTSV.Diem_TB = TABLE_SV[i].Diem_TB;
                Trung_gian_TTSV.Toan = TABLE_SV[i].Toan;
                Trung_gian_TTSV.Ly = TABLE_SV[i].Ly;
                Trung_gian_TTSV.Hoa = TABLE_SV[i].Hoa;
                strcpy(Trung_gian_TTSV.hoten, TABLE_SV[i].hoten);
                strcpy(Trung_gian_TTSV.Xep_loai, TABLE_SV[i].Xep_loai);
                // Luu thong tin Sinh vien j vao vi tri cua sinh vien i
                TABLE_SV[i].Diem_TB = TABLE_SV[j].Diem_TB;
                TABLE_SV[i].Toan = TABLE_SV[j].Toan;
                TABLE_SV[i].Ly = TABLE_SV[j].Ly;
                TABLE_SV[i].Hoa = TABLE_SV[j].Hoa;
                strcpy(TABLE_SV[i].hoten, TABLE_SV[j].hoten);
                strcpy(TABLE_SV[i].Xep_loai, TABLE_SV[j].Xep_loai);

                // Luu thong tin Sinh vien i vao vi tri cua sinh vien j thong qua bien trung gian
                TABLE_SV[j].Diem_TB = Trung_gian_TTSV.Diem_TB;
                TABLE_SV[j].Toan =  Trung_gian_TTSV.Toan;
                TABLE_SV[j].Ly = Trung_gian_TTSV.Ly;
                TABLE_SV[j].Hoa = Trung_gian_TTSV.Hoa;
                strcpy(TABLE_SV[j].hoten, Trung_gian_TTSV.hoten);
                strcpy(TABLE_SV[j].Xep_loai, Trung_gian_TTSV.Xep_loai);
            }
        }
    }
}
void Xep_loai_SV(info_sv_t TABLE_SV[], int so_sinh_vien) // Xep loai sinh vien
{
    for (int i=0;i<so_sinh_vien;i++)
    {
        if (TABLE_SV[i].Diem_TB >= 8 )
        {
            strcpy(TABLE_SV[i].Xep_loai, "Gioi");
        }
        else if(TABLE_SV[i].Diem_TB >= 7 )
        {
            strcpy(TABLE_SV[i].Xep_loai, "Kha");
        }
        else if (TABLE_SV[i].Diem_TB >= 6 )
        {
            strcpy(TABLE_SV[i].Xep_loai, "Trung binh");
        }
        else
        {
            strcpy(TABLE_SV[i].Xep_loai, "Yeu");
        }
    }
}
typedef enum
{
    Thoat =0,
    Chuc_nang1,
    Chuc_nang2,
    Chuc_nang3,
    Chuc_nang4,
    Chuc_nang5,
    Chuc_nang6,

}Chuc_nang;

void Huong_dan_chon_chuc_nang()
{
    printf("\n***             Quan ly sinh vien             ***\n");
    printf("         1: Nhap thong tin sinh vien\n");
    printf("         2: Sua thong tin sinh vien\n");
    printf("         3: Tinh diem trung binh cua sinh vien\n");
    printf("         4: Sap xep diem trung binh sinh vien theo thu tu giam dan\n");
    printf("         5: Xep loai sinh vien\n");
    printf("         6: In ra thong tin sinh vien\n");
    printf("         0: Thoat\n");
    printf("         Xin moi chon chuc nang!\n");
}


int main()
{
    info_sv_t TABLE_SV[5]; // Cho phep luu thong tin toi da cua 10 SV
    int so_sinh_vien;
    int STT; // Bien dung de chon chuc nang hoac sua thong tin SV
//    NhapSV(TABLE_SV, &so_sinh_vien);
//

////    Suathongtin_SV(TABLE_SV, &STT);
//
//    DiemTB(TABLE_SV, so_sinh_vien);
////    for (int i=0;i<so_sinh_vien;i++)
////    {
////        printf("Diem Trung binh cua sinh vien %d: %s la %.02f\n", i+1, TABLE_SV[i].hoten, TABLE_SV[i].Diem_TB);
////    }
//
//    Sapxep_DiemSv_giamdan(TABLE_SV, so_sinh_vien);
//
//    Xep_loai_SV (TABLE_SV, so_sinh_vien);
//
//    InSV(TABLE_SV, so_sinh_vien);
//
    do
    {
        Huong_dan_chon_chuc_nang();
        scanf("%d", &STT);
        switch(STT)
        {
        case 0:
            break;
        case Chuc_nang1:
            NhapSV(TABLE_SV, &so_sinh_vien);
            break;
        case Chuc_nang2:
            Suathongtin_SV(TABLE_SV, &STT);
            break;
        case Chuc_nang3:
            DiemTB(TABLE_SV, so_sinh_vien);
            break;
        case Chuc_nang4:
            Sapxep_DiemSv_giamdan(TABLE_SV, so_sinh_vien);
            printf("         Da sap xep xong diem trung binh! Ban co the chon chuc nang in ra thong tin sinh vien\n");
            break;
        case Chuc_nang5:
            Xep_loai_SV (TABLE_SV, so_sinh_vien);
            printf("         Da xep loai sinh vien! Ban co the chon chuc nang in ra thong tin sinh vien\n");
            break;
        case Chuc_nang6:
            InSV(TABLE_SV, so_sinh_vien);
            break;
        default:
            printf("         Chuc nang vua chon khong dung, xin moi nhap lai!\n");
            break;
        }
    }
    while(STT!=Thoat);

    return 0;
}
