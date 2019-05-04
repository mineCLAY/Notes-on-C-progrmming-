#include <stdio.h>

int main(){
    int a = 15;
    float b = 123.12345678;
    double c = 12345678.12345678;
    char d = 'p';
    printf("a = %d , %5d , %o , %x\n" , a , a , a , a);
    printf("b = %f , %lf , %5.4lf , %e\n" , b , b , b , b);
    printf("c = %lf , %f , %8.4lf\n" , c , c , c);
    printf("d = %c , %8c\n" , d , d);
    return 0;
}        
