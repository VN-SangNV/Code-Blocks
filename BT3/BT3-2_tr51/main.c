/*
Bảng đồng hồ điện tử gồm một dãy 3 số h, m, s thể hiện tương ứng giờ, phút, giây của thời điểm hiện tại.
Cứ sau mỗi giây, giá trị của bộ 3 số h, m, s sẽ thay đổi thành h1, m1, s1 tương ứng với thời điểm mới.
Nhập vào 3 số h, m, s tìm h1, m1, s1 trong đó 0 <= h <= 23 và 0 <= m, s <= 59.
Ví dụ: h, m, s là 8 30 0 thì kết quả h1, m1, s1 là 8 30 1
        h, m, s là 23 59 59 thì kết quả h1, m1, s1 là 0 0 0
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
int main()
{
    int h, m, s;
    bool valid = true;

    do{
        printf("Enter h, m, s: ");
        scanf("%d%d%d", &h, &m, &s);
        if(h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s> 59){
            printf("Invalid value!\a");
            valid = false;
        } else {
            s++;
            if(s >= 59){
                m++;
                s = 0;
            }
            if(m > 59){
                m = 0;
                h++;
            }
            if(h > 23){
                h = 0;
            }
            system("cls");
            printf("Time: %dh %dm %ds\n", h, m ,s);
        }
    } while(valid == true);
    return 0;
}
