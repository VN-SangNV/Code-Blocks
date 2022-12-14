/*
Cho một hình chữ nhật có các cạnh song song với các trục tọa độ,
tọa độ góc dưới trái là A(x1, y1) và tọa độ góc trên phải là B(x2, y2).
Hãy kiểm tra điểm M(x, y) có nằm trong hình chữ nhật trên hay không (nằm trên cạnh được xem như nằm trong).
Giả sử tọa độ các điểm là các số nguyên.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, x2, x, y, y1, y2;
    printf("Nhap toa do diem A(x, y): ");
    scanf("%d%d", &x1, &x2);
    printf("\nNhap toa do diem B(x, y): ");
    scanf("%d%d", &x2, &y2);
    printf("\nNhap toa do diem M(x, y): ");
    scanf("%d%d", &x, &y);

    if(x >= x1 && y >= y1 && x <= x2 && y <= y2){
        printf("\nM(%d; %d) nam trong hinh chu nhat!", x, y);
    } else {
        printf("\nM(%d; %d) khong nam trong hinh chu nhat!", x, y);
    }

    return 0;
}
