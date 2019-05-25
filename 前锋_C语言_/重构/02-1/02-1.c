/*
 * Declarations_Refactoring
 * 声明重构
 */

#include <stdio.h>

int main(void){
    char *head = "There is a cycle to things divided by eight."; //事物有一个循环除以八
    printf("%s\n" , head);
    double denom = 8;
    for (int i = 1; i <= 6; ++i){
        double ratio = i / denom;
        printf("ratio = %g\n" , ratio);
    }
    return 0;
}

/*
 * 输出:
 * There is a cycle to things divided by eight.
 * ratio = 0.125
 * ratio = 0.25
 * ratio = 0.375
 * ratio = 0.5
 * ratio = 0.625
 * 0.75
 */
