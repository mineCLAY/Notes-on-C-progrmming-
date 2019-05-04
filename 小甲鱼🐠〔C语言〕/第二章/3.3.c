//整型数据的溢出

#include <stdio.h>

int main(){
    int a , b;
    a = 32767;
    b = a + 1;
    printf("%d , %d\n" , a , b);
    return 0;
}
