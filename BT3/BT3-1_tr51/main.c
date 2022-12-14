/*
a. Giải phương trình dạng ax^2 + bx + c với a, b, c là các số thực
b.Cho 4 số nguyên dương a, b, c, d khác nhau đôi một. Tìm giá trị lớn thứ nhì.
Ví dụ: Dữ liệu nhập vào là 7, 8, 2, 1 thì kết quả là 7
c. Cho 4 số nguyên dương a, b, c, d khác nhau đôi một. Xuất 4 số này ra màn hình theo chiều tăng dần
Ví dụ: Dữ liệu nhập vào là 7, 8, 2, 1 thì kết quả là 1, 2, 7, 8.
d. Viết chương trình nhập vào 6 số nguyên a, b, c, d ,e ,f. Hãy đếm xem trong đó có bao nhiêu số âm?Bao nhiêu số bằng 0? Bao nhiêu số dương?
e. Nhập vào 10 ký tự là chữ cái thường. Hỏi trong đó có bao nhiêu nguyên âm, bao nhiêu phụ âm?
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Giải phương trình bậc 2
int a(){
    float a, b, c, delta, x1, x2;
    printf("ax^2 + bx + c = 0\nNhap 3 so a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    delta = (b*b - 4*a*c);
    if(delta < 0){
        printf("Phuong trinh vo nghiem!");
    } else {
        if(delta == 0){
            x1 = (-b)/(2*a);
            x2 = x1;
        }
        if(delta > 0){
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
        }
        printf("\nx1 = %f\nx2 = %f", x1, x2);
    }
    return 0;
}
//Tìm giá trị lớn thứ nhì
void b(){
    int a, b, c, d, max, max2;
    printf("Nhap gia tri a, b, c ,d: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int arr[4] = {a, b, c ,d};

    max = a;
    for(int s = 1; s < 4; s++){
        if((arr[s] != a) && (arr[s] < a)){
            max2 = arr[s];
            break;
        }
        if((arr[s] != a) && (arr[s] > a)){
            max = arr[s];
            break;
        }
    }

    for(int i = 0; i < 4; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] > max2 && arr[i] < max){
            max2 = arr[i];
        }
    }

    printf("So lon nhat la: %d", max);
    printf("\nSo lon thu nhi la: %d", max2);
}

//Sắp xếp
void c(){
    int a, b;
    int chuoi[4];
    for(int a = 0; a < 4; a++){
        printf("Nhap so thu %d: ", a+1);
        scanf("%d", &chuoi[a]);
    }
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            if(chuoi[i] > chuoi[j]){
                a = chuoi[i];
                chuoi[i] = chuoi[j];
                chuoi[j] = a;
            }
        }
    }
    printf("Chuoi sau khi sap xep la: \n");
    for(int y = 0; y < 4; y++){
        printf("%d", chuoi[y]);
    }
}

//Đếm số âm, dương, 0
int d(){
    int demDuong, demAm, demZero;
    int arr[6];
    printf("Nhap gia tri a, b, c, d, e, f: ");

    demDuong = 0;
    demAm = 0;
    demZero = 0;

    for(int i = 0; i < 6; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > 0){
            demDuong++;
        } else {
            if(arr[i] < 0){
                demAm++;
            } else {
                demZero++;
            }
        }
    }
    printf("Co %d so duong\nCo %d so am\nCo %d so 0", demDuong, demAm, demZero);

    return 0;
}
//Đếm nguyên âm, phụ âm
int e(){
    char xau[10];
    int nguyen, phu;
    nguyen = 0;
    phu = 0;

    printf("Nhap cac ki tu: ");
    scanf("%s", &xau);

    for(int i = 0; i < 10; i++){
        if(xau[i] == 'u' || xau[i] == 'e' || xau[i] == 'o' || xau[i] == 'a' || xau[i] == 'i'){
            nguyen++;
        } else {
            phu++;
        }
    }

    printf("\n%s", xau);
    printf("\nCo %d nguyen am\nCo %d phu am", nguyen, phu);
    return 0;
}
int main()
{
    int choices;
    do{
    printf("\n===Menu===\n1. Phuong trinh bac 2\n2. Gia tri lon thu 2\n3. Sap xep tang dan\n4. Dem so am, duong, khong\n5. Dem nguyen am, phu am\n0. Exit\nEnter selection: ");
    scanf("%d", &choices);
    system("cls");
    switch(choices){
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
        case 5: {
            e();
            break;
        }
        default: {
            printf("Invalid selection!\a");
        }
    }
    }while(choices != 0);
    return 0;
}
