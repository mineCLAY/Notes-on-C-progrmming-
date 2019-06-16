/*
 * 输入一个浮点数
 * 输出它的绝对值
 * 保留两位小数
 * 本题有多种方法
 * 在数学库中
 * 有函数 fabs
 * 可以用来计算浮点数的绝对值。
 * 使用数学库中的函数时
 * 别忘了 #include <math.h>
 */
 
#include <stdio.h>
#include <math.h>

int main(void) {

    float f;

    scanf("%f" , &f);
    f = fabs(f);
    printf("%.2f\n" , f);

    return 0;
}
