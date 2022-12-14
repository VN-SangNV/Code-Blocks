#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){
    return a + b;
}
void water(){
    int budget = 4900;
    int water = 4000;

    for(int i = 0; i < 10; i++){
        budget += 2500;
        water +=4000;

        if((budget*i)/(water*i) >= 0.75){
            printf("So loi loc can thay la: %f", i);
            break;
        }
    }

}
int main()
{
    int sumX = sum(5, 9);
    printf("Tong hai so la: %d\n", sumX);
    water();
    return 0;
}
