//Comparison 对照

/*
#include <stdio.h>
int main(void){
  //01. Original Code 原版代码
  if (1 == flag) //表示 flag 为真
  if (0 == flag) //表示 flag 为假
  //02. Analysis and Thinking
  //a. 上面的代码虽然看起来是正确的 , 但不具备很好的可移植性.
  //b. 所以 ， 我们可以通过宏定义形式来写成如下的形式
  
  //03. Refactoring Code 重构代码
  if (true == flag) //表示 flag 为真
  if (false == flag) //表示 flag 为假
  
  //04. Cotinue Analysis //继续分析
  //a. 上面的代码虽然可读性较好 , 但会因为 true 或 false
  //   的不同定义值而出错.
  //b. 因此 , 正确的写法应该如下
  //05. Clean Code //清洁代码
  if (flag); //表示 flag 为真
  if (!flag); //表示 flag 为加
  return 0;
}
*/

/*
#include <stdio.h>
int main(void){
  //空姐身高要求 1.63 ~ 1.75 米
  double max_double;
  printf("输入你的身高: (单位厘米)\n");
  scanf("%lf" , &max_double);
  max_double /= 100;
  int flag;
  if ((max_double >= 1.63) && (max_double <= 1.75)){
    flag = 1;
  } else {
    flag = 0;
  } if (flag) {
    printf("你通过了空姐身高标准.\n");
  } else if (!flag) {
    printf("你未通过空姐身高标准.\n");
  }
  return 0;
}
*/
