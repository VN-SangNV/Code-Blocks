/*
Cho số tự nhiên n.
a. Tính tổng các chữ số của n.
b. Kiểm tra n có đối xứng hay k.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, n2, n3, dem, dem2, dem3, sum;
    printf("Nhap so tu nhien n: ");
    scanf("%d", &n);
    n2 = n;
    dem = 1;
    sum = 0;

    while(n2 >10){
        sum += n2%10;
        dem++;
        n2 /= 10;
    }
    sum += n/pow(10, (dem-1));
    n2 = n;
    n3 = n;
    dem2 = 0;
    dem3 = pow(10,(dem-1));

    for(int i = 0; i < dem/2; i++){
        if(n2/dem3 == n2%10){
            dem2++;
        }
        n2 = n2 - (n2/dem3)*dem3;
        n2 /= 10;
        dem3 /= 100;
        printf("\nn2 = %d", n2);
    }
    if(dem2 == dem/2){
        printf("\n%d la mot so doi xung!", n);
    } else {
        printf("\n%d khong phai la mot so doi xung!", n);
    }
    printf("\n%d co %d chu so!", n, dem);
    printf("\nTong cac chu so = %d", sum);


    return 0;
}
