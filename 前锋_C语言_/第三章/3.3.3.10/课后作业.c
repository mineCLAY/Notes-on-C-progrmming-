/*
//定义一个人的年龄应该用什么类型?为什么?

答:
用 int 类型 , 因为整型更好容易表示年龄 , 毕竟可以偷懒不需要写月、日
*/

/*
//'A' 与 'a' 一样吗? '3' 等同于 3 吗?

答:
'A' 与 'a' 不一样 , 因为 A 的 ASCLL 值和 a 不一致 ; '3' 不等同于 3 , 因为 '3' 可以存数值并且占 1 Byte 而 3 似乎不同
*/

/*
//写一个程序 , 屏幕上打印你最喜欢的一首诗

答:
#include <stdio.h>

int main(void){
  pritnf("······"); //暂时无最喜欢的诗 , 以后补上
  return 0;
}
*/

/*
//键盘输入 , 一个小写字母 , 转换成大写字母并打印.

答:
#include <stdio.h>

int main(void){
  int a;
  printf("输入一个小写字母【是小写】");
  scanf("%c" , &a);
  printf("小写 = %c\n大写 = %c\n" , a , a - 32);
  getchar();
  return 0;
}
