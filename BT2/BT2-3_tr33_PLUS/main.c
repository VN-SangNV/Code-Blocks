/*
Một số nguyên dương có k chữ số được gọi là số Armstrong khi nó bằng tổng lũy thừa k của từng chữ số.
Nhập vào một số nguyên dương x có n chữ số (n là một số bất kì), hãy kiểm tra xem x có phải là số Armstrong hay không.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, x1, dem, sum;
    printf("Nhap so nguyen duong x: ");
    scanf("%d", &x);

    dem = 1;
    sum = 0;
    x1 = x;
    while(x1>10){
        x1 /= 10;
        dem++;
    }
    printf("\n%d co %d chu so!", x, dem);

    x1 = x;
    for(int i = 0; i < dem; i++){
        sum += pow(x1%10, dem);
        x1 /= 10;
//       printf("\nSum = %d", sum);
//       printf("\nx = %d", x1);
    }

    if(x == sum){
        printf("\n%d la mot so Armstrong!", x);
    } else {
        printf("\n%d khong phai la mot so Armstrong!", x);
    }

    return 0;
}
