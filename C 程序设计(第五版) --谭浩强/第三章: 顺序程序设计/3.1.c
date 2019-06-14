/*
 * 有人用温度计测量出用华氏法表示的温度(如 64 °F)
 * 今要求把它转换为以摄氏法表示的温度(如 17.8 °F)
 */

#include <stdio.h>

int main(void) {

  float f , c;
  f = 64.0;
  c = (5.0 / 9) * (f - 32);

  printf("f = %f\nc = %f\n" , 
          f , c);

  return 0;	
}
