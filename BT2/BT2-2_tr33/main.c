/*
Nhập vào t giây, hãy đổi t giây ra dạng giờ - phút - giây.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    int m = 0;
    int h = 0;
    printf("Nhap so giay: ");
    scanf("%d", &s);

    if(s > 59){
        m = s/60;
        s -= m*60;
    }
    if(m > 59){
        h = m/60;
        m -= h*60;
    }
    printf("Thoi gian la: %dh %dm %ds", h, m, s);

    return 0;
}
