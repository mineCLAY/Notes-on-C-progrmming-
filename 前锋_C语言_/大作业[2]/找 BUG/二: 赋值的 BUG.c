/*
 * 14.04 找出下面程序的 BUG
 *
 * nfields = fscanf(stdin , "%4d %4d %4d" , &a , &b , &c);
 */

答:
  nfields 无法读取三个变量中
  任何一个的值
  它的作用是判断有几个变量被赋值
  这个方法不错哟
