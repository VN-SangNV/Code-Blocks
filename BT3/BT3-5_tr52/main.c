/*
a. Tính tổng: S = 1 + 1/3 + 1/5 +...+1/(2n + 1) với n là số tự nhiên >= 0
b. Tính tổng: S = 1/2 +1/4 +...+ 1/2n với n là số tự nhiên >= 1
c. Tính tổng: S(x, n) = x + x^2/(1+2) + x^3/(1 + 2 + 3) +...+ x^n/(1 + 2 +...+n)
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void a(){
    int n;
    float sum = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    for(int i = 0; i < (n + 1); i++){
        sum += (float)1/(2*i +1);
    }
    printf("Sum = %f\n", sum);
}

void b(){
    int n;
    float sum = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    for(int i = 1; i < (n + 1); i++){
        sum += (float)1/(2*i);
    }
    printf("Sum = %f\n", sum);
}

void c(){
    int x, n;
    float sum = 0;
    int index = 0;

    printf("Nhap x, n: ");
    scanf("%d%d", &x, &n);

    for(int i = 1; i < (n+1); i++){
        index += i;
        sum += (float)pow(x, i)/index;
    }

    printf("Sum = %f\n", sum);
}
int main()
{
    int luaChon;
    do{
        printf("Calculator:\n");
        printf("1. Tinh tong: S = 1 + 1/3 + 1/5 +...+1/(2n + 1) voi n la so tu nhien >= 0\n");
        printf("2. Tinh tong: S = 1/2 +1/4 +...+ 1/2n voi n la so tu nhien >= 1\n");
        printf("3. Tinh tong: S(x, n) = x + x^2/(1+2) + x^3/(1 + 2 + 3) +...+ x^n/(1 + 2 +...+n)\n0. Exit\n");
        printf("Nhap lua chon: ");
        scanf("%d", &luaChon);

        switch(luaChon){
            case 0: {
                printf("Goodbye!\a");
                break;
            }
            case 1: {
                a();
                break;
            }
            case 2: {
                b();
                break;
            }
            case 3: {
                c();
                break;
            }
            default: {
                printf("Lua chon khong hop le!\a");
                break;
            }
        }
    }while(luaChon != 0);
    return 0;
}
