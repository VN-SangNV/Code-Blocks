/*
Trong mặt phẳng tọa độ OXY cho 3 điểm A, B, C Lần lượt có tọa độ là (Xa; Ya), (Xb; Yb), (Xc; Yc).
Hãy tìm tọa độ trọng tâm, diện tích đường tròn nội tiếp, diện tích đường tròn ngoại tiếp của tam giác ABC.
*/
#include <stdio.h>
#include <stdlib.h>
#define pi 3.141593

int main()
{
    int xA, xB, xC, yA, yB, yC;
    float xG, yG, xNgT, xNT, yNgT, yNT;
    printf("Nhap toa do diem A(x; y): ");
    scanf("%d%d", &xA, &yA);
    printf("Nhap toa do diem B(x; y): ");
    scanf("%d%d", &xB, &yB);
    printf("Nhap toa do diem C(x; y): ");
    scanf("%d%d", &xC, &yC);

    xG = (xA + xB + xC)/3;
    yG = (yA + yB + yC)/3;

    printf("Toa do trong tam tam giac ABC la: G(%f; %f)", xG, yG);

    yNgT = (-(yA*yA - xA*xA + xB*xB + yB*yB)*(-2*xA + 2*xC) - yA*yA - xA*xA + xC*xC +yC*yC)/((2*yA - 2*yB)*(-2*xA + 2xC) - (2*yA - 2*yC));
    xNgT = (yNgT*(2*yA - 2*yB) - yA*yA - xA*xA + xB*xB + yB*yB)/(-2*xA + 2*xB);

    return 0;
}
