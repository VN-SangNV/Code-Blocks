/*
Trong mặt phẳng tọa độ OXY cho 3 điểm A, B, C;
Hãy tính diện tích tam giác ABC.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int xA, xB, xC, yA, yB, yC;
    float sABC, p, a, b, c;

    printf("Nhap toa do diem A(x; y): ");
    scanf("%d%d", &xA, &yA);
    printf("Nhap toa do diem B(x; y): ");
    scanf("%d%d", &xB, &yB);
    printf("Nhap toa do diem B(x; y): ");
    scanf("%d%d", &xC, &yC);

    a = sqrt((xB - xC)*(xB - xC) + (yB - yC)*(yB - yC));
    b = sqrt((xA - xC)*(xA - xC) + (yA - yC)*(yA - yC));
    c = sqrt((xA - xB)*(xA - xB) + (yA - yB)*(yA - yB));

    p = (a + b + c)/2;
    sABC = sqrt(p*(p - a)*(p - b)*(p - c));

    printf("Dien tich tam giac ABC la: %f", sABC);

    return 0;
}
