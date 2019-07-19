/*
 * 图片、文件合成器
 *
 * 主要使用 DOS 命令行指令
 * copy /b file1+file2
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(void) {

  // 声明函数 synthesis
  void synthesis(char compress[] , char image[]);
  // 定义所需变量
  char compress[100] , image[100];

  // 叫用户输入压缩文件名字
  puts("Enter the name of compressed file:");
  // 将用户输入的名字赋给 compress
  scanf("%s" , compress);

  // 叫用户输入图片名字
  puts("Enter image name:");
  // 将用户输入的图片名字赋给 image
  scanf("%s" , image);

  // 调用函数 synthesis()
  synthesis(compress , image);

  return 0;
}

// 定义函数 synthesis
void synthesis(char compress[100] , char image[100]) {

  // 定义存储合成文件名称的变量
  char syn_result[128] , copy[666] = "copy ";
  // 叫用户输入合成的名字
  puts("Enter the name of the target file:");
  // 将用户输入的文件名赋给 syn_result
  scanf("%s" , syn_result);

  // 开始合成
  puts("\nStrart synthesis.............\n............\n");

  // 定义文件指针 fp
  FILE *fp;
  fp = fopen(syn_result , "w+");
  // 判断是否出错
  if (NULL == fp){
    // 输出错误信息
    fprintf(stderr , "synthesis error: %s\n" ,
            strerror(errno));
    // 退出程序
    exit(EXIT_FAILURE);
  }

  // 执行命令行指令
  system(strcat(strcat(strcat(strcat(strcat(copy , compress) , "+") , image) , " ") , syn_result));
  // 提示合成成功
  puts("\n\tSuccessful synthesis!!!");

}
