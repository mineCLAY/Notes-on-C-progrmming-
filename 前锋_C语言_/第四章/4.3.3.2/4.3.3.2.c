//运算优先级

#include <stdio.h>

int main(void){
  int val = 2 + 3 * 4;
  //结果: 14、20?
  //按照优先级原则: 先计算乘除再计算加减
  printf("val = %d\n" , val);
  //C 的运算顺序与数学课上学到的规则安全相同
  val = (2 + 3) * 4;
  printf("val = %d\n" , val);
  return 0;
}
