/*
Một số nguyên dương có k chữ số được gọi là số Armstrong khi nó bằng tổng lũy thừa k của từng chữ số.
Nhập vào một số nguyên dương k có ba chữ số, hãy kiểm tra xem k có phải là số Armstrong hay không.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, x2, sum;
    sum = 0;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &x);
    x2 = x;

    for(int i = 0; i < 3; i++){
        sum += pow(x2%10, 3);
        x2 = x2/10;
    }
    if(sum == x){
        printf("%d la mot so Armstrong!\n", x);
    } else {
        printf("%d khong phai la mot so Armstrong!\n", x);
    }
    return 0;
}
