/*
 * 02. 编程 , 键盘输入男、女体重 , 求出是否通过空姐、空少标准. 有一套公式可以换算 , 即:
 * 男性体重 = [身高 (厘米) - 105 (厘米)] (公斤) (+ & - 10%)
 * 女性体重 = [身高 (厘米) - 110 (厘米)] (公斤) (+ & - 10%)
 */

#include <stdio.h>

int main(void){ //定义整型 main 主函数 并开始
  int  gender , boy_height , girl_height , boy_heavy , girl_heavy; //整型变量 gender 性别 男孩、女孩的身高、体重、体重标准
  double boy_weight_standrad1 , boy_weight_standrad2 , girl_weight_standrad1 , girl_weight_standrad2;
  loop: printf("input boy(1) && girl(0):\n"); //loop 行 让用户输入 男孩 还是 女孩
  scanf("%d" , &gender); //用户输入的值存入 gender
  if (1 == gender){ //判断 gender 是否为 boy
    printf("input boy_height(unit cm):\n");
    scanf("%d" , &boy_height);
    if ((173 <= boy_height) && (185 > boy_height)){ //判断男孩身高是否符合空少条件
        printf("input boy_heavy(unit kg):\n"); //让用户输入 男孩的体重
        scanf("%d" , &boy_heavy); //用户输入的值存入 boy_heavy
        boy_weight_standrad1 = (boy_height - 105) * 0.9; //计算空少体重标准最低要求
        boy_weight_standrad2 = (boy_height - 105) * 1.1; //计算空少体重标准最大限制
        if ((boy_heavy >= boy_weight_standrad1) & (boy_heavy == boy_weight_standrad2)){ //判断男孩是否符合空少标准
        printf("你符合空少标准!\n"); //如果符合 输出结果
        } else { //如果不符合
        printf("你不符合空少的标准!\n"); //输出结果
        }
        } else if ((173 > boy_height) || (185 < boy_height)){ //如果男孩身高不符合标准
        printf("你不符合空少的标准!\n"); //输出结果
      }
    } else if (0 == gender){ //判断 gender 是否为 girl
    printf("input girl height(unit cm):\n"); //让用户输入 girl_height(女孩身高)
    scanf("%d" , &girl_height); //用户输入的值存入 girl_height
    if ((163 <= girl_height) && (175 > girl_height)){ //判断女孩身高是否符合空姐条件
      printf("input girl_heavy(unit kg):\n"); //让用户输入 女孩的体重
      scanf("%d" , &girl_heavy); //用户输入的值存入 girl_heavy
      girl_weight_standrad1 = (boy_height - 110) * 0.9; //计算空姐体重标准最低要求
      girl_weight_standrad2 = (boy_height - 110) * 1; //计算空姐体重标准最大限制
      if ((boy_heavy >= boy_weight_standrad1) && (boy_heavy == boy_weight_standrad2)){ //判断女孩是否符合空少标准
        printf("你符合空姐标准!\n"); //如果符合 输出结果
      } else { //如果不符合
        printf("你不符合空姐的标准!\n"); //输出结果
      }
    } else if ((163 > girl_height) || (175 < girl_height)){ //如果女孩身高不符合
        printf("你不符合空姐标准"); //输出结果
    }
  } else if ((0 != gender) && (1 != gender)){ //如果用户输入的不是 boy 也不是 girl
  goto loop; //那就重新执行 loop 行
  }
  return 0; //函数返回值 0
} //main 主函数结束
