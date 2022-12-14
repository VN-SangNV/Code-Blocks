/*
Trong mặt phẳng tọa độ OXY, cho hai hình chữ nhật có các cạnh song song với các trục tọa độ:
Hình chữ nhật thứ nhất có đỉnh dưới trái là A và đỉnh trên phải B;
Hình chữ nhật thứ hai có đỉnh dưới trái là C và đỉnh trên phải là D. Giả sử hoành độ và tung độ của các đỉnh là các số nguyên.
Hãy viết chương trình tìm tọa độ góc dưới trái E và góc trên phải F
của hình chữ nhật bé nhất có các cạnh song song với các trục tọa độ và chứa cả hai hình chữ nhật đã cho.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, x2, x3, x4, xMax, xMin, y1, y2, y3, y4, yMax, yMin;
    printf("Nhap diem A(x, y): ");
    scanf("%d%d", &x1, &y1);
    printf("\nNhap diem B(x, y): ");
    scanf("%d%d", &x2, &y2);
    printf("\nNhap diem C(x, y): ");
    scanf("%d%d", &x3, &y3);
    printf("\nNhap diem D(x, y): ");
    scanf("%d%d", &x4, &y4);

    int arrX[4] = {x1, x2, x3, x4};
    int arrY[4] = {y1, y2, y3, y4};

    xMax = x1;
    xMin = x1;
    yMax = y1;
    yMin = y1;

    for(int i = 0; i<4; i++){
        if(arrX[i] > xMax){
            xMax = arrX[i];
        }
        if(arrX[i] < xMin){
            xMin = arrX[i];
        }
        if(arrY[i] > yMax){
            yMax = arrY[i];
        }
        if(arrY[i] < xMin){
            xMin = arrX[i];
        }
    }
    printf("Hinh chu nhat can tim la: E(%d; %d), F(%d; %d)", xMin, yMin, xMax, yMax);
    return 0;
}
