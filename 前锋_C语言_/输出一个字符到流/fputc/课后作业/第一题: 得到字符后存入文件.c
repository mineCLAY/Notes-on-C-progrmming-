/*
 * 用 fgetc 从标准中得到字符
 * 用 fputc 把内容存到文件中
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(void) {

  // 定义文件流 HU
  FILE *HHH;
  HHH = fopen("fprintf.out" , "w+");
  // 将内容用 fprintf 存入文件 fprintf.out 中
  fprintf(HHH , "Yo_this_HHH_红花会.\n");

  // 定义文件流 fp
  FILE *fp;
  fp = fopen("fgetc.out" , "w+");

  // 判断是否错误
  if (NULL == fp) {
    fprintf(stderr , "fopen error: %s\n" ,
                      strerror(errno));
    // 退出程序
    exit(EXIT_FAILURE);
  }

  // 定义存放内容的变量 str
  int str;
  // 开始循环 读取 fprintf.out 中的内容
  for (; 1;) {
    str = fgetc(HHH);
    if (feof(HHH)) {
      break;
    }
  }
  // 将数据存入 fgetc.out
  fputc(str , fp);
  fputc('\n' , fp);

  // 关闭流 HHH、fp 防止内存泄漏
  fclose(HHH);
  fclose(fp);

  return 0;
}

/*
 * 只能用两个函数
 * 太难了
 * 我以后做
 * 似乎很多我都没有完成耶
 * ε=(´ο｀*)))唉
 */
