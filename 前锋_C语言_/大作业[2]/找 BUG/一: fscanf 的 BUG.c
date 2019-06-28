/*
 * 14.03 找出下面程序的 BUG
 *
 * int a ,b;
 * while(2 == fscanf(input , "%d %d" , &a , &b)) {
 *   // Process the values a and b.
 * }
 */

答:
  fscanf 没有参数 input 选项
  所以编译时会出错
  尽管删去 input 也无法读取
  用户输入的数据线
