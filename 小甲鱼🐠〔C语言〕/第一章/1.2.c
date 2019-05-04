#include <math.h>
#include <stdio.h>

int main(){
    double a , s;
    float x;
    printf("input nymber:\n");
    scanf("%f" , &x);
    s = sin(x);
    printf("sine of %f is %f" , x , s);
    return 0;
    }
