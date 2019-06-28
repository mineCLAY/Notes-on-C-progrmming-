/*
 * 14.02 讨论二
 *
 * 为什么 fgetc、getc、getchar、fputc、putc、putchar
 * 处理的都是字符型
 * 而返回值为 int 型
 * 而不是 char 型
 */

答:
  机器中存储 字符 的形式
  是用 ASCLL 编码
  字符有它的 ASCLL 码值
  所以返回 int 型
  就是某个 字符 的 ASCLL 码
  如果返回 char 型
  机器则无法识别 
