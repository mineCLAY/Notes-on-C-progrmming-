//Compound_Operators._
//符合运算符

#include <stdio.h>

int main(void){
    int a = 3 , b = 6 , c = 10 , d = 0xAAAA , e = 0x5555;
    a += b; //a = a + b;
    b %= a; //b = b % a;
    c >>= 1; //c = c >> 1;
    d |= e; //d = d | e;
    printf(" a = %d\n b = %d\n c = %d\n d = %X\n" , a , b , c , d);
    return 0;
}
