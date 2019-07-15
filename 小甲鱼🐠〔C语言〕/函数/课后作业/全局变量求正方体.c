/*
 * 输入正方形的长、宽、高
 * length width height
 * 求体积及三个面
 * x * y、x * z、y * z
 * 的面积
 */

#include <stdio.h>

int s1 , s2 , s3;

int vs(int l , int w , int h){

  int v;
  v = l * w * h;
  s1 = l * w;
  s2 = l * h;
  s3 = w * h;

  return v;
}

int main(void) {

  // 定义所需变量
  int v , length , width , height;
  // 定义存放结果的变量
  int result;

  // 叫用户输入长款高
  puts("Enter length width and  height:");
  // 将用户输入的值赋给变量
  scanf("%d %d %d" ,
         &length , &width , &height);

  // 将函数返回值赋给变量 result
  result = vs(length , width , height);
  // 输出结果的
  printf("v: %d\ts1: %d\ts2: %d\ts3: %d\n" ,
          result , s1 , s2 , s3);

  return 0;
}
