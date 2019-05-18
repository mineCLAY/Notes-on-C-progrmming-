//01. 编程来实现 , 求两个浮点数中的小的值.

#include <stdio.h> //编辑头文件 stdio.h 标准输出输入

int main(void){ //定义主函数 main 并且开始
  double a , b; //定义两个双精度浮点数 a , b
  printf("输入两个浮点数:\n"); //叫用户输入两个浮点数
  scanf("%lf%lf" , &a , &b); //让用户输入 a , b 的值 并存入 a , b
  double minimum = (a < b) ? (a) : b; //判断谁最小 并赋值给 minimum
  printf("最小值: %ld" , minimum); //输出 a , b 中最小值
  return 0; //函数返回值 0
} //main 主函数结束 & 程序结束

//02. 分析代码: ret_val = a > b ? a > c ? a : c : b > c ? b : c; 的: condition、true part、 false part , 几部分 , 并1和朋友讨论(我暂时没有可以讨论的朋友)

  ret_val = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
  //       conditio   //  true part     //   false part
