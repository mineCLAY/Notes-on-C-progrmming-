/*
 * 5.2 Example_scanf.c
 */

#include <stdio.h>

int main(void) {

  double width , height;
  printf("输入长方形的宽、高(unit cm):\n");
  scanf("%lf%lf" , &width , &height);

  printf("width: %lf height: %lf\n" , width , height);

  printf("长方形的周长是: %lf 厘米\n" , 2 * (height + width));
  printf("长方形的面积是: %lf 平方厘米\n" , height * width);

  return 0;
}
