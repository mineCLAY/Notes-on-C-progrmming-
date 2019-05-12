//键盘输入一个圆的半径 (单位厘米) , 打印圆的面积有多少平方厘米

#include <stdio.h>

int main(void){
  double r;
  printf("输入一个圆的半径(单位厘米): \n");
  scanf("%lf" , &r);
  double area = 3.14 * ((r / 100) * (r / 100));
  printf("圆的面积: %lf 平方米" , area);
  return 0;
}
