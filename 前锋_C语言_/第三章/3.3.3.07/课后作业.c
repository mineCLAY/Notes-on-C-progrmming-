/*
//把 long、long long 的各种组合像第一个例子赋值并打印除结果
#include <stdio.h>
int main(void){
  long int a = -2147483648;
  unsigned long b = 4294967295; 
  long long int c = 9223372036854775807;
  unsigned long long d = 9223372036854775807;
  printf("long int = %ld\nunsigned long = %lu\n" , a , b);
  printf("long long int = %lld\nunsigned long long = %llu\n" , c , d);
  return 0;
}
*/

/*
//键盘输入四个数 , 变成法呢别计算这四个数的加、减、乘、除运算
#include <stdio.h>
int main(){
  double a , b , c , d;
  printf("输入第一个数:\n");
  scanf("%lf" , &a);
  printf("输入第二个数:\n");
  scanf("%lf" , &b);
  printf("输入第三个数:\n");
  scanf("%lf" , &c);
  printf("输入第四个数:\n");
  scanf("%lf" , &d);
  double jia = a + b + c + d;
  printf("四个数相加的和 = %lf\n" , jia);
  double jian = a - b - c - d;
  printf("四个数相减的差 = %lf\n" , jian);
  double cheng = a * b * c * d;
  printf("四个数相乘的积 = %lf\n" , cheng);
  double chu = a / b / c / d;
  printf("四个数相除的商 = %lf\n" , chu);
  return 0;
}
*/
