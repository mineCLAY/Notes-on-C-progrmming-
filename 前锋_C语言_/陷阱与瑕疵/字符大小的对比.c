/*
 * C++ 与 C 有 95%(大概) 的兼容性可是
 * 可是也有不同
 * 比如直接 sizeof('a') C++ 中是一个字节
 * 而 C 语言可能是 4、8 个字节
 * 如下面的代码：
 */

#include <stdio.h>

int main(void){
    printf("sizeof('a') = %lu\n" , sizeof('a'));
    //　在　Ｃ　语言里 , 'a' = 97 , sizeof('a') 转换为 sizeof(97)

    //　定义成变量可以避免这种问题
    char ch = 'a';
    printf("sizeof(ch) = %lu\n" , sizeof(ch));

    // 加强制类型准话你也可以避免这种问题
    printf("sizeof((double)ch) = %lu\n" , sizeof((char)'a'));

    return 0;
}
