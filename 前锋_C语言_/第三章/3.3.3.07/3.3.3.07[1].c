#include <stdio.h>

int main()
{
    int b_val;
    //声明(定义)两个变量 , 可以声明多个
    signed int s_val , s_val2;
    //声明变量的时候就初始化值 , 叫做变量初始化 , 也叫变量赋初值
    unsigned int u_val = 4294967295;
    b_val = 2147483647;
    s_val = -217483647;
    //未赋值的变量 s_val2 的值是未知的 , 随机的
    printf("b_val = %d\ns_val = %d\ns_val2 = %d\nu_val = %u\n" , b_val , s_val , s_val2 , u_val);
    short sh_val = 32767;
    signed short ssh_val = -32768;
    unsigned short ush_val = 65535;
    printf("sh_val = %hd\nssh_val = %hd\nush_val = %u\n" , sh_val , ssh_val , ush_val);
    return 0;
}
