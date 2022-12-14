/*
a. Nhập 3 giá trị ngày, tháng, năm. Hãy tìm ngày kề SAU của ngày vừa nhập.
b. Nhập 3 giá trị ngày, tháng, năm. Hãy tìm ngày kề TRƯỚC của ngày vừa nhập.
*/
#include <stdio.h>
#include <stdlib.h>

void february(int day, int year){
    if(day == 1){
        printf("Before day: 31/1/%d\n", year);
        printf("After day: 2/2/%d\n", year);
    }
    if(day == 28){
        printf("Before day: 27/2/%d\n", year);
        printf("After day: 1/3/%d\n", year);
    }
    if(day > 1  && day < 28){
        printf("Before day: %d/2/%d\n", day-1, year);
        printf("After day: %d/2/%d\n", day+1, year);
    }

}
void month30(int day, int month, int year){
    if(month == 12){
        if(day == 30){
            printf("Before day: 1/1/%d\n", year+1);
            printf("After day: 29/12/%d\n", year);
        }
    }
    if(month != 12){
        if(day == 1){
            printf("Before day: 31/%d/%d\n", month-1, year);
            printf("After day: 2/%d/%d\n", month, year);
        } else {
            printf("Before day: %d/%d/%d\n", day-1, month, year);
            printf("After day: %d/%d/%d\n", day+1, month, year);
        }
    }
}
void month31(int day, int month, int year){
    if(month == 1){
        if(day == 1){
            printf("Before day: 30/12/%d\n", year-1);
            printf("After day: 2/1/%d\n", year);
        }
    } else {
        if(day == 31){
            printf("Before day: 30/%d/%d\n", month, year);
            printf("After day: 1/%d/%d\n", month+1, year);
        } else {
            if(day == 1){
                if(month == 3)
                printf("Before day: 28/2/%d\n", year);
                printf("After day: 2/3/%d\n", year);
            } else {
                printf("Before day: %d/%d/%d\n", day-1, month, year);
                printf("After day: %d/%d/%d\n", day+1, month, year);
            }
        }
    }
}

int main()
{   int day, month, year;
    int valid = 0;

    while(valid == 0){
    printf("Enter time: ");
    scanf("%d%d%d", &day, &month, &year);
        if(day < 1 || day > 31 || month < 0 || month > 12){
            printf("Invalid time!\a");
            valid = 1;
        } else {
            if(month == 1 || month == 3 || month == 5 || month == 7 || month == 9 || month ==11){
                month31(day, month, year);
            }
            if(month == 2){
                if(day > 28){
                    printf("Invalid time!\a");
                    valid = 1;
                } else {
                    february(day, year);
                }
            }
            if(month == 4 || month == 6 || month == 8 || month == 10 || month == 12){
                if(day > 30){
                    printf("Invalid time!\a");
                valid = 1;
                } else {
                    month30(day, month, year);
                }
            }
        }
    }
    return 0;
}
