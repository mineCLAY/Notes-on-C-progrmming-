#include <stdio.h>

int main(){
    int i;
    printf("请输入一个数:\n");
    scanf("%d" , i);
    printf("%d\n%d\n%d\n%d\n%d\n" , ++i , --i , i++ , i-- , -i--);
    return 0;
} 
