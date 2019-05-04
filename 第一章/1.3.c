// 求两个整数中较大者

#include <stdio.h>

//主函数
int main() //定义主函数
{ //对函数体开始
  int max(int x , int y); //对调用函数 max 的声明
  int a , b , c; //定义变量 a , b , c
  scanf("%d%d" , a , b); //输入变量 a 和 b 的值
  c = max(a , b); //调用 max 函数 , 将得到的值赋给 c
  printf("max = %d" , c); //输出 c 的值
  return 0; //返回函数值为 0
} //主函数体结束

//求两个整数中的较大者的 max 函数
int max(int x , int y){ //定义 max 函数 , 函数值为整数 , 形式参数 x 和 y 为整型
  int z; //max 函数中的声明部分 , 定义本函数中用到的变量 z 为整型
  if(x < y)z = x; //若 x > y 成立 , 将 x 的值赋给变量 z
  else z = y; //否则(即 x > y 不成立) , 将 y 的值赋给变量 z
  return (z); //将 z 的值作为 max 函数值 , 返回到调用 max 函数的位置
}
