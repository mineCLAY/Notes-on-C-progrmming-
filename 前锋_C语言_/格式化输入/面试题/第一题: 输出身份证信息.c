/*
 * 01 身份证信息
 *
 * 拿出你的身份证(因为是隐私 所以瞎编)
 * 键盘输入所有信息存入文件
 * 然后从文件独处所有信息
 * 显示在屏幕上
 * 编程来完成
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(void) {

  char name[32];
  char hao[32]; // 定义存储身份证号的变量
  FILE *stream;
  stream = fopen("fscanf.out" , "w+");
  if (NULL == stream) {
    // 输出错误原因
    fprintf(stderr ,
            "fopen error: %s\n" ,
            strerror(errno));
    exit(EXIT_FAILURE); // 退出程序
  } else {
    // 将数据写入文件
    fprintf(stream , "%s , %s" ,
            "my_girl_HU" , "CA520666233LY");
    // 将指针设置至文件开头
    fseek(stream , 0L , SEEK_SET);

    // 将数据存入变量
    fscanf(stream , "%s , %s" ,
           &name , &hao);

    // 输出身份证信息
    printf("name: %s\n身份证号: %s\n" ,
            name , hao);

    // 关闭流 stream 让它内存不泄露
    fclose(stream);
  }

  return 0;
}
