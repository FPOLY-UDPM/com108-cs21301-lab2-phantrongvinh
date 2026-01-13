/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH
// Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa
// Output: Hiển thị ra màn hình điểm trung bình
// Biết rằng
// Điểm Toán có hệ số 3, điểm Lý có hệ số 2, điểm Hóa có hệ số 1

#include <stdio.h>

int main()
{
    // Khai báo biến
    float diemToan, diemLy, diemHoa, diemTB = 0;
    // Nhập dữ liệu
    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);
    printf("Nhap diem Ly: ");
    scanf("%f", &diemLy);
    printf("Nhap diem Hoa: ");
    scanf("%f", &diemHoa);

    // Xử lý, tính toán
    diemTB = (diemToan * 3 + diemLy * 2 + diemHoa) / 6;
    // Hiển thị kết quả
    printf("Diem trung binh la: %.2f\n", diemTB);
}