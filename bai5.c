/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

// BÀI LÀM THÊM
// BÀI 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TÍCH VÀ THƯƠNG CỦA 2 SỐ

#include <stdio.h>

int main()
{
    int so1, so2;

    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    int mul = 0;
    float div = 0.00;

    mul = so1 * so2;
    printf("Tich cua 2 so %d va %d la: %d\n", so1, so2, mul);
    while (so2 == 0)
    {
        printf("Nhap lai so thu 2 khac khong: ");
        scanf("%d", &so2);
    };

    div = (float)so1 / so2;

    printf("Thuong cua 2 so %d va %d la: %.2f\n", so1, so2, div);

    return 0;
}