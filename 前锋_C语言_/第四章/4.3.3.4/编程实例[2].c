//按照国外的习俗 , 键盘输入 刘韵姿 有多少遗产(整数万元) . 分整份 , 十分之一奉献给上帝 . 余数分给穷人 , 如果没有余数就把百分之一给穷人 . 长子 大刘 分十分之九的三分之二 . 次女 女刘 分余下的三分之一的二分之一 . 小儿子 小刘 和姐姐分的一样多 . 编程打印各分出多少 ?

#include <stdio.h>

int main(void){
  int heritage;
  printf("输入 刘韵姿 有多少遗产[单位万元(整数)]: \n");
  scanf("%d" , &heritage);
  int GOD = heritage / 10; //定义一个整型变量 GOD 并赋值为遗产的十分之一
  printf("刘韵姿的遗产分给上帝: %d 万元\n" , GOD);
  int qiongren; //定义一个整型变量 qiongren 也就是 穷人
  if(0 == heritage % 10){ //判断余数是否为 0
    qiongren = heritage / 100; //如果是就将遗产的一百分之一赋值给 qiongren
  } else { //如果余数不为 0
    qiongren = heritage % 10; //那么就取余数给 qiongren
  }
    printf("刘韵姿的遗产分给穷人: %d 万元\n" , qiongren);
  int daliu = heritage * 0.6; //定义一个整型变量 daliu 也就是长子 大刘 并赋值
    printf("刘韵姿的遗产分给大刘: %d 万元\n" , daliu);
  int yu = heritage - GOD - qiongren; //定义一个整型变量 yu 也就是 heritage - GOD - qiongren 刘韵姿的余下的遗产
  int nvliu = yu / 6; //定义一个整型变量 nvliu 也就是次女 女刘 并赋值
    printf("刘韵姿的遗产分给女刘: %d 万元\n" , nvliu);
  int xiaoliu = nvliu; //定义一个整型变量 xiaoliu 也就是小儿子 小刘 并赋值
    printf("刘韵姿的遗产分给小刘: %d 万元\n" , xiaoliu);
  return 0;
}

//由此得出: 数据定有误差 !!!
