//小写字母换成大写字母

#include <stdio.h>

void main(){
    char a , b;
    a = 'a';
    b = 'b';
    a = a - 32;
    b = b - 32;
    printf("%c , %c \n%d , %d\n" , a , b , a , b)
}
