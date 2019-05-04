/*
  输入三角形的三边长 , 求三角形面积
  解题思路
  
  已知三角形的三边长a , b , c , 则该三角形的面积公式为:
  area = √￣s(s - a)(s - b)(s - c)￣
  
  其中s = (a + b + c)/2
*/

#include <stdio.h>
#include <math.h>

void main(){
  float sqrt;
  float a , b , c ,s , area;
  scanf("%f,%f,%f" , &a , &b , &c);
  s = 1.0/2*(a+b+c);
  area = sqrt*(s*(s-a)*(s-b)*(s-c));
  printf("a = %7.2f , b = %7.2f , c = %7.2f , s = %7.2f\n" , a , b , c , s);
  printf("area = %7.2f\n" , area);
}
