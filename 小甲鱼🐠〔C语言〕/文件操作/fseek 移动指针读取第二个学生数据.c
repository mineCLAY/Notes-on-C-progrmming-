/*
 * Example_fseek.c
 * 在学号文件 studentlist 中
 * 读出第二个学生的数据
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/*
 * 宏定义 I 为 1
 * 用于定位第 I 个结构
 * 提高程序移植性
 */
#define I 1

// 定义结构体类型 student
struct student {

  char name[20];
  int num;
  int age;
  char addr[15];

}
// 定义结构体变量 boy
boy;

int main(void) {

  // 定义文件指针
  FILE *fp;
  fp = fopen("studentlist" , "r");

  // 判断是否出错
  if (NULL == fp) {
    // 输出错误信息
    fprintf(stderr , "fopen error: %s\n" ,
            strerror(errno));
    // 退出程序
    exit(EXIT_FAILURE);
  }

  // 将文件中位置指针移到开头
  rewind(fp);
  // 将文件指针向前移动
  fseek(fp , I * sizeof (struct student) , 0);
  // 读取文件数据
  fread(&boy , sizeof (struct student) , 1 , fp);

  // 设置排版
  puts("\nname\tnumber         age     addr");

  // 输出结果的
  printf("%s\t%5d  %7d        %s\n" ,
          boy.name , boy.num , boy.age , boy.addr);

  /*
   * 让程序停一下
   * b不会一闪而过
   */
  getchar();

  return 0;
}
