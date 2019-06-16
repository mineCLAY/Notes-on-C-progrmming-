#include <stdio.h>
#include <math.h>

int main(void) {

    float f;

    scanf("%f" , &f);
    f = fabs(f);
    printf("%.2f\n" , f);

    return 0;
}
