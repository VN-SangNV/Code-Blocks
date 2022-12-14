/*
Trong mặt phẳng tọa độ OXY, cho hai hình chữ nhật có các cạnh song song với các trục tọa độ;
mỗi hình chữ nhật biết tọa độ đinh dưới trái và trên phải.
Hãy tìm tâm và đường kính của đường tròn nhỏ nhất bao cả hai hình chữ nhật trên.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4, xMax, xMin, yMax, yMin;
    float xO, yO, rO, dO;

    printf("Nhap toa do diem A(x, y): ");
    scanf("%d%d", &x1, &y1);
    printf("Nhap toa do diem B(x, y): ");
    scanf("%d%d", &x2, &y2);
    printf("Nhap toa do diem C(x, y): ");
    scanf("%d%d", &x3, &y3);
    printf("Nhap toa do diem D(x, y): ");
    scanf("%d%d", &x4, &y4);

    int arrX[4] = {x1, x2, x3, x4};
    int arrY[4] = {y1, y2, y3, y4};

    xMax = x1;
    xMin = x1;
    yMax = y1;
    yMin = y1;

    for(int i = 0; i < 4; i++){
        if(arrX[i] > xMax){
            xMax = arrX[i];
        }
        if(arrX[i] < xMin){
            xMin = arrX[i];
        }
        if(arrY[i] > yMax){
            yMax = arrY[i];
        }
        if(arrY[i] < yMin){
            yMin = arrY[i];
        }
    }
    printf("\nXmax = %d\nXmin = %d\nYmax = %d\nYmin = %d", xMax, xMin, yMax, yMin);

    xO = (xMax + xMin)*0.5;
    yO = (yMax + yMin)*0.5;

    rO = sqrt((xMax - xO)*(xMax - xO) + (yMax - yO)*(yMax - yO));
    dO = 2*rO;

    printf("\nToa do tam hinh tron la: O(%f; %f)", xO, yO);
    printf("\nDuong kinh hinh tron tam O la: %f", dO);

    return 0;
}
