//编程来计算 , 刘韵姿 一天一包烟 , 烟的价钱从键盘输入 , 一年 365 天 . 试计算从 20 岁到 70 岁之间从不抽烟会省下多少钱 . (Prompt: 用整型或长整型)
 
#include <stdio.h>

  int main(){
  int year = 365 ,  age = 50 ,  price , Total_price;
  printf("输入一包烟的价钱(整型):\n");
  scanf("%d" , &price);
  Total_price = year * age * price;
  printf("一包烟 %d 元 , 20 岁到 70 岁(50 年)省下￥:%d\n" , price , Total_price);
  return 0;
}
