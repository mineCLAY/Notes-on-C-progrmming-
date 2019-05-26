//01. 编程 , 键盘输入男、女身高 , 求出是否通过空姐、空少标准. 女性身高 1.64 ~ 173 cm , 男性身高 173 ~ 183.
#include <stdio.h>

int main(void){ //定义整型 main 主函数 并开始
  int gender , boy_height , girl_height; //整型变量 gender 性别 男孩、女孩的身高
  loop: printf("input boy(1) & girl(0):\n"); //loop 行 让用户输入 男孩 还是 女孩
  scanf("%d" , &gender); //用户输入的值存入 gender
  if (1 == gender){ //判断 gender 是否为 boy
    printf("input boy_height(unit cm):\n");
    scanf("%d" , &boy_height);
    if ((173 <= boy_height) && (183 > boy_height)){ //判断男孩身高是否符合空少条件
        printf("你符合空少的标准!\n"); //如果符合 输出结果
    } else { //如果不符合
        printf("你不符合空少的标准!\n"); //输出结果
    }
  } else if (0 == gender){ //判断 gender 是否为 girl
    printf("input girl height(unit cm):\n"); //让用户输入 girl_height(女孩身高)
    scanf("%d" , &girl_height); //用户输入的值存入 girl_height
    if ((164 <= girl_height) && (173 > girl_height)){ //判断女孩身高是否符合空姐条件
        printf("你符合空姐的标准!\n"); //如果符合 输出结果
    } else { //如果不符合
        printf("你不符合空姐的标准!\n"); //输出结果
    }
  } else if ((0 != gender) && (1 != gender)){ //如果用户输入的不是 boy 也不是 girl
  goto loop; //那就重新执行 loop 行
  }
  return 0; //函数返回值 0
} //main 主函数结束
