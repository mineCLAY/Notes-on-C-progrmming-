/*
//定义一个枚举类型 , 王者荣耀的游戏 , 定义十个我最喜欢的英雄归来 , 然后排序输出前三名

#include <stdio.h>

enum YINGXIONG{zhangliang , sunwukong , nakelulu , zhaoyun , hanxin , donghuangtaiyi , liyuanfang , ake , CLAY , MC , PGOne} a , b = CLAY , c;
int main(void){
  a = (enum YINGXIONG) (b - 1);
  c = b + 1;
  printf(" 1 阿轲\n 2 孙悟空\n 3 娜可露露\n 3 赵云\n 4 韩信\n 5  东皇太一\n 6 李元芳\n 7 阿轲\n 8 CLAY\n 9 MC\n 10 PG One\n\n");
  printf("第一喜欢 = %d\n" , a);
  printf("第二喜欢 = %d\n" , b);
  printf("第三喜欢 = %d\n" , c);
  return 0;
}
*/


//枚举内部定义的值都是递增关系的顺序增长 , 编程试试是否可以两个值相等或是递减会怎么样
/*
//相等

#include <stdio.h>

enum XIANGDENG {one , tow , san , four};
int main(void){
  enum XIANGDENG e , a;
  e = one;
  a = one;
  if("e == a"){
    printf("enum e 和 a 一致\n");
  }
  return 0;
}

运行: enum e 和 a 一致
*/

/*
//递减

#include <stdio.h>

enum DIJIAN {one = 4 , tow = 3 , three =2 , four = 1};
int main(){
  enum DIJIAN a = one , b = tow , c = three , d = four;
  printf("%d , %d , %d , %d\n" , a , b , c , d);
  return 0;
}

运行: 4 , 3 , 2 , 1
