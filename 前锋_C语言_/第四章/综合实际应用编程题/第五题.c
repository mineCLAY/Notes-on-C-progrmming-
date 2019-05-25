/*
 * Complete_Square_For_mula
 * 编程 , 从键盘输入 a 和 b 的值
 * 验证:
 * (a + b)平方 = a平方 + 2ab + b平方
 */
 
#include <stdio.h>

int main(void){
    int a , b;
    printf("输入 a 和 b:\n");
    scanf("%d %d" , &a , &b);
    if((a + b) * (a + b) == (a * a + 2 * a * b + b * b)){
        printf("(a + b) * (a + b) = %d\n" , (a + b) * (a + b));
        printf("(a * a + 2 * a * b + b * b) = %d\n" , (a * a + 2 * a * b + b * b));
    } else {
        printf("(a + b) * (a + b) != (a * a + 2 * a * b + b * b)");
        printf("再检查一下程序 , 一定是搞错了.\n");
    }
    return 0;
}
