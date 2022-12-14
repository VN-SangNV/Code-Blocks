/*
Cho tam giác ABC có chiều dài 3 cạnh lần lượt là a, b, c (a = BC, b = AC, c = AB).
Hãy tìm chu vi, diện tích của tam giác ABC và độ dài đường cao AH.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, p;
    float s, h, p2;
    printf("Nhap chieu dai 3 canh: \n");
    scanf("%d%d%d", &a, &b, &c);

    p = a + b + c;
    p2= p*0.5;

    s = sqrt(p2*(p2 - a)*(p2 - b)*(p2 - c));
    h = (2*s)/a;

    printf("Do dai duong cao AH la: %f\n", h);
    printf("Chu vi hinh tam giac ABC la: %d\n", p);
    printf("Dien tich hinh tam gia ABC la: %f", s);

    return 0;
}
