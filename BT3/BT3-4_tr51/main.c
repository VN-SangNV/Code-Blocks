/*
  Theo quy định, phân biệt 3 loại điện trong thanh toán:
điện tiêu dùng (loại 1), điện sản xuất (loại 2) và điện kinh doanh (loại 3)
  Mỗi loại có một cách thanh toán riêng.
 1.Đối với loại điện tiêu dùng 50KWh đầu tiên mỗi Kwh tính với giá trị A1 đồng,
từ KWh thứ 51 tới Kwh thứ 150 được tính với giá B1, còn từ Kwh thứ 151 trở đi mỗi KWh tính với giá C1 đồng.
 2.Đối với lại điện sản xuất 200KWh đầu tiên mỗi Kwh tính với giá A2 đồng,
từ KWh thứ 201 tới KWh thứ 1000 được tính với giá B2 đồng, còn từ KWh 1001 trở đi mỗi KWh tính với giá C2 đồng.
 3.Đối với loại điện kinh doanh 100KWh đầu tiên mỗi KWh tính với giá A3,
từ KWh thứ 101 đến KWh thứ 200 tính với giá B3 đồng, còn từ KWh thứ 201 trở đi tính với giá C3 đồng.
  Công ty Alpha có 3 đồng hồ điện tương ứng với 3 loại. Chỉ số đầu tháng cuối tháng đối với loại 1 lần lượt là X1 và Y1,
loại 2 là X2 và Y2, loại 3 là X3 và Y3.
  Yêu cầu: Tính tổng số tiền T mà công tỷ phải trả trong tháng. Dữ liệu nhập vào từ bàn phím.
6 số nguyên X1, Y1, X2, Y2, X3, Y3 (0 <= X1 < Y1 <= 10^7, 0 <= X2 < Y2 <= 10^7, 0 <= X3 < Y3 <= 10^7)
9 số nguyên A1, B1, C1, A2 , B2, C2, A3, B3, C3 (0 <= A1, B1, C1, A2 , B2, C2, A3, B3, C3 <= 1000)
  Kết quả xuất ra màn hình: số nguyên T
Ví dụ: Dữ liệu nhập vào là:
    0 100 0 700 0 500
    1 2 3 2 3 4 3 4 5
    Thì kết quả là: 4250
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1.Đối với loại điện tiêu dùng 50KWh đầu tiên mỗi Kwh tính với giá trị A1 đồng,
từ KWh thứ 51 tới Kwh thứ 150 được tính với giá B1, còn từ Kwh thứ 151 trở đi mỗi KWh tính với giá C1 đồng.
*/
int value1(int x1, int y1, int a1, int b1, int c1){
    int value1 = y1 -x1;
    int money1;

    if(x1 < 0 || x1 > y1 || y1 > pow(10, 7) || y1 < 0 || a1 < 0 || b1 < 0 || c1 < 0 || a1 > 1000 || b1 > 1000 || c1 > 1000){
        money1 = -1;
    } else {
        if(value1 > 150){
        money1 =  (value1 - 150)*c1+ 100*b1 + 50*a1;
        }
        if(value1 > 50 && value1 < 151){
            money1 = (value1 - 50)*b1 + 50*a1;
        }
        if(value1 < 51){
            money1 = value1*a1;
        }
    }
    return money1;
}

/*
2.Đối với lại điện sản xuất 200KWh đầu tiên mỗi Kwh tính với giá A2 đồng,
từ KWh thứ 201 tới KWh thứ 1000 được tính với giá B2 đồng, còn từ KWh 1001 trở đi mỗi KWh tính với giá C2 đồng.
*/
int value2(int x2, int y2, int a2, int b2, int c2){
    int value2 = y2 - x2;
    int money2;

    if(x2 < 0 || x2 > y2 || y2 > pow(10, 7) || y2 < 0 || a2 < 0 || b2 < 0 || c2 < 0 || a2 > 1000 || b2 > 1000 || c2 > 1000){
        money2 = -1;
    } else {
        if(value2 > 1000){
        money2 = (value2 - 1000)*c2 + 800*b2 + 200*a2;
        } else {
            if(value2 < 1001 && value2 > 200){
            money2 = (value2 - 200)* b2 + 200*a2;
            } else {
                money2 = value2*a2;
            }
        }
    }
    return money2;
}

/*
3.Đối với loại điện kinh doanh 100KWh đầu tiên mỗi KWh tính với giá A3,
từ KWh thứ 101 đến KWh thứ 200 tính với giá B3 đồng, còn từ KWh thứ 201 trở đi tính với giá C3 đồng.
*/
int value3(int x3, int y3, int a3, int b3, int c3){
    int value3 = y3 - x3;
    int money3;

    if(x3 < 0 || x3 > y3 || y3 > pow(10, 7) || y3 < 0 || a3 < 0 || b3 < 0 || c3 < 0 || a3 > 1000 || b3 > 1000 || c3 > 1000){
        money3 = -1;
    } else {
        if(value3 > 200){
            money3 = (value3 - 200)*c3 + 100*b3 + 100*a3;
        }
        if(value3 < 201 && value3 > 100){
            money3 = (value3 - 100)*b3 + 100*a3;
        }
        if(value3 < 101){
            money3 = value3*a3;
        }
    }
    return money3;
}

/*
Yêu cầu: Tính tổng số tiền T mà công tỷ phải trả trong tháng. Dữ liệu nhập vào từ bàn phím.
6 số nguyên X1, Y1, X2, Y2, X3, Y3 (0 <= X1 < Y1 <= 10^7, 0 <= X2 < Y2 <= 10^7, 0 <= X3 < Y3 <= 10^7)
9 số nguyên A1, B1, C1, A2 , B2, C2, A3, B3, C3 (0 <= A1, B1, C1, A2 , B2, C2, A3, B3, C3 <= 1000)
  Kết quả xuất ra màn hình: số nguyên T
*/
int main()
{
    int x1, y1, x2, y2, x3, y3;
    int a1, b1, c1, a2 , b2, c2, a3, b3, c3;
    int sum;
    int money1 = 0;
    int money2 = 0;
    int money3 = 0;
    int status = 0;

    while(status == 0){
        printf("Nhap gia tri so dien 1: ");
        scanf("%d%d", &x1, &y1);
        printf("Nhap gia tri tien dien 1: ");
        scanf("%d%d%d", &a1, &b1, &c1);

        printf("Nhap gia tri so dien 2: ");
        scanf("%d%d", &x2, &y2);
        printf("Nhap gia tri tien dien 2: ");
        scanf("%d%d%d", &a2, &b2, &c2);

        printf("Nhap gia tri so dien 3: ");
        scanf("%d%d", &x3, &y3);
        printf("Nhap gia tri tien dien 3: ");
        scanf("%d%d%d", &a3, &b3, &c3);

        money1 = value1(x1, y1, a1, b1, c1);
//        printf("Money1 = %d\n", money1);
        money2 = value2(x2, y2, a2, b2, c2);
//        printf("Money2 = %d\n", money2);
        money3 = value3(x3, y3, a3, b3, c3);
//        printf("Money3 = %d\n", money3);
        sum = money1 + money2 + money3;

        if(money1 == -1 || money2 == -1 || money3 == -1){
            status = 1;
            printf("Gia tri khong hop le!\a");
        } else {
            printf("So tien can tra la: %d\n", sum);
        }
    }
    return 0;
}
