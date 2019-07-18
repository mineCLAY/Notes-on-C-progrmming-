/*
 * 对候选人得票的统计程序
 * 设有 3个候选人
 * 每次输入一个得票的候选人的名字
 * 要求最后输出各个人得票结果
 * 编程实现 投票系统 功能
 */

#include <stdio.h>
#include <string.h>

// 定义结构体了类型 candidate
struct candidate {
  int votes;
}
// 定义结构体数组
candider[3];


int main(void) {

  // 定义存储输入的名字的变量
  char c[100];
  // 声明函数 statistics()
  int statistics();

  // 告诉用户来到投票系统
  puts("You came to the voting system\n");
  // 告诉用户谁要竞选
  puts("\t***********************\n"
       "\t*Candidate: HJW WTF HC*\n"
       "\t***********************\n");

  // 循环记录票数
  for (int i = 1; i <= 6;i++) {
    // 叫用户输入投给的人
    printf("Who is the %d vote for: " , i);
    // 将用户输入的名字赋给 c
    scanf("%s" , c);

    // 判断名字是否为 HJW
    if (0 == strcmp("HJW" , c)) {
      // HJW 票数加一
      candider[1].votes++;
    }

    // 判断名字是否为 WTF
    else if (0 == strcmp("WTF" , c)) {
      // WTF 票数加一
      candider[2].votes++;
    }

    // 判断名字是否为 HC
    else if (0 == strcmp("HC" , c)) {
      // HC 票数加一
      candider[3].votes++;
    }

    /*
     * 将存储名字的变量重置
     * 以便下次使用
     */
    c[0] = '\0';
  }

  // 调用函数 statistics()
  statistics();

  return 0;
}

// 定义函数 statistics()
int statistics(void) {

  // 输出候选人得票数
  printf("\nHJW votes: %d\n" , candider[1].votes);
  printf("WTF votes: %d\n" , candider[2].votes);
  printf("HC votes: %d\n" , candider[3].votes);

  // 判断是不是第一个候选人票数最多
  if ((candider[1].votes > candider[2]) && (candider[1].votes > candider[3].votes)) {
    // 输出结果
    puts("\nThe most votes are: HJW!!!");
  }

  // 判断是不是第二个候选人票数最多
  else if ((candider[2].votes > candider[1]) && (candider[2].votes > candider[3].votes)) {
    // 输出结果
    puts("\nThe most votes are: WTF!!!");
  }

  // 判断是不是第三个候选人票数最多
  else if ((candider[3].votes > candider[1]) && (candider[3].votes > candider[2].votes)) {
    // 输出结果
    puts("\nThe most votes are: HC!!!");
  }

}
