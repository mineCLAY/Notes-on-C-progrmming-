#include <math.h>
#include  <stdio.h>

int max(int a , int b);    //函数说明
int main(){
    int x , y ,z;    //变量说明
    int max(int a , int b);    //函数说明
    printf("input two number:\n");
    scanf("%d%d" , &x , &y);    //输入x , y值
    z = max(x , y);    //调用max函数
    printf("maxnum = %d" , z);   //输出
}

int max(int a , int b){
    if(a > b)return a;
    else return  b;    //把结果调回主调函数
}
