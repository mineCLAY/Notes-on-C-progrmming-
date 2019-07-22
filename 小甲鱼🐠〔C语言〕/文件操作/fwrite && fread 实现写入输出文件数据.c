/*
 * 键盘输入 4 个学生的有关数据
 * 然后把它们以二进制的格式
 * 存储到磁盘文件中
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

// 宏定 SIZE 为  4 提高移植性
#define SIZE 4

// 定义结构体类型 student
struct student {

  char name[10];
  int num;
  int age;
  char addr[15];

}
// 定义结构体变量
stu[SIZE];

// 定义函数 save
int save(void) {

  // 定义文件指针
  FILE *fp;
  fp = fopen("student-list" , "wb");

  // 判断是否出错
  if (NULL == fp) {
    // 输出错误信息
    fprintf(stderr , "fopen error: %s\n" ,
            strerror(errno));
    // 退出程序
    exit(EXIT_FAILURE);
  }

  // 循环写入数据
  for (int i = 0; i < SIZE; i++) {
    //开始向文件写入数据
    fwrite(&stu[i] , sizeof (struct student) , 1 , fp);

    // 判断是否出错
    if (0 != ferror(fp)) {
      // 输出错误信息
      fprintf(stderr , "write error: %s\n" ,
              strerror(errno));
      // 关闭流 fp 防止内存泄露
      fclose(fp);
    }
  }

}

int main(void) {

  // 声明函数 load()
  int load(void);

  // 叫用户输入的学生的i像你洗
  puts("Enter the student's name , num , age and address:");
  // 循环赋值
  for (int i = 0; i < SIZE; i++) {
    scanf("%s %d %d %s" , &stu[i].name , &stu[i].num ,
          &stu[i].age , &stu[i].addr);
  }

  // 调用函数 save 将数据写入文件
  save();

  /*
   * 调用函数 load
   * 将文件数据读出并输出
   */
  load();

  return 0;
}

// 定义函数 load()
int load(void) {

  // 定义文件指针 read
  FILE *read;
  read = fopen("student-list" , "r");

  // 将文件位置指针移到开图
  rewind(read);

  // 循环读取文件数据
  for (int i = 0; i < SIZE; i++) {
    // 开始读取
    fread(&stu[i] , sizeof (struct student) , 1 , read);
    // 判断是否出错
    if (0 != ferror(read)) {
      // 输出错误信息
      fprintf(stderr , "read error: %s\n" ,
              strerror(errno));
      // 结束程序
      exit(EXIT_FAILURE);
    }
  }

  // 设置排版
  puts("name    number    age     address");

  for (int i = 0; i < SIZE; i++) {
    // 输出结果
    printf(" %s %7d  %5d %10s" ,
            stu[i].name , stu[i].num , stu[i].age , stu[i].addr);
    // 输出换行
    putchar('\n');
  }

  // 关闭文件流 read 防止内存泄露
  fclose(read);

}
