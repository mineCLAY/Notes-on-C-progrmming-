/*
 * sizeof 是 C 语言自带的 关键字 并不是 函数
 * sizeof 是单目运算符 返回的是操作数的字节数 
 * 用法:
 * sizeof expression (sizeof 表达式)
 * sizeof (type) (sizeof (数据类型))
 */
 
 #include <stdio.h>

int main(void){
    printf("sizeof(char) = %lu\n" , sizeof(char));
    printf("sizeof(short) = %lu\n" , sizeof(short));
    printf("sizeof(int) = %lu\n" , sizeof(int));
    printf("sizeof(long) = %lu\n" , sizeof(long));
    printf("sizeof(float) = %lu\n" , sizeof(float));
    printf("sizeof(double) = %lu\n" , sizeof(double));
    printf("sizeof(long double) = %lu\n" , sizeof(long double));
    return 0;
}

//以后都用这种标题 以前的 4.3.3.10 之类的不简洁明了 
//                                      -- HC
