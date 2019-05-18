//三目运算符
//<Expression_1> ? <Expression_2>:<Expression_3>
//<表达式_1> ? <表达式_2>:<表达式_3>
//condition ? iftrue:else

#include <stdio.h>

int main(void){
    int a , b , c;
    printf("输入 3 个整数 , 以空个隔开 , 回车结束\n");
    scanf("%d %d %d" , &a , &b , &c);
    int max = a > b ? a  > c ? a : c : b > c ? b : c;
    printf("max = %d\n" , max);
    return 0;
}
