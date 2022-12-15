/*
Trong mặt phẳng tọa độ OXY cho hai đường thẳng có phương trình lần lượt là:
a1x + b1y + c1 = 0 và a2x + b2y +c2 = 0 (trong đó a1, b1, c1 là các số thực).
Hãy kiểm tra xem hai đường thẳng này là trùng nhau, song song, cắt nhau hay vừa cắt vừa vuông góc.
*/
#include <stdio.h>
#include <stdlib.h>
void oxy(){
    float a1, b1, c1, a2, b2, c2;
    printf("Nhap phuong trinh 1 (ax + by + c = 0): ");
    scanf("%f%f%f", &a1, &b1, &c1);
    printf("Nhap phuong trinh 2 (ax + by + c = 0): ");
    scanf("%f%f%f", &a2, &b2, &c2);

    if((a1/a2) == (b1/b2)){
        printf("Hai duong thang song song voi nhau!");
    }
    if(a1 == a2 && b1 == b2 && c1 == c2){
        printf("Hai duong thang trung nhau!");
    }
    if(a1 != a2 || b1 != b2){
        float x, y;
        y = (a1*c2 - a2*c1)/(b2*a1 - b1*a2);
        x = (-b1*y + c1)/a1;

        if((a1*a2 + b1*b2) == 0){
            printf("Hai duong thang vuong goc voi nhau tai: (%f; %f)", x, y);
        } else {
        printf("Hai duong thang cheo nhau tai: (%f; %f)", x, y);
        }
    }

}
int main()
{
    printf("Hello world!\n");
    oxy();
    return 0;
}
