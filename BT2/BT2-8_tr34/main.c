/*
Trong mặt phẳng tọa độ OXY cho 2 điểm A, B;
điểm A có tọa độ là (x; y), điểm B có tọa độ là (z; 0) với x, y, z là các số dương
Hãy tính diện tích tam giác OAB.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y, z;
    float sOAB;

    printf("Nhap toa do diem A(x; y): ");
    scanf("%d%d", &x, &y);
    printf("Nhap toa do diem B(z; 0): ");
    scanf("%d", &z);

    sOAB = (y*z)*0.5;

    printf("Dien tich tam giac ABC la: %f", sOAB);

    return 0;
}
