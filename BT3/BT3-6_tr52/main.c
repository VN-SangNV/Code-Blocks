/*
a. Tính tổng S(x, n) = -x + x^2/2! - x^3/3! +...+ (-1)^n*(x^n/n!)
b. Tính tổng S(x, n) = 1 - x/(1+2) + x^2/(2 + 3) +...+ (-1)^n*(x^n/(n + (n+1)))
c. Tính tổng S = 1*2 + 2*3*4 + 3*4*5*6 +...+ n*(n + 1)*...*(2n)
d. Cho S sẽ được tính theo công thức S = 1 + 3 + 5 +...+(2n + 1) với n >= 0
và số nguyên M. Hãy tìm giá trị nhỏ nhất sao cho S > M với M được cho trước.
Ví dụ: M = 20 thì n tìm được là 4.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void a(){
    int n, x;
    float sum = 0;
    int factorio = 1;

    printf("Nhap x, n: ");
    scanf("%d%d", &x, &n);

    for(int i = 1; i < (n +1); i++){
        factorio *= i;
        sum += pow(-1, i)*(pow(x, i)/factorio);
    }
    printf("Sum = %f\n", sum);
}

void b(){
    int n, x;
    float sum = 1;

    printf("Nhap x, n: ");
    scanf("%d%d", &x, &n);

    for(int i = 1; i < (n +1); i++){
        sum += pow(-1, i)*(pow(x, i)/(2*i +1));
    }
    printf("Sum = %f\n", sum);
}

void c(){
    int n;
    float sum = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    for(int i = 1; i < (n + 1); i++){
        int index = i;
        for(int j = (i+1); j < (2*i + 1); j++){
            index *= j;
        }
        printf("index = %d\n", index);
        sum += index;
    }
    printf("Sum = %f\n", sum);
}

void d(){
    int m;
    int sum = 0;

    printf("Nhap m: ");
    scanf("%d", &m);

    for(int i = 1; i < 100; i++){
        sum += (2*i + 1);
        printf("sum = %d\n", sum);
        if(sum > m){
            printf("voi n = %d thi S > M\n", i);
            break;
        }
    }

}

int main()
{
    int luaChon;
    do{
        printf("Calculator:\n");
        printf("1. Tinh tong: S(x, n) = -x + x^2/2! - x^3/3! +...+ (-1)^n*(x^n/n!)\n");
        printf("2. Tinh tong: S(x, n) = 1 - x/(1+2) + x^2/(2 + 3) +...+ (-1)^n*(x^n/(n + (n+1)))\n");
        printf("3. Tinh tong: S(x, n) = x + x^2/(1+2) + x^3/(1 + 2 + 3) +...+ x^n/(1 + 2 +...+n)\n");
        printf("4. Cho S se duoc tinh theo cong thuc S = 1 + 3 + 5 +...+(2n + 1) voi n >= 0 va so nguyen M. \nHay tim gia tri nho nhat sao cho S > M voi M duoc cho truoc.");
        printf("\n0. Exit\nNhap lua chon: ");
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
            case 4: {
                d();
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
