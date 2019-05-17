//01. 如果要判断是否 a 大于 b , 你怎么写 ? 是 if (a > b) 还是 if (b < a) 呢 ? 这两个有什么区别呢 ?

答:
  我写 if (a > b) , 不知道有什么区别诶
  
//02. 你写信是先写爸爸还是妈妈呢 ?

答:
  隐私不可告
  
//03. li 韵姿 的择偶标准是: 如果有爹娘的必须有车有房; 如果有爹或有娘的必须车子或房子有一个; 编程来完成

答:

#include <stdio.h>

int main(void){
  int have , no , not;
  printf("请输入你有没有爹娘(有就输入 1 只有一个家长就输入 0):\n");
  scanf("%d" , &have);
  if (1 == have){
    printf("那么你有房和车吗 ?(有就输入 1 没有就输入 0)\n");
    scanf("%d" , &no);
  } else if (1 == no) {
    printf("你应该找个地方静静!\n");
  } else {
    printf("OK 就你了!\n");
  } switch (have){
    case 0: printf("那你有房子或者车子吗 ?\n"); break;
  }
  if (0 == not){
    printf("OK 就你了!\n");
  }
  return 0;
}
