/*
 * 4.01. Example_Peintf.c
 * 
 * 最常用的类型打印
 */

#include <stdio.h>

  int main(void) {

  // 字符型: %C
  char c = 'c';
  printf("%c\n" , c);

  // 整型: %hd , %d , %ld , %o , %x
  int idata = 666;
  printf("idata = %hd = %d = %ld = %#o , = %#x" ,
	 (short)idata , idata ,(long)idata , idata , idata);
  // 浮点型 %f , %lf , %LF , %e , %g
  double ddata = 1.6180339878;
  printf("ddata = %f = %lf = %LF = %e = %g" ,
	  ddata , ddata , (long double)ddata , ddata , ddata);

  // 字符串: %s
  char *str = "不劳而得之财必然消耗 , 勤劳积蓄必见加赠.";
  printf("%s\n" , str);

  // 指针: %p
  printf("%p\n" , &idata);

  return 0;
}
