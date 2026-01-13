/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
// Input: Nhập vào bán kính của đường tròn
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

int main()
{
    // Khai báo biến
    // radius: bán kính
    float radius, perimeter, area = 0;
    const float PI = 3.14;
    // Nhập dữ liệu
    printf("Nhap ban kinh duong tron: ");
    scanf("%f", &radius);

    // Xử lý, tính toán
    // Chu vi = 2 * PI * r
    perimeter = 2 * PI * radius;
    // Dien tich = PI * r * r
    area = PI * radius * radius;

    // Hiển thị kết quả
    printf("Chu vi hinh tron la: %.2f\n", perimeter);
    printf("Dien tich hinh tron la: %.2f\n", area);
}