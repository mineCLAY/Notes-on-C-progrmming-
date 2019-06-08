/*
 * 把五个字段赋值给相应的五个变量
 * 并且输出这些变量的值到文件
 * 五个字段如:
 * 艾希 , 女  , 23 , 未婚 , 1.65
 * 还有你要加的记录 都是以 , 来分隔的
 *
 * 提示如下代码来处理 stream:
 * FILE *stream;
 * stream = fopen("fprintf.out" , "w");
 * fprintf(stream , "格式控制字段" , 变量);
 */

#include <stdio.h>

int main(void) {

  FILE *stream;
  char *liuyunzi = "刘韵姿" , *age = "12" , *nv = "women" , *weihun = "weihun" , *height = "165";
  fprintf(stream , " %s\n %s\n %s\n %s\n %s\n" ,
		                 liuyunzi , age , nv , weihun , height); 

  return 0;
}
