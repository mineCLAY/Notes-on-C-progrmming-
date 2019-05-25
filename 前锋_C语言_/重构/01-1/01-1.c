/*
 * Variable_naming
 * 变量命名
 */

#include <stdio.h>

int main(void){
  //Origignal Code 原版代码
  //身高单词可能不会写 , 为了省事 , 直接写了中文拼音
  int shengao;
  
  //Refactoring 1 重构 1
  //中文拼音表示是极其低俗 , 原因不言而喻 , 盈余第国际标准
  int height;
  
  //Refactoring 2 重构 2
  //有缺陷 , 这个高度不能表示最大高度还是最小高度
  int min_height;
  
  //Refactoring 3 重构 3
  //为了完美 , 再构思 , 没有类型 , 高度没有单位
  double min_double;
  
  //Clean Code Applied
  //空姐要求 , 最低身高为 1.63 米
  min_double = 1.63;
  printf("空姐最低身高要求为: %1.2f 米\n" , min_double);
  
  //Refactoring
  //空姐要求 , 最大年龄为 50 岁
  int max_int_age = 50;
  printf("空姐最高年龄为: %d 岁\n" , max_int_age);
  //很明显 , 多了一个变量后 min_double 就不够完美了 , 所以改成:
  double min_double_height = 1.63;
  printf("空姐最低身高要求: %1.2f\n" , min_double_height);
  return 0;
}
