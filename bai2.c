/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

// BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main()
{
    // Khai báo biến
    int length, width, perimeter, area = 0;

    // Nhập dữ liệu
    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%d", &length);
    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%d", &width);

    // Xử lý, tính toán
    // Chu vi = (dai + rong) * 2
    perimeter = (length + width) * 2;
    // Dien tich = dai * rong
    area = length * width;

    // Hiển thị kết quả
    // Chu vi
    printf("Chu vi hinh chu nhat la: %d\n", perimeter);
    // Dien tich
    printf("Dien tich hinh chu nhat la: %d\n", area);
}