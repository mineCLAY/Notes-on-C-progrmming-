/************************
*01. 怎么得到 8 / 3 的余数*
************************/

#include <stdio.h>

int main(void){ //定义主函数 main
  printf("8 / 3 的余数: %d\n" , 8 % 3); //求余数
  return 0; //函数返回值 0
}

//02. 质量为 79g 的铁块 , 密度是 7.9/cm3 , 这个铁块质量是多少 ? 重多少 ? 将这个铁块浸没于水中 , 排开水的质量是多少 ? 所受的浮力是多少 ?(g 取 10N/kg)

#include <stdio.h>

int main(void){ //定义主函数 main
  int a = 79; //定义铁块的重量
  int b = 79 / 7.9; //算铁块的质量
  printf("铁块的质量: %d\n" , b); //输出铁块的数据
  return 0; //stop , 这题我还不会以后算
}

//03. 3 个人在餐厅里吃饭 , 想分摊饭费 . 总共花费 217.62 元 , 他们还想留 15% 的消费 . 每个人该怎么付钱 ?

#include <stdio.h>

int main(void){
  float meal = 217.62 , tip = 217.62 * 15 / 100; //定义两个单精度浮点型变量 meal(饭钱) , tip(小费) 
  float total = meal + tip; //定义单精度浮点型变量 total(总花费)
  printf("平均每个人付钱: %f\n" , total / 3); //输出每个该付的钱
  return 0; //函数返回值 0
}
