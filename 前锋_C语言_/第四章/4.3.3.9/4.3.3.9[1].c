//三目运算符
//<Expression_1> ? <Expression_2>:<Expression_3>
//<表达式_1> ? <表达式_2>:<表达式_3>
//condition ? iftrue:else

#include <stdio.h>

int main(void){
    int tmp1 = 123 , tmp2 = 456;
    int max = (tmp1 > tmp2) ? (tmp1):(tmp2);
    printf("max = %d\n" , max);
    return 0;
}
