/*
 * Example 计算存款
 */

#include <stdio.h>

int main(void) {

  float p0 = 1000 , r1 = 0.036 , r2 = 0.0225 , r3 = 0.018 , p1 , p2 , p3;
							// 定义变量

  p1 = p0 * (1 + r1);					// 计算活期本息和
  p2 = p0 * (1 + r2);					// 计算一年定期本息和
  p3 = p0 * (1 + r3 / 2) * (1 + r3 / 2);		// 计算存两次半年定期的本息和
  
  printf("p1 = %f\np2 = %f\n3 = %f\n" ,
	  p1 , p2 , p3);				// 输出结果

  return 0;	
}
