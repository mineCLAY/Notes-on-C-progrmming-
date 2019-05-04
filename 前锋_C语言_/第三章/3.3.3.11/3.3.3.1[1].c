//enum_example
#include <stdio.h>

//定义一个枚举类型
enum DAY {SUN , MON , WED , THU , FRI , SAT} yesterday , today = MON;
int main(){
  //定义一个枚举变量
  enum DAY tomorrow;
  //显示类型转换
  yesterday = (enum DAY) (today - 1);
  tomorrow = today + 1;
  printf("yesterday = %d\n" , yesterday);
  printf("today = %d\n" , today);
  printf("tomorrow = %d\n" , tomorrow);
  return 0;
}
