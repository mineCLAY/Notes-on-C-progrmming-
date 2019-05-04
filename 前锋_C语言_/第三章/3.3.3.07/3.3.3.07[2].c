#include <stdio.h>

int main(void){
  long long li1 , li2;
  printf("这是一个简单的加、减、乘、除法计算器.");
  printf("请输入第一个数:\n");
  scanf("%lld" , &li1);
  printf("请输入第二个数:\n");
  scanf("%%lld" , &li2);
  long long result = li1 + li2;
  printf("相加的结果是: %lld\n" , result);
  result = li1 - li2;
  printf("相减的结果的结果是: %lld\n" , result);
  printf("相乘的结果是:\n" , li1 * li2);
  printf("相除的结果是:\n" , li1 / li2);
  return 0;
}
