/*
Cho số tự nhiên n có ba chữ số.
a. Tính tổng các chữ số của n.
b. Kiểm tra n có đối xứng hay k.
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int sum, n, n2;
    printf("Nhập số tự nhiên n: ");
    scanf("%d", &n);
    n2 = n;
    sum = 0;

    for(int i = 0; i < 3; i++){
        sum += n2%10;
        n2 /=10;
    }
    printf("Tổng các chữ số của n là: %d", sum);
    if(n/100 == n%10){
        printf("\n%d là một số đối xứng!", n);
    }  else {
        printf("\n%d không phải là một số đối xứng!", n);
    }
    return 0;
}
