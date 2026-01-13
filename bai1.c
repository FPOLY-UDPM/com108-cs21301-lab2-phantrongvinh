/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH CỘNG / TRỪ 2 SỐ
// Input: Nhập vào từ bàn phím 2 số
// Output: Hiển thị ra màn hình tổng, hiệu 2 số

#include <stdio.h>

int main()
{
    // Khai báo biến
    int a, b, sum, diff = 0;

    // Nhập dữ liệu
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    // Xử lý, tính toán
    sum = a + b;
    diff = a - b;

    // Hiển thị kết quả
    printf("Tong: %d\n", sum);
    printf("Hieu: %d\n", diff);
}