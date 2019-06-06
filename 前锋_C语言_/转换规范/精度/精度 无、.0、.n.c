/*
 * 2.04_Example_Precision.c
 * 精度:
 * 精度 , 用于控制输出数值的精度
 *
 * 精度格式符以 . 开头 , 后跟十进制整数
 * a. 如果输出数字 , 则表示小数的位数.
 * b. 如果输出的是字符 , 则表示输出字符的个数.
 * c. 若实际位数大于所定义的精度数 , 则截去超过的部分
 */

#include <stdio.h>

int main(void) {
  double pi = 3.1415926;

  // 01. 无
  //     系统默认精度
  printf("%lf\n" , pi);

  // 02. .0
  //      对于 d、i、o、u、x、X 等类型 , 采用系统默认精度.
  //      对于 f、F、e、E 等浮点数类型 , 不输出小数部.
  printf("%.0lf\n" , pi);
  printf("%.0lf\n" , pi);

  // 03. .n
  //      至少输出 n 位数字.
  //      a. 如果对应的输出参数少于 n 位数字 , 则在其左端用 0 填充.
  //      b. 如果对应的输出参数多于 n 位数字 , 则不对其进行减短.
  int emergency = 119;
  printf("%.5d\n" , emergency);
  printf("%.2d\n" , emergency);

  // 对于浮点数类型 , 输出结果保留 n 位小数.
  // 如果小数部分多于 n 位 , 则对其四舍五入.
  float float_var = 123.1234567;
  printf("float_var = %f , %lf , %5.4lf , %e\n" ,
          float_var , float_var , float_var , float_var);

  // 对于 g 和 G 类型符 , 最多输出 n 位有效数字
  printf("%.10g , %.10G\n" , pi , pi);

  // 对于 s 类型符 , 如果对应的输出串的长度不超过 n 个字符
  // 则将其原样输出 , 否则输出其头 n 个字符
  printf("%6.9s\n" , "Abraham Yu");
  printf("%6.9s\n" , "Yu");

  return 0;
}
