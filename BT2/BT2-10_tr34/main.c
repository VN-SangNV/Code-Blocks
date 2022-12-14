/*
Tìm sin, cosin, tan, cotan của góc alpha độ, với alpha là dữ liệu nhập vào.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141593

int main()
{
    int choices;
    double sinx, cosx, deg, rad;
    printf("Su dung don vi: \n1. Do\n2. Radian\nNhap lua chon: ");
    scanf("%d", &choices);
    system("cls");

    switch(choices){
        case 1: {
            printf("Nhap goc alpha: ");
            scanf("%lf", &rad);
            deg = rad*(pi/180);
            sinx = sin(deg);
            cosx = cos(deg);
            break;
        }
        case 2: {
            printf("Nhap goc radian: ");
            scanf("%lf", &deg);
            sinx = sin(deg);
            cosx = cos(deg);
            break;
        }
        default: {
            printf("Lua chon khong hop le!\a");
        }
    }
    printf("\nsinAlpha = %lf", sinx);
    printf("\ncosAlpha = %lf", cosx);
    if(cosx != 0){
        printf("\ntanAlpha = %lf", sinx/cosx);
    }
    if(sinx != 0){
        printf("\ncotAlpha = %lf", cosx/sinx);
    }

    return 0;
}
