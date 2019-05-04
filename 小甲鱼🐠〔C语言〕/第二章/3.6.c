//实型数据的舍入误差

#include <stdio.h>

int main(void){
    float a , b;
    a = 123456.789e5;
    b = a + 20;
    printf("%f\n" , a);
    printf("%f\n" , b);
}
