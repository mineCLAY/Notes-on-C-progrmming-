//把 100 ~ 200 之间不能被 3 整除的数输出

#include <stdio.h>

int main(void){
  int n;
  for (n = 101; n ; n++){ //n 赋初值 判断 n 是否为 1 如果是 则执行循环 接着 n++
    if (n == 200) //判断 n 是否等于 200
      break; //如果等于则退出循环
    else if (0 != n % 3){ //判断 n 是否能被 3 整除
      printf("100 ~ 200 不能被 3 整除的有: %d\n" , n); //如果不能则输出结果
      continue; //接着回到循环语句
    }
  }
  return 0; //main 主函数返回值 0
}

/*
提示说明: 当 n 能 3 整除时 , 执行 continue 语句 , 结束本次循环(即跳过 printf 函数语句)
只有 n 不能被 3 整除时才执行 printf 函数
*/
