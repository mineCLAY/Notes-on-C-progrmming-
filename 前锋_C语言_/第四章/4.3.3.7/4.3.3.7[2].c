/*
 * 雯静的择偶标准是:
 * 有车、有房、没爹没娘
 * 或者存款大于或等于 500 万元
 */
 
#include <stdio.h>

int main(void){
  short car , house , parents;
  long deposit;
  printf("How many cars do you have?\n"); //问用户有几辆车
    scanf("%hd" , &car); //让用户输入有几辆车
  printf("How many houses do you have?\n"); //问用户有几座房
    scanf("%hd" , &house); //让用户输入有几座房
  printf("How many parents do you have?\n"); //问用户有没有爹娘
    scanf("%hd" , &parents); //让用户输入有没有爹娘
  printf("How many deposit do you have(单位万元)?\n"); //问用户有多少存款
    scanf("%ld" , &deposit); // 让用户输入有多少存款
  if ((car && house) && (!parents) || (deposit >= 500)){ //判断有没有车、房、爹娘、 存款是多少
    printf("OK 就你了!\n"); //输出结果
  } else { //if 不成立就执行 else 也就是其它
    printf("你是不是该安静地走开\n"); //输出结果
  }
  return 0; //函数返回值 0
}
