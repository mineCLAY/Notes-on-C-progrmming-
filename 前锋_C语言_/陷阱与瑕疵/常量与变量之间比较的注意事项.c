#include <stdio.h>

int main(void){
  int num = 888;

  printf("输入彩票的号码:\n");
  scanf("%d" , &num);

/*
  //　如果忘记了一个 =　而赋值符号后的值　是非　０　的数
  if (num = 57684388) { //　也是真 , 则会永远执行
      printf("中奖五百万!\n");
  }
*/
  // 可以用一个技巧
  if (57684388 == num) { //　把判断的值放到 == 前面
      printf("中奖五百万!\n");
  } else {
      printf("没有中奖!\n");
  }

  return 0;
}
