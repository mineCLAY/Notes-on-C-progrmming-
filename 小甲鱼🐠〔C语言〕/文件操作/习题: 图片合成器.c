/*
 * 图片、文件合成器
 *
 * 思路:
 * DOS 命令行指令
 * copy /b file1+file2
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(void) {

  // 声明文件指针
  FILE *f_pic , *f_com , *f_target;
  // 定义所需变量
  char ch , pic_name[20] , com_name[20] , target_name[20];

  // 叫用户输入图片名字
  puts("Enter image name:");
  // 将用户输入的图片名字赋给 pic_name
  scanf("%s" , pic_name);

  // 叫用户输入压缩文件名字
  puts("Enter the name of compressed file:");
  // 将用户输入的名字赋给 com_name
  scanf("%s" , com_name);

  // 叫用户输入输入目标文件
  puts("Enter the name of the target file:");
  // 将用户输入的名称赋给 target_name
  scanf("%s" , target_name);

  // 定义文件指针
  f_pic = fopen(pic_name , "rb");
  f_com = fopen(com_name , "rb");
  f_target = fopen(target_name , "wb");

  // 判断是否出错
  if (NULL == f_pic) {
    // 输出错误信息
    fprintf(stderr , "fopen error: %s \n" ,
            strerror(errno));
    // 退出程序
    exit(EXIT_FAILURE);
  }

  if (NULL == f_com) {
    // 输出错误信息
    fprintf(stderr , "fopen error: %s\n" ,
            strerror(errno));
    // 退出程序
    exit(EXIT_FAILURE);
  }

  if (NULL == f_target) {
    // 输出错误信息
    fprintf(stderr , "fopen error: %s\n" ,
            strerror(errno));
    // 退出程序
    exit(EXIT_FAILURE);
  }

  /*
   * 循环读出文件数据
   * 并将其写入文件
   */
  while (!(feof(f_pic))) {
    ch = fgetc(f_pic);
    fputc(ch , f_target);
  }
  // 关闭文件流 f_pic 防止内存泄露
  fclose(f_pic);

  while (!(feof(f_com))) {
    ch = fgetc(f_com);
    fputc(ch , f_target);
  }
  // 关闭文件流防止内存泄露
  fclose(f_com);
  fclose(f_target);

  /*
   * 让程序停一下
   * 使它不会一闪而过
   */
   getchar();
   getchar();

  return 0;
}

#if 0

// DOS 系统下命令行指令

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

  // 关闭文件流防止内存泄露
  fclose(compress);
  fclose(image);

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

  // 关闭文件流 fp 防止内存泄露
  fclose(fp);

}

#endif
