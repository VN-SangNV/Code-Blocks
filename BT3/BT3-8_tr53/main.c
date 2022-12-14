/*
a. Trong mặt phẳng tọa độn OXY cho 4 điểm A, B, C, D lần lượt có tọa độ là:
(Xa, Ya), (Xb, Yb), (Xc, Yc), (Xd, Yd). Hãy kiểm tra xem tứ giác ABCD có phải là hình bình hành không
c. Trong mặt phẳng tọa độ OXY cho n điểm (Xi, Yi) có tọa độ nguyên.
Hãy đếm xem có bao nhiêu điểm nằm hẳn ở mỗi phần tư I, II, III, IV của mặt phẳng và có bao nhiêu điểm nằm trên các trục tọa độ
*/

#include <stdio.h>
#include <stdlib.h>

/*
Điều kiện của câu này:
Trong mặt phẳng OXY cho 4 điểm A, B, C, D  sắp xếp như sau:
            B       C

           A     D
Xác định tứ giác ABCD có phải là hình bình hành không
*/
void a(){
    int arrX[4], arrY[4];

    printf("Nhap A(x, y): ");
    scanf("%d%d", &arrX[0], &arrY[0]);
    printf("Nhap B(x, y): ");
    scanf("%d%d", &arrX[1], &arrY[1]);
    printf("Nhap C(x, y): ");
    scanf("%d%d", &arrX[2], &arrY[2]);
    printf("Nhap D(x, y): ");
    scanf("%d%d", &arrX[3], &arrY[3]);

    int vector1[2], vector2[2];
    vector1[0] = arrX[0] - arrX[1];
    vector1[0] = abs(vector1[0]);
    vector1[1] = arrY[0] - arrY[1];
    vector1[1] = abs(vector1[1]);

    vector2[0] = arrX[2] - arrX[3];
    vector2[0] = abs(vector2[0]);
    vector2[1] = arrY[2] - arrY[3];
    vector2[1] = abs(vector2[1]);

    if(arrX[1] != arrX[2]){
        if(vector1[0] == vector2[0] && vector1[1] == vector2[1]){
            printf("Tu giac ABCD la hinh binh hanh!\n\a");
        } else {
            printf("Tu giac ABCD khong phai la hinh binh hanh!\n\a");
        }
    } else {
        printf("Tu giac ABCD khong phai la hinh binh hanh!\n\a");
    }
}

void b(){
    int n;
    printf("Nhap so diem:");
    scanf("%d", &n);

    int arrX[n];
    int arrY[n];

    for(int i = 0; i < n; i++){
        printf("Nhap toa do diem %d: ", i);
        scanf("%d%d", &arrX[i], &arrY[i]);
    }

    int onI = 0;
    int onII = 0;
    int onIII = 0;
    int onIV = 0;
    int onAsix = 0;
    for(int j = 0; j < n; j++){
        if(arrX[j] > 0 && arrY[j] > 0){
            onI++;
        }
        if(arrX[j] < 0 && arrY[j] > 0){
            onII++;
        }
        if(arrX[j] < 0 && arrY[j] < 0){
            onIII++;
        }
        if(arrX[j] > 0 && arrY[j] < 0){
            onIV++;
        }
        if(arrX[j] == 0 || arrY[j] == 0){
            onAsix++;
        }
    }
    printf("\n//////Result//////\nCo %d diem nam tren phan tu I\n", onI);
    printf("Co %d diem nam tren phan tu II\n", onII);
    printf("Co %d diem nam tren phan tu III\n", onIII);
    printf("Co %d diem nam tren phan tu IV\n", onIV);
    printf("Co %d diem nam tren truc toa do\n", onAsix);
}
int main(){
    printf("Hello world!\n");
    a();
    b();
    return 0;
}
