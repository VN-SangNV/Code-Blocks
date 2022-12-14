/*
a. Viết phương trình hiển thị tất cả các số có 3 chữ số sao cho
tổng các chữ số của số đó bằng tích của chúng. Ví dụ: 123 là thỏa mãn điều kiện
b. Tìm các số có 5 chữ số khác nhau từng đôi một. Có bao nhiêu số như vậy?
c. Cần trả 200000 đồng từ 3 loại giấy bạc 1000 đồng, 2000 đồng, 5000 đồng.
Hỏi có bao nhiêu phương án để chi trả.
d. Tìm bộ 3 số tự nhiên x, y, z thỏa 1 <= x, y, z <= 10000
và thỏa mãn x^2 + y^2 = Z^2. Ví dụ {6, 8, 10} là một bộ nghiệm thỏa mãn.
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void a(){
    printf("Cac so co tong va tich bang nhau la: \n");
    for(int i = 100; i < 1000; i++){
        int test = i;
        int sum = 0;
        int multiplication = 1;
        for(int j = 0; j < 3; j++){
            sum += test%10;
            multiplication *= test%10;
            test /= 10;
        }
        if(sum == multiplication){
            printf("%d\n", i);
        }
    }
}
void b(){
    int sumNum = 9*9*8*7*6;
    printf("Co tat ca %d so co 5 chu so khac nhau tung doi mot!\n", sumNum);
}
void c(){
    int manyMoney = 0;
    for(int i = 0; i < 101; i++){
        for(int j = 0; j < 51; j++){
            for(int k = 0; k < 21; k++){
                if((i + 2*j + 5*k) == 100){
                    manyMoney++;
                }
            }
        }
    }
    printf("Voi 3 manh gia 1000, 2000, 5000. Co %d cach de thanh toan 100000!\n", manyMoney);
}
void d(){
    printf("Cac so thoa man dieu kien: \n");
    for(int i = 1; i < 1001; i++){
        for(int j = 1; j < 1001; j++){
            for(int k = 1; j < 1001; k++){
                if((i*i + j*j) == k*k){
                    printf("{%d, %d, %d}\n", i, j, k);
                }
            }
        }
    }
}
int main()
{
    int select;
    do{
        printf("1. Viet phuong trinh hien thi tat ca cac so co 3 chu so \nsao cho tong cac chu so cua so do bang tich cua chung\n");
        printf("2. Tim cac so co 5 chu so khac nhau tung doi mot Co bao nhieu so nhu vay?\n");
        printf("3. Can tra 200000 dong t 3 loai giay bac 1000 dong, 2000 dong, 5000 dong.\nHoi co bao nhieu phuong an de chi tra?\n");
        printf("4. Tim bo 3 so tu nhien x y z thoa 1 <= x, y, z <= 10000 va thoa man x^2 + y^2 = Z^2.\n");
        printf("5. Xoa man hinh\n0. Exit\n");
        printf("Nhap lua chon: ");
        scanf("%d", &select);
        switch(select){
            case 0: {
                printf("Goodbye!\a");
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
                //d();
                printf("Chuc nang dang phat trien!\a\n");
                break;
            }
            case 5: {
                system("cls");
                break;
            }
            default: {
                printf("Lua chon khong hop le!\a\n");
                break;
            }
        }
    }while(select != 0);
    return 0;
}
