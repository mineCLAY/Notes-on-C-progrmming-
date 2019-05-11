//06. 编程 , 输入交通信号灯状态 , 打印交通信号灯交规系统

#include <stdio.h>

enum TRAFFIC_LIGHT {RED = 1 , YELLOW , GREEN};
int main(){
  int light;
  printf("请输入: 1(红灯) 2(黄灯) 3(绿灯)");
  scanf("%d" &light);
  switch(light){
    case RED: printf("红灯 , 禁止车辆通行 , 闯红灯罚 6 分.\n"); break;
    case YELLOW: printf("黄灯 , 已越过停止线的车辆继续行驶 , 没有越过停止线的车等待.\n"); break;
    case GREEN: printf("绿灯 , 准许车辆通行 , 但转弯车辆不得妨碍直行车辆行驶.\n"); break;
    default: printf("你输入的错误.\n"); break;
  }
  return 0;
}
